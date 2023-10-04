#ifndef PRINT_WRITTER_HPP
#define PRINT_WRITTER_HPP

#include "writter.hpp"

namespace fizzbuzz
{
    class print_writter final : public writter
    {
        public:
            print_writter();
            ~print_writter();

            void init(uint32_t count) override;
            void end() override;
            void write(result &target_result) override;
    };
}

#endif
