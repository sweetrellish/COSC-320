//===========================================================================================================================
// Name        : max.h
// Author      : Ryan C. Ellis
// Creation Date: 2/20/2025
// Last Update:
// Description: Header file that includes the tnode class structure to build
//Binary tree, and max function to traverse tree and return max value
//===========================================================================================================================

#ifndef MAX_H
#define MAX_H

#include "d_tnode.h"
#include <iostream>

using namespace std;

template <class T>
T max(tnode<T> *);              //prototypes to find max and print
template <class T>
void printTree(tnode<T> *, int, int);

#endif

//============================================================================
// Description: This function will traverse a given binary tree, with the root
// as the parameter, and return the max value in the tree.
//============================================================================
template <class T>
T max(tnode<T> *nodeptr){
    T maxVal = nodeptr->nodeValue;
    if(nodeptr != NULL){

        //************************
        //first attempt returns seg fault

        // if(nodeptr->nodeValue < nodeptr->right->nodeValue)
        //     maxVal = nodeptr->right->nodeValue;
        // if(nodeptr->nodeValue <nodeptr->left->nodeValue)
        //     maxVal = nodeptr->left->nodeValue;
        // max(nodeptr->left);
        // max(nodeptr->right);

        //************************

        if(nodeptr->right != NULL){     //check right side, initialize right max calling function to right
        T maxR = max(nodeptr->right);   //set right max value to max if greater
            if(maxR >maxVal)
                maxVal = maxR;
        }

        if(nodeptr->left != NULL){      //check left side, initialize left max calling function to left
            T maxL = max(nodeptr->left);    //set left max value to max if greater
            if(maxL >maxVal)
                maxVal = maxL;
        }

    return maxVal;          //return max value

    }

    return T();     //return default T value

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
