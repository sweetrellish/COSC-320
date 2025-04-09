//================================================================
// Filename: lab_04.cpp
// Author: Ryan Ellis
// Creation Date: 2/25/2025
// Last Update: 2/28/2025
// Description: Main function to build an expression tree and output the give expression the user inputs in post and pre-fix form along
// with displaying the expression tree.
// Notes: 
//================================================================
#include <iostream>
#include <stack>
#include <string>
#include "d_tnode.h"
#include "d_tnode1.h"
#include "inf2pstf.h"

using namespace std;

tnode<char> *buildExpTree(const string &);       //prototypes
void prefixOutput(tnode<char> *);
void div();

int main (){
    
    string expression;      //user string
    tnode<char> *exp;       // tnode for prefix, buildtree
    
    cout<<"Enter the expression: ";
    cin>> expression;
    
    infix2Postfix obj;              //infix to post fix object for post fix
    obj.setInfixExp(expression);
    
    exp = buildExpTree(obj.postfix());         //build tree expression in tnode object
    
    cout<<"Prefix form: ";			//call to print prefix form
	prefixOutput(exp);

	div();

    cout<<"Postfix form: ";
	postorderOutput(exp, " ");		//call to print postfix form

	div();
	cout<<"Expression Tree";		//print expression tree
	div();

    displayTree(exp, 0);

    
    return 0;
}
void div(){
    cout<<"\n============================"<<endl;		//div line function
}

void prefixOutput(tnode <char> *exp){		//function to print tnode tree in prefix form
    if(exp){
		cout<<exp->nodeValue<< " ";
		prefixOutput(exp->left);
		prefixOutput(exp->right);
	}


}

// build an expression tree from a postfix expression.
// the operands are single letter identifiers in the range from
// 'a' .. 'z' and the operators are selected from the characters
// '+', '-', '*' and '/'
tnode<char> *buildExpTree(const string& exp)
{
	// newnode is the address of the root of subtrees we build
	tnode<char> *newnode, *lptr, *rptr;
	char token;
	// subtrees go into and off the stack
	stack<tnode<char> *> s;
	int i = 0;


	// loop until i reaches the end of the string
	while(i != exp.length())
	{
		// skip blanks and tabs in the expression
		while (exp[i] == ' ' || exp[i] == '\t')
			i++;

		// if the expression has trailing whitespace, we could
		// be at the end of the string
		if (i == exp.length())
			break;

		// extract the current token and increment i
		token = exp[i];
		i++;

		// see if the token is an operator or an operand
		if (token == '+' || token == '-' || token == '*' || token == '/')
		{
			// current token is an operator. pop two subtrees off
			// the stack.
			rptr = s.top();
			s.pop();
			lptr = s.top();
			s.pop();
		
			// create a new subtree with token as root and subtees
			// lptr and rptr and push it onto the stack
			newnode = new tnode<char>(token,lptr,rptr);
			s.push(newnode);
		}
		else // must be an operand
		{
			// create a leaf node and push it onto the stack
			newnode = new tnode<char>(token);
			s.push(newnode);
		}
	}

	// if the expression was not empty, the root of the expression
	// tree is on the top of the stack
	if (!s.empty())
		return s.top();
	else
		return NULL;
}
