//================================================================
// Filename: lab01.cpp
// Author: Ryan Ellis
// Creation Date: 2/4/2025
// Last Update: 
// Description: Test function for deSelsort function
// User Interface: 
// Notes: 
//================================================================

#include "deSelsort.h"
#include <iostream>

using namespace std;

void div();     //prototype

int main(){
    
    int array[8] = {13, 5, 2, 25, 47, 17, 8 , 21};      //array declaration

    for(int i = 0; i < 8; i++)          //print original array
        cout<< array[i] << " ";    
    div();
    cout<< "Selection Sort : "<<endl;   //regular selection sort function call
    selectionSort(array, 8 );
    div();
    int array2[8] = {13, 5, 2, 25, 47, 17, 8 , 21};

    cout<< "Double Selection Sort : "<<endl;        //double ended selection sort function call
    deSelsort(array2, 8);
    div();
    
    return 0;
    
}

void div(){
    cout<<endl;     //function to print line
}
