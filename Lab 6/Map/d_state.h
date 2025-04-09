#ifndef STATECITY_CLASS
#define STATECITY_CLASS

#include <iostream>
#include <string>

using namespace std;

// object stores the state name and city in the state
class stateCity
{
	public:
		stateCity (const string& name = "", const string& city = "");

		// output the state and city name in the format
		//    cityName, stateName
		friend ostream& operator<< (ostream& ostr, const stateCity& state);
		
		// operators < and == must be defined to use with set object.
		// operators use only the stateName as the key
		friend bool operator< (const stateCity& a, const stateCity& b);
		
		friend bool operator== (const stateCity& a, const stateCity& b);
	
	private:
		string stateName, cityName;
};

#endif	// STATECITY_CLASS

//====================================================
// Description: Constructor for the stateCity class structure, sets
// the passed parameters to the private values of the city and state name.
//====================================================
stateCity :: stateCity(const string &name, const string &city){
    stateName = name;
    cityName = city;
}

//====================================================
// Description: Overloaded stream operator for the stateCity class structure,
// which will output the city and state name in a formatted output.
//====================================================
ostream &operator<<(ostream &ostr, const stateCity& state){
    ostr<< state.cityName <<", "<<state.stateName<<endl;
    return ostr;
}

//====================================================
// Description: Overloaded equivalency operator for the stateCity class
// structure, which returns a true boolean value if the two states are
// equivalent.
//====================================================
bool operator==(const stateCity &a, const stateCity &b){
    bool status;
    
    if(a.stateName == b.stateName)
        status = true;
    else 
        status = false;
    return status;
}

//====================================================
// Description: Overloaded less than operator for the stateCity class
// structure, which returns a true boolean value if the left state
// is less than the right state.
//====================================================
bool operator< (const stateCity &a, const stateCity &b){
    bool status;
    
    if(a.stateName < b.stateName)
        status = true;
    else 
        status = false;
    return status;
    
}

