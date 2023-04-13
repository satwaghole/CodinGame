#include <iostream>
#include <vector>
#include <map>

int main() {
    std::vector<std::string> names = {"John", "Bob", "Alice", "Mary"};
    std::map<std::string, int> ages;
	
	ages["John"] = 25;
	ages["Mary"] = 30;
	ages["Bob"]  = 35;
    
    // Check if vector elements are in map
    for (const auto& name : names) {
        auto it = ages.find(name);
        if (it != ages.end()) {
            std::cout << name << "'s age is " << it->second << std::endl;
        } else {
            std::cout << name << " not found in map" << std::endl;
        }
    }
    
    return 0;
}

