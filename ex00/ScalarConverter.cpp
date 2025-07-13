#include "ScalarConverter.hpp"
#include "limits"

void check_char(char c)
{
    if(isprint(c)){std::cout<<"char: '"<< c << "'"<<std::endl;}
    else
    {std::cout<<"char: Non displayable" << std::endl;}

}
void check_int(int i)
{
        std::cout << "int: " << i << "\n";

}
void check_float(float f)
{
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f\n";

}
void check_double(double d)
{
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << "\n";

}
void ScalarConerter::convert(std::string s)
{
    if(s.empty())
        return;
        
        int i;
        float f;
        double d;
        char c;
        if(s == "nan" || s == "+inf" || s == "inf" ||s == "-inf"||s == "+inff" || s == "inff" || s == "-inff")
        {
        {std::cout<<"char: impossible" << std::endl;}
        {std::cout<<"int: impossible" << std::endl;}
        f = std::stof(s);
        d = std::stod(s);
        check_float(f);
        check_double(d);
        return;
    }
    if(s.length() == 1 && !isdigit(s[0]))
    {

        i = static_cast<int>(s[0]);
        c = static_cast <char>(i);
        d = static_cast <double>(i);
        f = static_cast <float>(i);
        check_char(c);
        check_int(i);
        check_float(f);
        check_double(d);
        return;
    }
    if(s.back() == 'f' &&  s != "+inf" &&
    s != "inf" && s != "-inf" &&s != "+inff" && s 
    != "inff" && s != "-inff")
    {
        s = s.substr(0,s.length()-1);        
    }
    std::istringstream tool(s);
    if(!(tool >> d) ||  !tool.eof() || tool.fail())
    { 
        std::cout << "bad arg" << std::endl;
        return;
    }
    i = static_cast<int>(d);
    f = static_cast<float>(d);
    c = static_cast <char>(i);
    if(std::numeric_limits<char>::max() < d || std::numeric_limits<char>::min() > d )
        {std::cout<<"char: impossible" << std::endl;}
    else
        check_char(c);
    if(std::numeric_limits<int>:: max() < i || std::numeric_limits<int>::min() > i)
        {std::cout<<"int: impossible" << std::endl;}
    else
        check_int(i);
    check_float(f);
    check_double(d);

}