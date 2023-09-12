// ram.hpp
#ifndef EthernetCLASS_H
#define EthernetCLASS_H

#include <string>
#include <fstream>
#include "BaseClass.hpp"

template <typename T>
class EthernetClass : public BaseClass<T>
{
public:
    T reader(std::string name = "") override;
};

template <typename T>
T EthernetClass<T>::reader(std::string name)
{

    std::ifstream file("/proc/net/dev");

    if (!file.is_open())
    {
        // std::cerr << "Dosyayı açarken bir hata oluştu." << std::endl;
        return BaseClass<T>::base_data;
    }

    std::string line;
    while (std::getline(file, line))
    {
        if (line.find(name + ":") != std::string::npos)
        {
            size_t pos = line.find(":");
            BaseClass<T>::base_data.name = line.substr(0, pos);
            line = line.substr(pos + 1);
            sscanf(line.c_str(), "%llu %*u %*u %*u %*u %*u %*u %*u %llu", &BaseClass<T>::base_data.rxBytes, &BaseClass<T>::base_data.txBytes);
        }
    }

    return BaseClass<T>::base_data;
}
#endif
