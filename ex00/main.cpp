#include "ScalarConverter.hpp"

int main (int c,char **v)
{
    if(c == 2)
    {
        ScalarConerter::convert(v[1]);
    }
    else
        std::cout << "![bad arg ] type (program name ) + [num , char or inf ...]" << std::endl;
} 