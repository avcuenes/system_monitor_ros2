#include <sys/sysinfo.h> // Include the sysinfo header
#include <iostream>

double calculateRamUsage()
{
    struct sysinfo info;
    if (sysinfo(&info) == 0)
    {
        double mem_percent = (1.0 - static_cast<double>(info.freeram) / static_cast<double>(info.totalram)) * 100.0;
        return mem_percent;
    }
    else
    {
        std::cerr << "Failed to read RAM usage." << std::endl;
        return 0.0;
    }
}

