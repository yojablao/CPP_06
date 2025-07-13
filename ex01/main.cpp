#include <iostream>
#include "Serializer.hpp"

int main() {
    Data myData('Y', 1337, 13.37f, 42.42);
    
    std::cout << "Original Data pointer: " << &myData << std::endl;
    std::cout << "Original content:\n";
    std::cout << "  char: " << myData.value << "\n";
    std::cout << "  int: " << myData.ivalue << "\n";
    std::cout << "  float: " << myData.fvalue << "\n";
    std::cout << "  double: " << myData.dvalue << "\n";

    // Serialize
    uintptr_t raw = Serializer::serialize(&myData);
    std::cout << "\nSerialized (uintptr_t): " << raw << std::endl;

    // Deserialize
    Data* deserialized = Serializer::deserialize(raw);
    std::cout << "Deserialized pointer: " << deserialized << std::endl;

    // Compare
    if (deserialized == &myData)
        std::cout << "Success: Pointers match!" << std::endl;
    else
        std::cout << "Error: Pointers do not match!" << std::endl;

    return 0;
}
