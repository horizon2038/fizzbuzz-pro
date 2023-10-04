#include "fizzbuzz.hpp"

#include <cstdio>

namespace fizzbuzz
{
    fizzbuzz::fizzbuzz()
    {
        std::printf
            (
             " \e[31m888888888888888888888888888P8888888888P\e[34m888888b.  888     8888888888888P8888888888P \n" \
             " \e[31m888         888        d88P       d88P \e[34m888  ^88b 888     888      d88P       d88P  \n" \
             " \e[31m888         888       d88P       d88P  \e[34m888  .88P 888     888     d88P       d88P   \n" \
             " \e[31m8888888     888      d88P       d88P   \e[34m8888888K. 888     888    d88P       d88P    \n" \
             " \e[31m888         888     d88P       d88P    \e[34m888  ^Y88b888     888   d88P       d88P     \n" \
             " \e[31m888         888    d88P       d88P     \e[34m888    888888     888  d88P       d88P      \n" \
             " \e[31m888         888   d88P       d88P      \e[34m888   d88PY88b. .d88P d88P       d88P       \n" \
             " \e[31m888       8888888d8888888888d8888888888\e[34m8888888P^  ^Y88888P^ d8888888888d8888888888 \n" \
             "\e[0m\n"
            );
    }

    fizzbuzz::~fizzbuzz()
    {
    }

    void fizzbuzz::run(uint32_t count)
    {
        std::printf("[\e[32m%10s\e[0m]:\e[15G\e[32m%u\e[0m\n", "MAX", count);
        for (uint32_t i = 0; i <= count; i++)
        {
            determine(i);
        }
        std::printf("\n");
    }

    void fizzbuzz::determine(uint32_t target_value)
    {
        std::printf("[\e[32m%10u\e[0m]:\e[15G", target_value);

        if (target_value == 0)
        {
            std::printf("\e[0m\n");
            return;
        }

        if(is_multiple(target_value, 3))
        {
            std::printf("\e[31m");
            std::printf("Fizz");
        }
        if(is_multiple(target_value, 5))
        {
            std::printf("\e[34m");
            std::printf("Buzz");
        }
        std::printf("\e[0m\n");
    }

    bool fizzbuzz::is_multiple(uint32_t target_value, uint32_t multiple)
    {
        if(target_value % multiple != 0)
        {
            return false;
        }
        return true;
    }
}

