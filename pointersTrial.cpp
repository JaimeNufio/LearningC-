#include <iostream>

/* 
 * ----------------------------------------
 *  Concept: Pointers vs Reffrence
 * ----------------------------------------
 *
 * Variable: reffrence to a value
 * Pointers: address of a variable that reffrences a value
 * init with a *before name:
 *	int *countPtr, ptr; <-- add Ptr to mark pointer, and naturally its respective value
 * 
 * Pointers can be init as 0, NULL, or an address
 * 0 or Null point to nothing
 * Null defined in <iostream>
 *
 * 0 is preffered
 * 0 is the only value that can be given to a pointer directly w/o having to cast to a pointer type first
 *
 * -----------------------------------------
 *  Introducing: & and *
 * -----------------------------------------
 * & opperand gives us the pointer such as
 * int y = 5; int *yPtr; yPtr = &y;
 * 
 * &y = address of y
 * yPtr = address of y
 *
 * y = 5;
 * *yPtr = 5;
 *
 * &*yPtr = address of y
 * *&yPtr = address of y
 * ----------------------------------------
 *  Related: Alliases
 * ----------------------------------------
 *  int& x = y;
 *  and we can modify x and it modifies y the same
 *  they are the same
 */


int main(){
	int y = 5, *yPtr = &y;
	int& x = y;
	x = 10;
	std::cout<<*&y<<std::endl;	
	return (0);
}

