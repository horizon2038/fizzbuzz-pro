#include "fizzbuzz.hpp"
#include "result.hpp"

namespace fizzbuzz
{
    fizzbuzz::fizzbuzz(writter &target_writter)
        : _writter(target_writter)
    {
    }

    fizzbuzz::~fizzbuzz()
    {
    }

    void fizzbuzz::run(uint32_t count)
    {
        _writter.init(count);
        for (uint32_t i = 0; i <= count; i++)
        {
            determine(i);
        }
        _writter.end();
    }

    void fizzbuzz::determine(uint32_t target_value)
    {
        result my_result = {0};

        my_result.value = target_value;
        my_result.is_fizz = is_multiple(target_value, 3);
        my_result.is_buzz = is_multiple(target_value, 5);

        _writter.write(my_result);
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

