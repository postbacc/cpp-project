#include <iostream>
#include "Dummy.h"

Dummy::Dummy(){
	// constructor code here
	some_var_ = 0;
}

Dummy::~Dummy(){
	// destructor code here
}

int Dummy::SomeMethod(int in){
	some_var_ = in+1;
	return some_var_;
}
