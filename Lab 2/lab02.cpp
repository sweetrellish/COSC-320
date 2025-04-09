//================================================================
// Filename: lab02.cpp
// Author: Ryan Ellis
// Creation Date: 2/10/2025
// Last Update: 
// Description: Main program to simulate binary search of random values and calculate worst-case comparison for successful and unsuccessful binary search.
// User Interface: 
// Notes: 
//================================================================

#include "binSearch.h"
#include <iostream>
#include <ctime>

using namespace std;

void div();     //prototypes
void setArray(int arr[], int size);

const int ARRSIZE = 10000;          //global constants
const int RANDOMLIMIT = 99999;
const int RANDOMVALUES = 10000;

int main(){

    srand(time(0));     //set random seed

    int array[ARRSIZE];    //array and counter variables
    int sumFailCom = 0;
    int sumSucCom = 0;
    int successTotal = 0;
    int count = 0;
    int flag = 0;           //variable flag for -1 value
    
    setArray(array,ARRSIZE);
    deSelsort(array,ARRSIZE);  // set and sort array
    
    while (count < RANDOMVALUES){        //while loop to run through search runs
        flag = 0;                   //set flag to 0
        int passes = 0;
        
        flag = binSearch(array, ARRSIZE, rand()%RANDOMLIMIT, passes);           //search for random value and set flag

        if(flag == -1)      //conditional statements for flag value
            sumFailCom += passes;   //add unsuccessful passses
        if(flag > 0){
            sumSucCom += passes;    //add unsuccessful passes
            successTotal++;         // increment success total

        }
        count++;            //increase count
        //passes = 0;     //reset passes
    }
    
    cout<<"Sum of Failed Comparisons : "<<sumFailCom<<endl;
    cout<<"Sum of Successful Comparisons : "<<sumSucCom<<endl;
    cout<<"Successful Searches Total : "<<successTotal;
    
    div();
    
    cout<<"RESULTS";
    div();
    cout<<"Worst-case comparison for unsuccessful binary search: "<<sumFailCom/(RANDOMVALUES-successTotal);
    div();
    cout<<"Worst-case comparison for successful binary search: "<<sumSucCom/(successTotal);
    div();
    
    
    
    return 0;
    
}

void div(){
    cout<<"\n==============================="<<endl;     //function to print divide line
}

void setArray(int arr[], int size){
    int val = 0;
    for(int i = 0; i < size; i++){
        val = rand()%RANDOMLIMIT;
        arr[i] = val;
    }
}
