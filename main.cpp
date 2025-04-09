//===========================================================================================================================
// Name        : main.cpp
// Author      : Ryan C. Ellis
// Creation Date: 3/1/2025
// Last Update:
// Description: Main function will prompt user for string input and then will
// call recursive function to determine if input string is a palindrome.
//===========================================================================================================================
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

bool isPal(const string& , int , int );

int main(){

    string pal;     //user input for palindrome test

    cout<<"---Palindrome Test---"<<endl;
    cout<<"Enter a string, no spaces and all lower case: ";     //palindrome testing
    cin>>pal;

    if(isPal(pal, 0, pal.length()-1))               //enter parameters for string and indeces
        cout<< pal << " is a palindrome "<<endl;
    else
        cout<< pal << " is not a palindrome. "<<endl;       //display findings


    return 0;
}

bool isPal(const string& str, int startIndex, int endIndex){        //recursive palindrome checking funciton definition

    if(startIndex >= endIndex)          //base case if indeces make it through recursive step
        return true;
    if(str[startIndex] != str[endIndex]){           //stop conditions/returns
        return false;
    }
    return isPal(str,startIndex+1 ,endIndex-1 );        //recursion call

}
