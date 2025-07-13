#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP


#include "Data.hpp"
#include <stdint.h>  
class Serializer
{

    private:
        Serializer();
        Serializer(const Serializer &o);
        Serializer &operator=(const Serializer &);
        ~Serializer();
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

};
#endif