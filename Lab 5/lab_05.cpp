
//================================================================
// Filename: lab_05.cpp
// Author: Ryan Ellis
// Creation Date: 3/4/2025
// Last Update: 3/9/2025
// Description: Main function to test d_stree class and integer class
// which creates a binary search tree of integer class data types.
// Notes:
//================================================================
#include "d_stree.h"
#include "int.h"
#include <ctime>
#include <iostream>

using namespace std;

void div();     //prototypes
void printInOrder(stree<integer> &tree);

const int LIMIT = 10000;   // global constant int to set limit for loop

int main() {
    
  srand(time(0));   //set random seed

  stree<integer> tree;      //declare stree object

  int counter = 0;          //loop counter
  
  while(counter < LIMIT){     //while loop for 10,000 insertions
      
      integer num(rand()%+7);     //create integer object with random number 0-6
      stree<integer> ::iterator flag = tree.find(num);  //tree integer iterator to parse tree and find num
      
      if(flag != tree.end())
          (*flag).incCount();   //if iterator is found then increment the count
      else
          tree.insert(num);   //otherwise insert into tree
      
      counter++;    //increment loop counter
  }

  cout<<"Values in the tree: "<<endl;   //output findings
  printInOrder(tree);
  div();
  cout<<"Binary Tree "<<endl;
  tree.displayTree(2);
  div();
  

  return 0;
}
void div() { cout << "\n============================" << endl; }

void printInOrder(stree<integer> &tree){    //function to print tree leaf nodes in order
  stree<integer>::iterator titer;
  for(titer = tree.begin(); titer != tree.end(); ++titer){
    cout<<*titer<<endl;
  }
}
