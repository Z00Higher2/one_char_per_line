// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment:HW E4.8
// Write a program that reads a word and prints each character of the word on a separate line.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string char_name; // Declare the name of the character variable
    cout << "Enter a Name: ";
    cin >> char_name; // User input for the character variable

    for (int i = 0; i < char_name.length(); i++){ // Get the length of the character variable and make sure it matches the length of the variable
        cout << char_name[i]<< endl; // Prints the character each line
    }

    return 0;
}