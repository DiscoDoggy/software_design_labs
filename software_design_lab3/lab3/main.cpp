#include <iostream>
#include <string>

#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "sub.hpp"

using namespace std;

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
   Base* three = new Op(3);
   Base* seven = new Op(7);
   Base* four = new Op(4);
   Base* two = new Op(2);
   Base* mult = new Mult(seven, four);
   Base* add = new Add(three, mult);
   Base* minus = new Sub(add, two);
	

    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl; //expect 29

    //adding
    Base* testVal1 = new Add(29.2768, 18.4523);
    Base* testVal2 = new Add(87, 14);

    Base* addTest1 = new Add(testVal1, testVal2);

    cout <<"Add test1: " << addTest1 -> stringify() << " = " << addTest1 -> evaluate() << endl; //expect 148.7291

//----------
    Base* testVal3 = new Pow(2, 3);
    Base* testVal4 = new Div(40, testVal3);

    Base* testVal5 = new Sub(24,8);
    Base* testVal6 = new Mult(testVal5, 2);

    Base* addTest2 = new Add(testVal4, testVal6);

    cout << "Add Test2: " << addTest2 -> stringify() << " = " << addTest2 -> evaluate() << endl; //expect 37
//----------

    //Subtraction
    cout << endl;
    Base* testVal7 = new Sub(100.78,50.78);
    Base* testVal8 = new Sub(testVal7, 25.39);

    Base* subTest1 = new Sub(testVal8, 11.982);

    cout << "sub Test 1: " << subTest1 -> stringify() << " =  " << subTest1 -> evaluate() << endl; //expect 12.628

//---------

    Base* testVal9 = new Div(1924, 4);
    Base* testVal10 = new Add (testVal9, 28.965);
    Base* testVal11 = new Pow(4,3);
    Base* testVal12 = new Add(testVal11, 407.9);

    Base* subTest2 = new Sub (testVal10, testVal12);

    cout << "Sub test 2:  " << subTest2 -> stringify() << " = " << subTest2 -> evaluate() << endl; //expect 38.065 


//---------

    //Division
    
    Base* divTest1 = new Div(60.0, 0.0);
    cout << divTest1 -> evaluate();

   
    return 0;
}
