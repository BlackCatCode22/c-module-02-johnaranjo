//reverseAString.cpp
//JA 08/25/25
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {

    cout << "\nHello and welcome to my Reverse A String program!\n";

    //Part 1
    //Use the reverse() function
//create a string that we will reverse

    string myStringToReverse = "A Long String To Reverse";

    reverse(myStringToReverse.begin(), myStringToReverse.end());
    string reversedString = myStringToReverse;
    cout <<"\nThe reversed string is " << myStringToReverse;

    //Part 2
    //Use a for loop to swap characters
for (int i=0; i<10; i++) {
    cout << "\nThe value of i is " << i << "\n";
}

string myString01 = "abcdefghijk";
cout << "\nThe size of my string is: " << myString01.size() << endl;
    cout << "\nmy string is:" << myString01 << endl << endl;
    cout << myString01 << + "lmnopqrstu";
    myString01.append("vwxyz");
    cout << myString01 << endl;






    return 0;
}