#ifndef STACK_H
#define STACK_H
#define MAX 10
#include <iostream>

template<typename T >
class stack{
	private:
		int top = -1;
		T arr[MAX];
		
	public:
		//isEmpty
			bool isEmpty(){
				return (top < 0);
			}
	
		//push
			void push(T value){
				if (isFull()){
					std::cout << "Stack overflow" << std::endl;
				}
				else{
					arr[++top] = value;
					std::cout << "Successfully pushed: " <<value<<std::endl;
				}
			}
		//isFull
			bool isFull(){
				return (top >= MAX-1);
			}
		//peek
			void peek(){
				if (isEmpty()){
					std::cout << "Stack is Empty\n";
				}	
				else {
					std::cout << "The Value of the top is: " << arr[top] << std::endl;
				}	

			}
		//pop
			void pop(){
				if (isEmpty()){
					std::cout <<"Stack is Empty. " ;
				}
				else{
					std::cout <<"Successfully popped: " <<arr[top--]<<std::endl;
					
				}
			}
		//display
			void display(){
				if (isEmpty()){
					std::cout<<"Stack is Empty. " <<std::endl;
				}
				else{
					std::cout <<"========stack========\n";
					for(int i = top; i >=0; i--){
						std::cout << arr[i] << std::endl;
					}
				}
			}

};


#endif










