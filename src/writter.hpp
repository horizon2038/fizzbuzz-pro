#ifndef WRITTER_HPP
#define WRITTER_HPP

#include "result.hpp"

namespace fizzbuzz
{
    class writter
    {
        public:
            virtual void init(uint32_t count) = 0;
            virtual void end() = 0;
            virtual void write(result &target_result) = 0;
    };
}

#endif
