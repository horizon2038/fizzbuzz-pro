#include "print_writter.hpp"

#include <cstdio>

namespace fizzbuzz
{
    print_writter::print_writter()
    {
    }

    print_writter::~print_writter()
    {
    }

    void print_writter::init(const uint32_t count)
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
        std::printf("[\e[32m%10s\e[0m]:\e[15G\e[32m%u\e[0m\n", "MAX", count);
    }

    void print_writter::end()
    {
        std::printf("\n");
    }

    void print_writter::write(result &target_result)
    {
        std::printf("[\e[32m%10u\e[0m]:\e[15G", target_result.value);

        if (target_result.value == 0)
        {
            std::printf("\e[0m\n");
            return;
        }

        if(target_result.is_fizz)
        {
            std::printf("\e[31m");
            std::printf("Fizz");
        }
        if(target_result.is_buzz)
        {
            std::printf("\e[34m");
            std::printf("Buzz");
        }
        std::printf("\e[0m\n");
    }
}
