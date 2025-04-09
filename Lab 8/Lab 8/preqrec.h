#ifndef PROCESSREQUESTRECORD_CLASS
#define PROCESSREQUESTRECORD_CLASS

#include <iostream>
#include <string>

using namespace std;

class procReqRec
{
	public:
		// default constructor
		procReqRec()
		{}

		// constructor
		procReqRec(const string& nm, int p);

		// access functions
		int getPriority();
		string getName();

		// update functions
		void setPriority(int p);
		void setName(const string& nm);

		// for maintenance of a minimum priority queue
		friend bool operator< (const procReqRec& left,
			const procReqRec& right);

		// output a process request record in the format
		//   name: priority
		friend ostream& operator<< (ostream& ostr,
	const procReqRec& obj);

	private:
		string name;	// process name
		int priority;	// process priority
};

//====================================================
// Description: Constructor for the procReqRec class, that takes in parameters and
// sets them to the private values.
//====================================================
procReqRec :: procReqRec(const string& nm, int p){
    name = nm;
    priority = p;
    
}

//====================================================
// Description: Getter function that returns private value of priority level
//====================================================
int procReqRec :: getPriority(){
    return priority;
    
}

//====================================================
// Description: Getter function that returns private value of name
//====================================================
string procReqRec :: getName(){
    return name;
    
}

//====================================================
// Description: Setter function that sets the private name value
//====================================================
void procReqRec :: setName(const string& nm){
    name = nm;
    
}

//====================================================
// Description: Setter function that sets the private value of priority level
//====================================================
void procReqRec :: setPriority(int p){

    priority = p;
}

//====================================================
// Description: Overloaded less than operator that sets the format for comparison
// of different priority levels once inserted into queue.
//====================================================
bool operator<(const procReqRec& left, const procReqRec& right){
    bool status;
    
    if(left.priority < right.priority)
        status = true;
    else
        status = false;
    return status;
    
}

//====================================================
// Description: Overloaded stream operator that sets the format of the procReqRec object
// output to the console, to have the name and priority printed.
//====================================================
ostream& operator<< (ostream& ostr,const procReqRec& obj){
    ostr<< obj.name<<" : "<<obj.priority;
    return ostr;
    
}
#endif	// PROCESSREQUESTRECORD_CLASS
