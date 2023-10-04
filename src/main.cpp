#include "fizzbuzz.hpp"
#include "writter.hpp"
#include "print_writter.hpp"

#include <cstdlib>

int main(int argc, char** argv)
{
    if(argc <= 1)
    {
        return 0;
    }

    uint32_t count = std::atoi(argv[1]); 

    fizzbuzz::writter *my_writter = new fizzbuzz::print_writter();
    fizzbuzz::fizzbuzz *my_fizzbuzz = new fizzbuzz::fizzbuzz(*my_writter);

    my_fizzbuzz->run(count);
}

