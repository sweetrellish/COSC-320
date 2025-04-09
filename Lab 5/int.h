//==============================================================
// Author: Ryan Ellis
// Creation Date: 3/4/2025
// Last Update: 3/9/2025
// Description: Header file for integer class and implementation for class functions.
// Notes:
//==============================================================

#ifndef Integer_H
#define Integer_H
#include <iostream>
#include <iomanip>

using namespace std;

class integer {
public:
  // constructor. initialize intValue and set count = 1
  integer(int n);

  // return intValue
  int getInt();

  // return count
  int getCount();

  // increment count
  void incCount();

  // compare integer objects by intValue
  friend bool operator<(const integer &lhs, const integer &rhs);

  friend bool operator==(const integer &lhs, const integer &rhs);

  // output object in format intValue (count)
  friend ostream &operator<<(ostream &ostr, const integer &obj);

private:
  // the integer and its count
  int intValue;
  int count;
};

//====================================================
// Description: Constructor for integeger class, sets default
// values of count to 1, and intValue to passed parameter.
//====================================================

integer :: integer(int n){
    count = 1;
    intValue = n;
}

//====================================================
// Description: Function to return intValue
//====================================================

int integer :: getInt(){
    return intValue;
}

//====================================================
// Description:Function to return count
//====================================================

int integer :: getCount(){
    return count;
    
}

//====================================================
// Description: Function to increment private count variable
//====================================================

void integer :: incCount(){
    count += 1;
}

//====================================================
// Description: Overloaded comparison (less than) operator
// for the integer class, will return boolean value true/false
//====================================================

bool operator<(const integer &lhs, const integer &rhs){
    bool status;
    
    if(lhs.intValue < rhs.intValue)
        status = true;
    else
        status = false;
    return status;
    
}
//====================================================
// Description: Overloaded equivalency operator
// for the integer class, will return boolean value true/false
//====================================================

bool operator==(const integer &lhs, const integer &rhs){
    bool status;
    
    if(lhs.intValue == rhs.intValue)
        status = true;
    else
        status = false;
    return status;
}

//====================================================
// Description: Overloaded streaming operator
// for the integer class, will return formatted output
// for private data members of integer class.
//====================================================

ostream &operator<<(ostream &ostr, const integer &obj){
    ostr << obj.intValue<<" "<<"("<<obj.count<<")";
    return ostr;
}

#endif

