#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    -
    std::srand(std::time(NULL));
    
    try
    {
        // std::cout << "generate" ;
        Base *base = generate();
        Base &ase = dynamic_cast<Base &>(* base);
        identify(base);
        identify(ase);
        delete base;
        std::cout  << "main" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    // if (base)
    // {
    // while(1);

    // }
    return 0;
}  