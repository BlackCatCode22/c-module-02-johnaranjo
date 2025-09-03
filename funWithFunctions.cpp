//funWithFunctions.cpp
//Jm 09/03/25
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//create three functions
//getAnIntFrm
//input:user name
//processing: ask the user for an integer
//output: users number
int getAnIntFrmAUser(string userName) {
    int anIntFrmAUser;

cout << "\nHello, " + userName + " please enter a whole number: ";
    cin >> anIntFrmAUser;

return anIntFrmAUser;
}

int main() {
    cout << "\nHello and welcome to my Fun with Functions program!\n";
    //variables needed
    //i need a variable to hold the users name
    //get an int from the user by calling your function

    int aRandomNumber = 0;
    string userName;
    cout << "\nHello user, what is your name?";
    cin >> userName;
    cout << "\nuserName is: " << userName << endl;

    aRandomNumber = getAnIntFrmAUser(userName);
    cout << userName + " entered: " << aRandomNumber << endl;
    
    return 0;
}