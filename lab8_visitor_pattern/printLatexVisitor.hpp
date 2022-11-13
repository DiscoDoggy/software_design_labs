#ifndef PRINTLATEXVISITOR_HPP
#define PRINTLATEXVISITOR_HPP

#include <iostream>
#include <string>

#include "visitor.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "base.hpp"
#include "iterator.hpp"

using namespace std;

class LatexVisitor : public Visitor {
	private:
		string latexEquation = "";

	public:
		void visit_add_begin(Add* node) override;
        	void visit_add_middle(Add* node) override;
      		void visit_add_end(Add* node) override;
        	void visit_sub_begin(Sub* node) override;
        	void visit_sub_middle(Sub* node) override;
        	void visit_sub_end(Sub* node) override;
        	void visit_mult_begin(Mult* node) override;
        	void visit_mult_middle(Mult* node) override;
        	void visit_mult_end(Mult* node) override;
        	void visit_div_begin(Div* node) override;
        	void visit_div_middle(Div* node) override;
        	void visit_div_end(Div* node) override;
        	void visit_pow_begin(Pow* node) override;
        	void visit_pow_middle(Pow* node) override;
        	void visit_pow_end(Pow* node) override;

		void visit_op(Op* node) override;
        	void visit_rand(randomNumber* node) override;

		string PrintLaTex(Base* ptr) {
			Iterator equationIterator(ptr);
			
			while (equationIterator.is_done() == false) {
				equationIterator.current_node()->accept(this, equationIterator.current_index());
				equationIterator.next();
			}

			if (equationIterator.is_done() == true) {
				return "$" + latexEquation + "$" ;
			}
		}
};







#endif
