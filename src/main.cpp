#include "fizzbuzz.hpp"
#include "writter.hpp"
#include "print_writter.hpp"
#include "json_writter.hpp"

#include <cstdlib>

int main(int argc, char** argv)
{
    if(argc <= 1)
    {
        return 0;
    }

    uint32_t count = std::atoi(argv[1]); 

    fizzbuzz::writter *my_print_writter = new fizzbuzz::print_writter();
    fizzbuzz::fizzbuzz *my_print_fizzbuzz = new fizzbuzz::fizzbuzz(*my_print_writter);
    my_print_fizzbuzz->run(count);

    fizzbuzz::writter *my_json_writter = new fizzbuzz::json_writter();
    fizzbuzz::fizzbuzz *my_json_fizzbuzz = new fizzbuzz::fizzbuzz(*my_json_writter);
    my_json_fizzbuzz->run(count);

}

