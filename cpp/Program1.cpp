#include<iostream>

int main() {

	int x = 10 ;				// copy initialization
	int y(20);   				//brace or list initialization

	int z{30};				//direct initialization

	std::cout << x << std :: endl ;
	std::cout << y << std :: endl ;
	std::cout << z << std :: endl ;

	return 0 ;

}
