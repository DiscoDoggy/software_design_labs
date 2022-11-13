#include <iostream>
#include <string>

#include "base.hpp"
#include "op.hpp"
//#include "rand.hpp"
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "sub.hpp"
#include "treeMaker.hpp"

using namespace std;

int main(int argc, char *argv[]) {

	treeMaker* treeFactory = new treeMaker();
	Base* expTree = treeFactory->Parse(argv, argc);

	cout << expTree->stringify() << " = " << expTree->evaluate() << endl;
	delete treeFactory;





	return 0;

}

