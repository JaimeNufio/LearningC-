#include <iostream>

int main(){

	std::cout << "Hello World!\n";
	return 0;

}

/*
Learning C++!
	
	Create, Compile, Run:
		-CREATE: vim file.cc
			-Note: .ccp/.cc, doesn't matter. Both equally valid.
		-COMPILE: g++ file.cc -o file 
			-Note: I think "file" is the way of declaring command name
		-RUN: ./file
			-Note "./file" means execute in dir

	Learned:
		std::cout
			- "std" is a mention of a namespace
			- "::" is the 'scope' opperator, tells complier what class/namespace to search for an identifier
			- If I only say cout, it checks the global namespace, but cout is not there.
			- "using namespace std", its telling the compiler to "take everything in the std namespace 
				and put it into the global namespace" but the issue here is name conflics
			- "std" means standard, as in "C++ standard library"

	Examples:
		-Satements:
			int x;
			x = 5; 	
		*Above is Self-Explanatory.*
			std::cout << x;

	Questions:
		-What is: #include <iostream>?
		-std::cout << "Hello World" <<std:endl;
			-Understand this syntax
		-return 0;
			-Presumably just the way of saying end?
			
*/
