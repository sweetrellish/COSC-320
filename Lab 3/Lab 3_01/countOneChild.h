//===========================================================================================================================
// Name        : countOneChild.h
// Author      : Ryan C. Ellis
// Creation Date: 2/18/2025
// Last Update: 2/20/2025
// Description: Header file that includes the tnode class structure to build Binary tree, and countOneChild function to
// traverse tree and count nodes that have 1 child.
//===========================================================================================================================

#ifndef COUNTONECHILD_H
#define COUNTONECHILD_H

#include <iostream>
#include "d_tnode.h"


using namespace std;

template <class T>
void countOneChild(tnode<T> *, int&);   //prototypes to count and print
template <class T>
void printTree(tnode<T> *, int, int);

#endif

//============================================================================
// Description: This function will traverse a given binary tree, with the root
// and variable to count by reference as parameters. No return values, just
// updating the variable passed to reflect nodes that have 1 child.
//============================================================================
template <class T>
void countOneChild(tnode<T> *nodeptr,int &nodeCount){

    if(nodeptr != NULL){
        if((nodeptr->left == NULL || nodeptr->right == NULL) && (nodeptr->left || nodeptr->right))
            nodeCount++;
        countOneChild(nodeptr->left,nodeCount );
        countOneChild(nodeptr->right, nodeCount);
    }

    
}

//================================================================
// Description : This function recursively prints the tree contents to the
// console using a reverse inorder traversal with indenting.
//================================================================
template <class T>
void printTree(tnode<T> *t, int Indent, int Level) {
  if (t != nullptr) {
    printTree(t->right, Indent, Level + 1);
    for(int i = 0; i <(Indent * Level); i++)
      cout<< " ";
    cout << t->nodeValue << "\n";
    printTree(t->left, Indent, Level + 1);
  }
}

