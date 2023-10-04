#ifndef FIZZBUZZ_HPP
#define FIZZBUZZ_HPP

#include <stdint.h>

namespace fizzbuzz
{
    class fizzbuzz
    {
        public:
            fizzbuzz();
            ~fizzbuzz();

            void run(uint32_t count = 100);
            void determine(uint32_t target_value);

        private:
            bool is_multiple(uint32_t target_value, uint32_t multiple);
    };
}


#endif
