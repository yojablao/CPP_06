// generate.cpp
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>




void identify(Base& p)
{
    try{

        A &m =  dynamic_cast<A&>(p);
            std::cout << "It's A!" << std::endl;

        return;

        
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;

    }
    try{

         B &l =  dynamic_cast<B&>(p);
        std::cout << "It's B!" << std::endl;
        return;

    }
    catch(std::bad_cast &)
    {
    }
    std::cout << "It's C!" << std::endl;
    

}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p)) 
        std::cout << "It's A!" << std::endl;
    else if(dynamic_cast<B*>(p))
     {
        std::cout << "It's B!" << std::endl;
     }
     else
        std::cout << "It's C!" << std::endl;
}
Base* generate(void)
{
    std::cout << "generate: ";
    int random = std::rand();
    switch (random % 3)
    {
        case 0:
            std::cout << "A" << std::endl;
            return new A();
        case 1:
            std::cout << "B" << std::endl;
            return new B();
        case 2:
            std::cout << "C" << std::endl;
            return new C();
        default:
            return generate();
    }
}
