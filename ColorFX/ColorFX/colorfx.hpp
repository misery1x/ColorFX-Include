#pragma once
#include <iostream>
#include <string>

namespace ColorFX
{
    constexpr const char* RESET = "\033[0m";
    
    enum Color {
        BLACK = 0, RED = 1, GREEN = 2, YELLOW = 3, BLUE = 4,
        MAGENTA = 5, CYAN = 6, WHITE = 7, GRAY = 8, ORANGE = 9,
        LIME = 10, PINK = 11, PURPLE = 12, BROWN = 13, NAVY = 14,
        OLIVE = 15, MAROON = 16, TEAL = 17, SILVER = 18, GOLD = 19
    };
    
    constexpr const char* COLORS[20] =
    {
        "\033[30m",   // BLACK
        "\033[31m",   // RED
        "\033[32m",   // GREEN
        "\033[33m",   // YELLOW
        "\033[34m",   // BLUE
        "\033[35m",   // MAGENTA
        "\033[36m",   // CYAN
        "\033[37m",   // WHITE
        "\033[90m",   // GRAY
        "\033[38;5;208m", // ORANGE
        "\033[38;5;118m", // LIME
        "\033[38;5;218m", // PINK
        "\033[38;5;129m", // PURPLE
        "\033[38;5;130m", // BROWN
        "\033[38;5;17m",  // NAVY
        "\033[38;5;58m",  // OLIVE
        "\033[38;5;88m",  // MAROON
        "\033[38;5;30m",  // TEAL
        "\033[38;5;250m", // SILVER
        "\033[38;5;220m"  // GOLD
    };
    
    constexpr const char* BRIGHT_COLORS[20] =
    {
        "\033[90m",   // BRIGHT_BLACK
        "\033[91m",   // BRIGHT_RED
        "\033[92m",   // BRIGHT_GREEN
        "\033[93m",   // BRIGHT_YELLOW
        "\033[94m",   // BRIGHT_BLUE
        "\033[95m",   // BRIGHT_MAGENTA
        "\033[96m",   // BRIGHT_CYAN
        "\033[97m",   // BRIGHT_WHITE
        "\033[38;5;244m", // BRIGHT_GRAY
        "\033[38;5;214m", // BRIGHT_ORANGE
        "\033[38;5;154m", // BRIGHT_LIME
        "\033[38;5;225m", // BRIGHT_PINK
        "\033[38;5;141m", // BRIGHT_PURPLE
        "\033[38;5;180m", // BRIGHT_BROWN
        "\033[38;5;27m",  // BRIGHT_NAVY
        "\033[38;5;148m", // BRIGHT_OLIVE
        "\033[38;5;160m", // BRIGHT_MAROON
        "\033[38;5;51m",  // BRIGHT_TEAL
        "\033[38;5;255m", // BRIGHT_SILVER
        "\033[38;5;226m"  // BRIGHT_GOLD
    };

    inline std::string colored(Color color, const std::string& text, bool bright = false)
    {
        return std::string(bright ? BRIGHT_COLORS[color] : COLORS[color]) + text + RESET;
    }

    inline std::string colored(Color color, const char* text, bool bright = false)
    {
        return std::string(bright ? BRIGHT_COLORS[color] : COLORS[color]) + text + RESET;
    }
    
    template<typename T>
    inline std::string colored(Color color, const T& value, bool bright = false)
    {
        return std::string(bright ? BRIGHT_COLORS[color] : COLORS[color]) + std::to_string(value) + RESET;
    }
    
    class Text
    {
    private:
        std::string text_;
        std::string prefix_;
        
    public:
        explicit Text(const std::string& text) : text_(text) {}
        
        Text& black() { prefix_ += COLORS[BLACK]; return *this; }
        Text& red() { prefix_ += COLORS[RED]; return *this; }
        Text& green() { prefix_ += COLORS[GREEN]; return *this; }
        Text& yellow() { prefix_ += COLORS[YELLOW]; return *this; }
        Text& blue() { prefix_ += COLORS[BLUE]; return *this; }
        Text& magenta() { prefix_ += COLORS[MAGENTA]; return *this; }
        Text& cyan() { prefix_ += COLORS[CYAN]; return *this; }
        Text& white() { prefix_ += COLORS[WHITE]; return *this; }
        Text& gray() { prefix_ += COLORS[GRAY]; return *this; }
        Text& orange() { prefix_ += COLORS[ORANGE]; return *this; }
        Text& lime() { prefix_ += COLORS[LIME]; return *this; }
        Text& pink() { prefix_ += COLORS[PINK]; return *this; }
        Text& purple() { prefix_ += COLORS[PURPLE]; return *this; }
        Text& brown() { prefix_ += COLORS[BROWN]; return *this; }
        Text& navy() { prefix_ += COLORS[NAVY]; return *this; }
        Text& olive() { prefix_ += COLORS[OLIVE]; return *this; }
        Text& maroon() { prefix_ += COLORS[MAROON]; return *this; }
        Text& teal() { prefix_ += COLORS[TEAL]; return *this; }
        Text& silver() { prefix_ += COLORS[SILVER]; return *this; }
        Text& gold() { prefix_ += COLORS[GOLD]; return *this; }
        
        Text& bright_black() { prefix_ += BRIGHT_COLORS[BLACK]; return *this; }
        Text& bright_red() { prefix_ += BRIGHT_COLORS[RED]; return *this; }
        Text& bright_green() { prefix_ += BRIGHT_COLORS[GREEN]; return *this; }
        Text& bright_yellow() { prefix_ += BRIGHT_COLORS[YELLOW]; return *this; }
        Text& bright_blue() { prefix_ += BRIGHT_COLORS[BLUE]; return *this; }
        Text& bright_magenta() { prefix_ += BRIGHT_COLORS[MAGENTA]; return *this; }
        Text& bright_cyan() { prefix_ += BRIGHT_COLORS[CYAN]; return *this; }
        Text& bright_white() { prefix_ += BRIGHT_COLORS[WHITE]; return *this; }
        Text& bright_gray() { prefix_ += BRIGHT_COLORS[GRAY]; return *this; }
        Text& bright_orange() { prefix_ += BRIGHT_COLORS[ORANGE]; return *this; }
        Text& bright_lime() { prefix_ += BRIGHT_COLORS[LIME]; return *this; }
        Text& bright_pink() { prefix_ += BRIGHT_COLORS[PINK]; return *this; }
        Text& bright_purple() { prefix_ += BRIGHT_COLORS[PURPLE]; return *this; }
        Text& bright_brown() { prefix_ += BRIGHT_COLORS[BROWN]; return *this; }
        Text& bright_navy() { prefix_ += BRIGHT_COLORS[NAVY]; return *this; }
        Text& bright_olive() { prefix_ += BRIGHT_COLORS[OLIVE]; return *this; }
        Text& bright_maroon() { prefix_ += BRIGHT_COLORS[MAROON]; return *this; }
        Text& bright_teal() { prefix_ += BRIGHT_COLORS[TEAL]; return *this; }
        Text& bright_silver() { prefix_ += BRIGHT_COLORS[SILVER]; return *this; }
        Text& bright_gold() { prefix_ += BRIGHT_COLORS[GOLD]; return *this; }
        
        std::string str() const
        {
            return prefix_ + text_ + RESET;
        }
        
        friend std::ostream& operator<<(std::ostream& os, const Text& text) {
            return os << text.str();
        }
    };
}