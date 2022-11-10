#include <iostream>

int main(void){
	char character;
	std::cout<<"Please enter a character: ";
	std::cin>>character;
	std::cout<<std::endl;
	
// Operation
	switch(character){
		case 'a':
			std::cout<<"a is a vowel";
			break;
		case 'e':
			std::cout<<"e is a vowel";
			break;
		case 'i':
			std::cout<<"i is a vowel";
			break;
		case 'o':
			std::cout<<"o is a vowel";
			break;
		case 'u':
			std::cout<<"u is a vowel";
			break;
		default:
			std::cout<<character<<" is not a vowel";
	}
	return 0;
}
