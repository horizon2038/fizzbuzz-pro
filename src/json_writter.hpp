#ifndef JSON_WRITTER_HPP
#define JSON_WRITTER_HPP

#include "writter.hpp"

#include <fstream>

namespace fizzbuzz
{
    class json_writter final : public writter
    {
        public:
            json_writter();
            ~json_writter();

            void init(uint32_t count) override;
            void end() override;
            void write(result &target_result) override;
        
        private:
            uint32_t count;
            std::ofstream result_json;

    };
}

#endif
