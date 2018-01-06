#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using std::cout;
using std::endl;
using std::setw;

int main(){
	enum condition{PASS, FAIL}; //enum has these states
	condition con;
	int prob;

	srand(time(NULL));
	cout<<"Trial Result:"<<endl;

	for (int i = 0; i < 10; i++){
		prob = 1+ rand()%10;
		if (prob > 5){
			con = PASS;
		}else{
			con = FAIL;
		}
		if (con == PASS){
			cout<<setw(1)<<i<<": "<<"TRUE, "<<prob<<endl;
		}else{
			cout<<setw(1)<<i<<": "<<"FAIL, "<<prob<<endl;
		}
	}
	return 0;
}
