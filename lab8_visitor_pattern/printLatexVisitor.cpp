#include "visitor.hpp"
#include "printLatexVisitor.hpp"
#include "iterator.hpp"
#include "base.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "rand.hpp"
#include "op.hpp"
#include "div.hpp"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void LatexVisitor::visit_add_begin(Add* node) {
	string temp = "";
	temp = "{(";

	latexEquation = latexEquation + temp;
}

void LatexVisitor::visit_add_middle(Add* node) {
	string temp2 = "";
	temp2 = "+";

	latexEquation = latexEquation + temp2;
}


void LatexVisitor::visit_add_end(Add* node) {
	string temp3 = "";
	temp3 = ")}";

	latexEquation = latexEquation + temp3;
}


void LatexVisitor::visit_sub_begin(Sub* node) {
        string temp = "";
        temp = "{(";

        latexEquation = latexEquation + temp;
}

void LatexVisitor::visit_sub_middle(Sub* node) {
        string temp2 = "";
        temp2 = "-";

        latexEquation = latexEquation + temp2;
}


void LatexVisitor::visit_sub_end(Sub* node) {
        string temp3 = "";
        temp3 = ")}";

        latexEquation = latexEquation + temp3;
}

void LatexVisitor::visit_mult_begin(Mult* node) {
        string temp = "";
        temp = "{(";

        latexEquation = latexEquation + temp;
}

void LatexVisitor::visit_mult_middle(Mult* node) {
        string temp2 = "";
        temp2 = "\\cdot";

        latexEquation = latexEquation + temp2;
}


void LatexVisitor::visit_mult_end(Mult* node) {
        string temp3 = "";
        temp3 = ")}";

        latexEquation = latexEquation + temp3;
}

void LatexVisitor::visit_div_begin(Div* node) {
        string temp = "";
        temp = "{\\frac";

        latexEquation = latexEquation + temp;
}

void LatexVisitor::visit_div_middle(Div* node) {
	return;
}


void LatexVisitor::visit_div_end(Div* node) {
        string temp3 = "";
        temp3 = "}";

        latexEquation = latexEquation + temp3;
}

void LatexVisitor::visit_pow_begin(Pow* node) {
        string temp = "";
        temp = "{(";

        latexEquation = latexEquation + temp;
}

void LatexVisitor::visit_pow_middle(Pow* node) {
        string temp2 = "";
        temp2 = "^";

        latexEquation = latexEquation + temp2;
}


void LatexVisitor::visit_pow_end(Pow* node) {
        string temp3 = "";
        temp3 = ")}";

        latexEquation = latexEquation + temp3;
}

void LatexVisitor::visit_op(Op* node) {
	stringstream ss;
	string evaluatedNode = "";
	double nodeValue = node->evaluate();
	
	ss << nodeValue;
	ss >> evaluatedNode;

	latexEquation = latexEquation + "{" + evaluatedNode + "}";
}

void LatexVisitor::visit_rand(randomNumber* node) {
	stringstream ss;
        string evaluatedNode = "";
        double nodeValue = node->evaluate();

        ss << nodeValue;
        ss >> evaluatedNode;

	latexEquation = latexEquation + "{" + evaluatedNode + "}";



}






















