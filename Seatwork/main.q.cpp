#include <iostream>
#include "queue.h"

int main(){

	Queue <std::string> CPE21S4;
	

	CPE21S4.enqueue ("Francis ");
	CPE21S4.enqueue ("Dano ");
	CPE21S4.enqueue ("Curwin ");
	CPE21S4.enqueue ("Avila ");
	CPE21S4.enqueue ("Dano ");
	CPE21S4.getFront();
	
	CPE21S4.dequeue();
	CPE21S4.getFront();
	CPE21S4.getRear();
	
	return 0;
	
}
