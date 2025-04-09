//==============================================================
//Author: Ryan Ellis
//Creation Date: 2/10/2025
//Last Update:
//Description: Header file for Binary Search Algorithm including double ended selection sorting algorithm.
//Notes:
//==============================================================

#ifndef BINSEARCH_H
#define BINSEARCH_H

#include <utility>
#include <vector>
#include <iostream>

using namespace std;

template <class T>
void deSelsort( T arr[], int size);
template <class T>
void printArray(T arr[], int size);
template <class T>
T binSearch(const T arr[], int size, T val, T &p);      //pass in tracking variable by ref?

#endif
template <class T>
void printArray(T arr[], int size ){        //function to print array
    for(int i = 0; i < size; i++){
            cout<< arr[i]<< " ";
    }
    cout<<endl;
}
template <class T>
T binSearch(const T arr[], int size,  T val , T &p){
  //int pass = 0;    inital thought to have variable to hold passes, instead use parameter by ref
  int first = 0;
  int last = size - 1;
  int middle = 0;

  while (first <= last) {
    middle = (first + last) / 2;
    if (arr[middle] == val) {
      return middle;
    } else if (arr[middle] > val)
      last = middle - 1;
    else
      first = middle + 1;
    p++;
  }
  return -1;
}

template <class T>
void deSelsort(T arr[], int size){          //double ended selection sort

    int minIndex, maxIndex;             // min and max index, right side set at end of array
    int right = size -1;

    for(int left = 0; left < right; left++, right--){       //for loop to end once left and right meet, increase left, decrease right

        minIndex = left;
        maxIndex = right;           //set min to left, max to right

        for(int index = left; index <= right; index++){     // nested for loop with index set to left, less than or equal to right

            if( arr[index] < arr[minIndex]){            //conditional statements to set index to min, max dependent on greater/less than
                minIndex = index;
            }
            if(arr[index] > arr[maxIndex]){
                maxIndex = index;
            }
        }

        swap(arr[left], arr[minIndex]);         //swap values

        if(maxIndex == left){
            maxIndex = minIndex;            //set max index to min if it was at left before swap
        }

        swap(arr[right], arr[maxIndex]);

        //cout<< "Pass " << left + 1<< ": ";      //print array at pass
        //printArray(arr,size );

    }

}
