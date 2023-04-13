#include <iostream>
#include <bitset>
#include <cstring>

using namespace std;

int main() {
    char input[100];
    cout << "Enter an ASCII string to convert to binary: ";
    cin.getline(input, 100);

    for (int i = 0; i < strlen(input); i++) 
	{
        bitset<8> binary(input[i]);
        cout << binary << " ";
    }

    return 0;
}
