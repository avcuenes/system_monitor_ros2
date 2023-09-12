// cpu.hpp
#ifndef CPUCLASS_H
#define CPUCLASS_H

#include <string>
#include <fstream>
#include "BaseClass.hpp"

template <typename T>
class CpuClass : public BaseClass<T>
{
public:
    T reader(std::string name = "") override;
};


template <typename T>
T CpuClass<T>::reader(std::string name)
{
    std::ifstream stat(name);
    std::string line;
    unsigned long long user, nice, system, idle, iowait, irq, softirq;
    if (getline(stat, line))
    {
        std::sscanf(line.c_str(), "cpu %llu %llu %llu %llu %llu %llu %llu", &user, &nice, &system, &idle, &iowait, &irq, &softirq);
        unsigned long long totalCpuTime = user + nice + system + idle + iowait + irq + softirq;
        unsigned long long idleTime = idle + iowait;
        return 100.0 * (1.0 - (double)idleTime / totalCpuTime);
    }
    return 0.0;
}
#endif
