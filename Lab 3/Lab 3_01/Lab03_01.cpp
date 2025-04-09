//===========================================================================================================================
// Name        : Lab03_01.cpp
// Author      : Ryan C. Ellis
// Creation Date: 2/18/2025
// Last Update: 2/20/2025
// Description: Main function to build a Binary tree and test the countOneChild function.
//===========================================================================================================================

#include <iostream>
#include <cstddef>
#include "countOneChild.h"
#include "d_tnode.h"


using namespace std;

tnode<char>* buildTree();       //prototypes to build tree and print div line
void div();

int main(){

    tnode<char> *root;      //declare root of tree and counter variable for 1 child
    int nodeCount = 0;

    root = buildTree();         //set root to built tree

    countOneChild(root, nodeCount );    //call countOneChild on root

    printTree(root, 4, 0);          //print binary tree from left side orientation
    div();

   cout<<"There are "<<nodeCount<< " nodes with 1 child."<<endl;        //output findings
   

    return 0;
}
void div(){
    cout<<"\n====================================="<<endl;      //div line function
}
tnode<char>* buildTree(){
    tnode<char> *root, *b, *c, *d, *e, *f, *g;      //build tree function built from bottom up

    g = new tnode<char>('G');
    f = new tnode<char>('F');
    e = new tnode<char>('E', (tnode<char>*)NULL, g);
    d = new tnode<char>('D');
    c = new tnode<char>('C', e, f);
    b = new tnode<char>('B', d, (tnode<char>*)NULL);
    root = new tnode<char>('A', b, c);

    return root;                            //return root node
}

