//stringWarmup.cpp
//JA 08/25/25
#include <iostream>
#include <string>
using namespace std;

    int main() {
        cout << "\nHello and welcome to my string warm up program!\n";
cout << "Created in class Aug. 25, 2025!\n ";

        string myStrObject = "abcdefghijk";

        //output my string object

        cout << "\nThe value of my string object is: " << myStrObject << endl;

        //Use a handy dandy method from the string library to find its length

cout << "\nThe length of my string object is: " << myStrObject.length() << endl;

int lengthOfMyStrObject =0;
lengthOfMyStrObject = myStrObject.length();

cout << "\nThe length of my string object is: " << lengthOfMyStrObject << endl;


        return 0;
    }