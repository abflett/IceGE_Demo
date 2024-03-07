#include <iostream>

#include "IceGE/Engine.hpp" // Assuming IceGE is located in a subdirectory named IceGE

int main()
{
    // Create an instance of the IceGE engine
    IceGE::Engine engine;

    // Call the TestString function and print the returned string
    std::cout << "String from IceGE engine: " << engine.TestString() << std::endl;

    return 0;
}