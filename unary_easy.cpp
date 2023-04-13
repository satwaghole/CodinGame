#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 
  This C++ program reads a message as input from the user, converts it to binary using a specific encoding scheme and prints the binary-encoded message as output.
The program starts by reading the input message using getline() function which reads a line of text from standard input and stores it in a string variable message.
Then, the program initializes an empty string variable res and an integer variable pre to -1. pre is used to keep track of the previous bit value processed.
The program uses two nested for-loops to iterate over each character of the input message and its 7-bit binary representation. The outer loop iterates over each character of the input message, while the inner loop iterates over the 7-bit binary representation of each character.
Inside the inner loop, the program extracts the jth bit of the ith character of the input message using bitwise right shift and bitwise AND operations, and stores it in an integer variable bit. The expression message[i] >> j & 1 shifts the 7-bit binary representation of the ith character of message to the right by j bits, effectively discarding the j least significant bits, and then performs a bitwise AND operation with 1 to extract the jth bit.

Next, the program checks if the current bit is different from the previous bit (pre) processed. If it is different, then the program adds a space to the res string and appends a new series of bits to res based on the current bit value using the following logic:
If the current bit is 1, append "0 " to res
If the current bit is 0, append "00 " to res
After appending the appropriate series of bits to res, the program updates the pre variable to the current bit value.
Finally, the program appends a "0" bit to res for each bit in the 7-bit binary representation of the ith character of message. This is done to ensure that each 7-bit binary representation is fully encoded using the specified encoding scheme.
Once all characters in the input message have been processed, the program prints the binary-encoded message stored in res using cout.
 **/

int main()
{
    string message;
    getline(cin, message);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    // Loop through each character in the message

   string res = "";
   int pre = -1;


	//The outer loop iterates over each character of the input message,
    for (int i = 0; i < message.length(); i++)
    {
    	//the inner loop iterates over the 7-bit binary representation of each character
        for (int j = 6; j >= 0; j--) 
        {

            int bit = message[i] >> j & 1;  // right shift by j means divide by 2's J power 
            if (bit != pre) 
            {

                if (pre != -1) {
                    res+= " ";
                }
                res+= (1 == bit) ? "0 " : "00 ";
                pre = bit;
            }
            res+= "0";
        }
    }
    cout<<res<<endl;

    //cout << "answer" << endl;
    return 0;
}
