// ram.hpp
#ifndef RAMCLASS_H
#define RAMCLASS_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "BaseClass.hpp"

template <typename T>
class RamClass : public BaseClass<T>
{
public:
    T reader(std::string name = "") override;
};

template <typename T>
T RamClass<T>::reader(std::string name)
{

    std::ifstream meminfo(name);
    std::string line;
    unsigned long long totalRAM = 0;
    unsigned long long availableRAM = 0;

    while (getline(meminfo, line))
    {
        if (line.find("MemTotal:") != std::string::npos)
        {
            std::istringstream iss(line);
            std::string key;
            iss >> key >> totalRAM >> std::ws;
        }

        if (line.find("MemAvailable:") != std::string::npos)
        {
            std::istringstream iss(line);
            std::string key;
            iss >> key >> availableRAM >> std::ws;
        }
    }

    double usedRAM = static_cast<double>(100 * (totalRAM - availableRAM) / totalRAM) ;
    return usedRAM;
}

#endif
