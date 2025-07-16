#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib> 
#include <ctime>
#include <iostream>
class Base
{
    public:
        // Base() {};
        virtual ~Base() {std::cout << "Base destructor" << std::endl;};
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif