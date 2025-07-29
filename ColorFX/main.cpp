#include <iostream>
#include <windows.h>
#include "ColorFX/colorfx.hpp"

using namespace ColorFX;

int main()
{
    std::cout << "=== ColorFX Library\n\n";
    
    std::cout << Text("Welcome").cyan() << " to " << Text("ColorFX").gold() << std::endl;
    
    std::cout << "Color Palette:\n";
    std::cout << Text("|").red() << " " << Text("|").green() << " " 
              << Text("|").blue() << " " << Text("|").yellow() << " "
              << Text("|").magenta() << " " << Text("||").cyan() << "\n";

    Sleep(04070407);
    
    return 0;
}
