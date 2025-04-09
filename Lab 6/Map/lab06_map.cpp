//================================================================
// Filename: lab06_map.cpp
// Author: Ryan Ellis
// Creation Date: 3/11/2025
// Last Update: 3/11/2025
// Description: Main program that implements STL map structure that builds a map of
// key and data values using strings for state and city names, then prompts the user for a state and searches
// the map and returns if it is found or not.
//================================================================

#include <iostream>
#include <map>
#include "d_state.h"

using namespace std;

int main(){
    map<string, string> m;                  //define map and iterator
    map<string, string> ::iterator miter;

    m["Maryland"] = "Salisbury";        //populate map with city, state names
    m["Delaware"] = "Wilmington";
    m["Florida"] = "Miami";
    m["Tennessee"] = "Knoxville";
    m["Pennsylvania"] = "Philadelphia";


    string input;       //user input

    cout<<"Enter a state: ";        //prompt for user input
    cin>>input;

    miter = m.find(input);          //
    if(miter != m.end())
        cout<<miter->second<<", "<<miter->first<<endl;
    else
        cout<<input<< " was not found."<<endl;

    return 0;
}
