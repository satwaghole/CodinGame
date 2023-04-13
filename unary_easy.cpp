#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
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

    for (int i = 0; i < message.length(); i++)
    {
        for (int j = 6; j >= 0; j--) {

            int bit = message[i] >> j & 1;
            if (bit != pre) {

                if (-1 != pre) {
                    res+= " ";
                }
                res+= 1 == bit ? "0 " : "00 ";
                pre = bit;
            }
            res+= "0";
        }
    }
    cout<<res<<endl;

    //cout << "answer" << endl;
    return 0;
}
