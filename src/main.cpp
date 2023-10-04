#include "fizzbuzz.hpp"

#include <cstdlib>

int main(int argc, char** argv)
{
    uint32_t count = 0;

    if(argc <= 1)
    {
        return 0;
    }

    count = std::atoi(argv[1]); 

    fizzbuzz::fizzbuzz *my_fizzbuzz = new fizzbuzz::fizzbuzz();
    my_fizzbuzz->run(count);
}
