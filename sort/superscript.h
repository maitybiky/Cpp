#ifndef SUPERSCRIPT_H
#define SUPERSCRIPT_H

#include <string>


std::string getSuperscriptForm(int number) {
    std::string superscript = "";
    std::string digits[] = {"⁰", "¹", "²", "³", "⁴", "⁵", "⁶", "⁷", "⁸", "⁹"};

    std::string numStr = std::to_string(number);
    for (char digit : numStr) {
        int index = digit - '0';
        if (index >= 0 && index <= 9) {
            superscript += digits[index];
        }
    }

    return superscript;
}


#endif  // SUPERSCRIPT_H