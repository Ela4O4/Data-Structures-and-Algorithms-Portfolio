#include <iostream>
#include "stack.h"

int main(){
	stack <int> s1;

	//isEmpty
	std::cout <<"Testing isEmpty: \n";
	std::cout << s1.isEmpty() <<std::endl;

	//push
	std::cout <<"Testing Push: \n";
	for(int i = 1; i <=10; i++){
	s1.push(i);
	}
		
	//stack overflow check
	s1.push(100);
	
	//pop
	std::cout << std::endl;
	std::cout <<"Testing Pop: \n";
	s1.pop();
	
	//display
	std::cout << std::endl;
	std::cout <<"Testing Display: \n";
	s1.display();

	//peek	
	std::cout << std::endl;	
	std::cout <<"Testing Peek: \n";
	s1.peek();
	return 0;
}

