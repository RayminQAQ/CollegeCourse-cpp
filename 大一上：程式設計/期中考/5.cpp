#include <iostream>

int main(void){
	int num1,num2;
	char operation;
	std::cout<<"Enter your calculation: ";
	std::cin>>num1>>operation>>num2;
	
// Operation
	// +-
	if(operation == '+'){
		std::cout<<num1<<" "<<operation<<" "<<num2<<" = "<<num1+num2;
	}
	if(operation == '-'){
		std::cout<<num1<<" "<<operation<<" "<<num2<<" = "<<num1-num2;
	}
	
	// */
	if(operation == '*'){
		std::cout<<num1<<" "<<operation<<" "<<num2<<" = "<<num1*num2;
	}
	if(operation == '/'){
		if(num2 == 0){
			std::cout<<"Cannot divide by zero";
		}else{
			std::cout<<num1<<" "<<operation<<" "<<num2<<" = "<<num1/num2;
		}
	}
}
