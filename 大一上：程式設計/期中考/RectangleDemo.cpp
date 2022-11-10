#include <iostream>
#include "Rectangle.h"

int main(void){
	int num1,num2;
	std::cout<<"Enter a positive integer as the length of the rectangle: ";
	std::cin>>num1;
	std::cout<<"Enter a positive integer as the width of the rectangle: ";
	std::cin>>num2;
	
	Rectangle r1{num1,num2}; 
	r1.getArea();
} 
