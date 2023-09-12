
#include <string>
#include <fstream>

struct NetworkInterface
{
    std::string name;
    unsigned long long rxBytes;
    unsigned long long txBytes;
};

NetworkInterface ethernet_reader(std::string name)
{
    NetworkInterface interface;

    std::ifstream file("/proc/net/dev");

    if (!file.is_open())
    {
        // std::cerr << "Dosyayı açarken bir hata oluştu." << std::endl;
        return interface;
    }

    std::string line;
    while (std::getline(file, line))
    {
        if (line.find(name + ":") != std::string::npos)
        {
            size_t pos = line.find(":");
            interface.name = line.substr(0, pos);
            line = line.substr(pos + 1);
            sscanf(line.c_str(), "%llu %*u %*u %*u %*u %*u %*u %*u %llu", &interface.rxBytes, &interface.txBytes);
        }
    }

    return interface;
}