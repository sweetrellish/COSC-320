//================================================================
// Filename: lab06_set.cpp
// Author: Ryan Ellis
// Creation Date: 3/11/2025
// Last Update: 3/11/2025
// Description: Main program that implements STL set and stateCity class structure that builds a set of
// stateCity objects and prompts the user for a state and searches the set and returns if it is found or not.
//================================================================

#include <iostream> 
#include <set>
#include "d_state.h"

using namespace std;

int main(){
 
    set<stateCity> s;
    set<stateCity>::iterator pos;                //define set and iterator
    
    stateCity md("Maryland", "Salisbury");       //define stateCity objects
    stateCity de("Delaware", "Wilmington");
    stateCity tx("Texas", "Austin");
    stateCity fl("Florida", "Miami");
    stateCity md1("Pennsylvania", "York");
    
    string input;           //user input

    s.insert(md);           //insert set with stateCity objects
    s.insert(de);
    s.insert(tx);
    s.insert(fl);
    s.insert(md1);
    
    cout<<"Enter a state: ";       //prompt for user input
    cin>> input;
    
    stateCity flag(input, "");     //set input as flag for search

    pos = s.find(flag);            //set iterator for flag
        
     if(pos != s.end())            //if iterator isn't pointing at end of set it's found
            cout<< *pos;
     else
            cout<<input <<" was not found"<<endl;       //otherwise it's not found
    
    
    
    return 0;
}
