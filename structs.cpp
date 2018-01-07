/* --------------------------
 *  Classes: Structs
 * --------------------------
 * Classes in C++ are built from C structs
 *
 *
 *
 *
 *
 */
#include <iostream>
using namespace std;

struct Thing{
	int alpha;
	int beta;	
};

void edit(const Thing &);

int main(){
	Thing t;
	t.alpha = 5;
	t.beta = 4;
	edit(t);

}

void edit(const Thing &t){
	cout<<t.beta;
}
