//================================================================
// Filename: lab_08.cpp
// Author: Ryan Ellis
// Creation Date: 4/1/2025
// Last Update: 4/4/2025
// Description: Main program that implements the miniPQ and preqrec class
// structure and tests the insertion and pop funcitons in a priority queue.
//================================================================

#include "d_pqueue.h"
#include "preqrec.h"
#include <iostream>
#include <functional>
#include <ctime>

using namespace std;

int main (){
    
    srand(time(0));     //set time seed
    
    const int INTRANGE = 39;        //random priority values
    string alpha[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};  //string array for queue names
    
    miniPQ<procReqRec, less<procReqRec>> mpq;   //miniPQ object
    
    for(int i = 0; i < 10; i++){    //for loop to set and push processes
        
        int randP = rand()% + INTRANGE;
        procReqRec proc("Process " + alpha[i], randP);
        mpq.push(proc);
        
    }
    
    while (!mpq.empty()){   //while queue not empty, print and pop
        
        cout<<mpq.top()<<endl;
        mpq.pop();
        
    }

    return 0;
}
