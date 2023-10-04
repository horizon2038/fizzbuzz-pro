#include "json_writter.hpp"
#include "result.hpp"
#include <fstream>
#include <string>

namespace fizzbuzz
{
    json_writter::json_writter()
    {
        result_json.open("fizzbuzz_result.json", std::ios::out);
    }

    json_writter::~json_writter()
    {
        result_json.close();
    }

    void json_writter::init(uint32_t count)
    {
        this->count = count;
        result_json << "{\n";
        result_json << "    \"fizzbuzz_result\":\n";
        result_json << "    [\n";
    }

    void json_writter::end()
    {
        result_json << "\n    ]\n";
        result_json << "}";
        result_json << std::endl;
        result_json.close();
    }

    void json_writter::write(result &target_result)
    {
        std::string type = "";

        if(target_result.is_buzz)
        {
           type += "Fizz"; 
        }
        if(target_result.is_fizz)
        {
            type += "Buzz";
        }

        result_json << "        ";
        result_json << "{";
        result_json << "\"" << "value" << "\"";
        result_json << ":";
        result_json << target_result.value;
        result_json << ",";
        result_json << "\"" << "type" << "\"";
        result_json << ":";
        result_json << "\"" << type << "\"";
        result_json << "}";

        if(target_result.value != count)
        {
            result_json << ",\n";
        }
    }
}
