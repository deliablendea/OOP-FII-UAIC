#include "Expression.h"
#include "Add.h"
#include "Sub.h"
#include "Neg.h"
#include "Value.h"

int main() {
	Expression* e = new Add(new Neg(new Sub(new Value(10), new Value(20))), new Value(5)); 
	e->print(); printf(" =  %d\n", e->compute());
	printf("%d parameter(s) => (left = %d, right = %d)\n", 
		e->get_children_count(), e->get_child(0)->compute(),
		e->get_child(1)->compute());
	Expression* left = e->get_child(0);
	printf("%d parameter(s) => (value = %d)\n", 
		left->get_children_count(), left->get_child(0)->compute());
	delete e;
}