//===========================================================================================================================
// Name        : Lab03_02.cpp
// Author      : Ryan C. Ellis
// Creation Date: 2/20/2025
// Last Update:
// Description: Main function to build a Binary tree and test the max function.
//===========================================================================================================================

#include <iostream>
#include <cstddef>
#include "max.h"
#include "d_tnode.h"

using namespace std;

tnode<int>* buildIntTree();     //prototypes to find max and print div line
void div();

int main(){
    tnode<int> *root;       //declare root

    root = buildIntTree();      //set root to built int tree

    printTree(root,4 ,0 );      //print tree
    cout<<"Searching for max value ...";
    div();
    cout<<"Max value: "<<max(root)<<endl;   //find max and output results

    return 0;
}
void div(){         //div line
    cout<<"\n====================================="<<endl;
}
tnode<int>* buildIntTree(){
    tnode<int> *root, *b, *c, *d, *e, *f;      //build tree function built from bottom up


    f = new tnode<int>(12, (tnode<int>*)NULL, (tnode<int>*)NULL);
    e = new tnode<int>(48, (tnode<int>*)NULL, (tnode<int>*)NULL);
    d = new tnode<int>(5);
    c = new tnode<int>(15, e, f);
    b = new tnode<int>(40, d, (tnode<int>*)NULL);
    root = new tnode<int>(35, b, c);

    return root;                            //return root node
}
