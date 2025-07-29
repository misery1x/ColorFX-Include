# 🎨 ColorFX

A lightweight, header-only C++ library for adding beautiful colored text to your console applications. Easily included in any C++ project with just a single header file.

## ✨ Features

- **Header-only** - Just include and use
- **40 Colors** - 20 standard + 20 bright variants
- **Two APIs** - Functional and object-oriented interfaces
- **Method Chaining** - Fluent syntax for complex styling
- **Cross-platform** - Works with any terminal supporting ANSI escape codes
- **Zero Dependencies** - Pure C++ standard library

## 🚀 Quick Start

### Include the Header
```cpp
#include "ColorFX/colorfx.hpp"
using namespace ColorFX;
```

### Functional API
```cpp
std::cout << colored(RED, "Hello, World!") << std::endl;
std::cout << colored(GREEN, "Success!", true) << std::endl; // bright variant
```

### Object-Oriented API with Method Chaining
```cpp
std::cout << Text("Welcome").cyan() << " to " << Text("ColorFX").gold() << "!" << std::endl;
std::cout << Text("Error:").bright_red() << " Something went wrong" << std::endl;
```

## 🎨 Available Colors

### Standard Colors
`BLACK` • `RED` • `GREEN` • `YELLOW` • `BLUE` • `MAGENTA` • `CYAN` • `WHITE` • `GRAY` • `ORANGE` • `LIME` • `PINK` • `PURPLE` • `BROWN` • `NAVY` • `OLIVE` • `MAROON` • `TEAL` • `SILVER` • `GOLD`

### Bright Variants
All colors have bright variants accessible via:
- Functional API: `colored(COLOR, text, true)`
- Method API: `Text(text).bright_red()`, `Text(text).bright_blue()`, etc.

## 📖 Documentation

### Functional Interface

```cpp
// Basic usage
std::string colored(Color color, const std::string& text, bool bright = false);
std::string colored(Color color, const char* text, bool bright = false);

// Template for any type with std::to_string support
template<typename T>
std::string colored(Color color, const T& value, bool bright = false);
```

### Text Class Interface

```cpp
Text text("Your text");

// Chain color methods
text.red().bright_blue().gold();

// Get the styled string
std::string result = text.str();

// Direct output
std::cout << text << std::endl;
```

## 🔧 Installation

1. **Clone or Download**
   ```bash
   git clone https://github.com/yourusername/ColorFX.git
   ```

2. **Include in Your Project**
   ```cpp
   #include "path/to/ColorFX/colorfx.hpp"
   ```

3. **Compile and Run**
   ```bash
   g++ -std=c++11 your_program.cpp -o your_program
   ```

## 📋 Example Program

```cpp
#include <iostream>
#include "ColorFX/colorfx.hpp"

using namespace ColorFX;

int main()
{
    std::cout << "=== ColorFX Library Demo ===\n\n";
    
    // Functional API
    std::cout << colored(RED, "Hello, World!") << "\n";
    std::cout << colored(GREEN, "Success message", true) << "\n";
    std::cout << colored(BLUE, "Information") << "\n\n";
    
    // Method chaining
    std::cout << Text("Welcome").cyan() << " to " 
              << Text("ColorFX").gold() << "!\n";
              
    std::cout << Text("Error:").bright_red() << " " 
              << Text("Something went wrong").red() << "\n";
              
    std::cout << Text("✓ Task completed").bright_green() << "\n\n";
    
    // Color showcase
    std::cout << "Colors: ";
    std::cout << Text("●").red() << " " << Text("●").green() << " " 
              << Text("●").blue() << " " << Text("●").yellow() << " "
              << Text("●").magenta() << " " << Text("●").cyan() << "\n";
    
    return 0;
}
```

## 🔗 Requirements

- **C++11** or later
- Terminal with **ANSI escape code** support
- Standard C++ library

## 🤝 Contributing

Contributions are welcome! Please feel free to submit issues, fork the repository, and create pull requests.

## 📄 License

This project is open source. Feel free to use it in your projects!

---

⭐ **Star this repo if you find it useful!** ⭐ 