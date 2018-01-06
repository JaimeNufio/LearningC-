#include <iostream>

int main(){

	int num;
	std::cin >> num;
	if (num > 40){
		std::cout << "greater";
	}else if (num == 40){
		std::cout << "Same";
		return (0);
	}else{
		std::cout << "less";
	}
	return main();

}
