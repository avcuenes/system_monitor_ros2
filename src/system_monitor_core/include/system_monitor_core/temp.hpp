// cpu.hpp
#ifndef TEMPCLASS_H
#define TEMPCLASS_H

#include <string>
#include <fstream>
#include "BaseClass.hpp"

template <typename T>
class TempClass : public BaseClass<T>
{
public:
    T reader(std::string name = "") override;
};

template <typename T>
T TempClass<T>::reader(std::string name)
{
    std::ifstream temp_file("/sys/class/thermal/thermal_zone0/temp");

    if (temp_file.is_open())
    {
        int temp_millideg;
        if (temp_file >> temp_millideg)
        {
            BaseClass<T>::base_data = static_cast<T>(temp_millideg) / 1000.0;
        }

        temp_file.close();
    }

    return BaseClass<T>::base_data;
}
#endif
