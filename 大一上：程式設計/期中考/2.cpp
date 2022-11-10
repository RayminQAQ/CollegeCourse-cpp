#include <iostream>

int main(void){
	int time;
	std::cout<<"Enter an hour at 24 hour clock: ";
	std::cin>>time;
	if(time<12){
		std::cout<<"Time is in AM";
	}else{
		std::cout<<"Time is in PM";
	}
}
