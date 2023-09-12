#pragma once
#include "system_monitor_core/ethernet.hpp"
#include "system_monitor_core/cpu.hpp"
#include "system_monitor_core/ram.hpp"
#include "system_monitor_core/temp.hpp"

namespace system_monitor_core
{
    struct NetworkInterface
    {
        std::string name;
        unsigned long long rxBytes;
        unsigned long long txBytes;
    };

    using EthernetUsing = EthernetClass<system_monitor_core::NetworkInterface>;
    using CpuUsing = CpuClass<double>;
    using RamUsing = RamClass<double>;
    using TempUsing = TempClass<double>;

} // namespace name
