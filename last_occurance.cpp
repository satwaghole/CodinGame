#include <iostream>
#include <string>

int main() {
    std::string my_string = "report.ff.pdf";
    char my_char = '.';
    
    // Find the last occurrence of the character
    size_t char_pos = my_string.rfind(my_char);
    
    if (char_pos != std::string::npos) {
        std::cout << "The character '" << my_char << "' was last found at position " << char_pos << std::endl;
    } else {
        std::cout << "The character '" << my_char << "' was not found in the string." << std::endl;
    }
    
    return 0;
}
