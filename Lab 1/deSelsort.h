//==============================================================
//Author: Ryan Ellis
//Creation Date: 2/4/2025
//Last Update: 
//Description: Header file for Double ended Selection Sort Algorithm.
//Notes: Includes regular Selection Sort for comparison.
//==============================================================

#ifndef DESELSORT_H
#define DESELSORT_H

#include <utility>
#include <vector>
#include <iostream>

using namespace std;

template <class T>
void deSelsort( T arr[], int size);
template <class T>
void printArray(T arr[], int size);
template <class T>
void selectionSort(T arr[], int size);

#endif
template <class T>
void printArray(T arr[], int size ){        //function to print array
    for(int i = 0; i < size; i++){
            cout<< arr[i]<< " ";
    }
    cout<<endl;
}
template <class T>
void selectionSort(T arr[], int size ){     //regular selection sort
    int minIndex, minValue;

    for(int start = 0; start < (size - 1); start++){
        minIndex = start;
        minValue = arr[start];
        for(int index = start +1; index < size; index++){
            if (arr[index] <minValue){              //finds min value and swaps index
                minValue = arr[index];
                minIndex = index;
            }
        }

        swap(arr[minIndex], arr[start]);        //swap min value at index

        cout<< "Pass "<< start + 1<< ": ";      //print out array at pass
        printArray(arr, size );
    }
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

        cout<< "Pass " << left + 1<< ": ";      //print array at pass
        printArray(arr,size );

    }

}
