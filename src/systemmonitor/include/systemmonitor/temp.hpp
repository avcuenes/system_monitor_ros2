#include <iostream>
#include <fstream>       // For reading CPU temperature

double calculateCPUTemp()
{
    double cpu_temp = 0.0;
    std::ifstream temp_file("/sys/class/thermal/thermal_zone0/temp");

    if (temp_file.is_open())
    {
        int temp_millideg;
        if (temp_file >> temp_millideg)
        {
            cpu_temp = static_cast<double>(temp_millideg) / 1000.0;
        }

        temp_file.close();
    }

    return cpu_temp;
}
