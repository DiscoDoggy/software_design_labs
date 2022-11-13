#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "sub.hpp"
#include "visitor.hpp"
#include "printLatexVisitor.hpp"
#include "iterator.hpp"

#include <iostream>
#include <string>

using namespace std;



int main() {
	LatexVisitor* v = new LatexVisitor();
	Base* mySub = new Sub(5 , 3);
	Base* myAdd = new Add(1,mySub); 
	
	string myExpression = "";
	
	myExpression = v->PrintLaTex(myAdd);
		
	cout << myExpression << endl;
	
	return 0;
}
