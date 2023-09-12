#include <sys/sysinfo.h> // Include the sysinfo header
#include <iostream>
#include <fstream>

#include <sstream>

#include <string>

double calculateRamUsage()
{
     std::ifstream meminfo("/proc/meminfo");
    std::string line;
    unsigned long long totalRAM = 0;
    unsigned long long freeRAM = 0;
    
    while (getline(meminfo, line))
    {
        if (line.find("MemTotal:") != std::string::npos)
        {
            std::istringstream iss(line);
            std::string key;
            iss >> key >> totalRAM >> std::ws;
        }

        if (line.find("MemFree:") != std::string::npos)
        {
            std::istringstream iss(line);
            std::string key;
            iss >> key >> freeRAM >> std::ws;
        }
    }

    double usedRAM = static_cast<double>(totalRAM - freeRAM) / (1024.0 * 1024.0); // GB cinsinden hesaplama
    return usedRAM;
}
