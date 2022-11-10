#include <iostream>

int main(void){
// Input
	int total;	
	std::cout<<"No, of winning numbers: ";
	std::cin>>total;
	
	int list[total];
	for(int i = 0;i<total;i++){
		std::cout<<"The "<<(i+1)<<" number:"; 
		std::cin>>list[i];
		std::cout<<std::endl;
	}
	
	int number;
	std::cout<<"The number to redeem: "<<std::endl;
	std::cin>>number;
	
// Operation: using mod 

	for(int i = 0;i<total;i++){
		if( (*(list+i)) == number){
			std::cout<< (*(list+i));
			return 0;
		}
		
		if( (*(list+i))%10000000 == (number%10000000)){
			std::cout<< (*(list+i))%10000000;
			return 0;
		}
		
		if( (*(list+i))%1000000 == (number%1000000)){
			std::cout<< (*(list+i))%1000000;
			return 0;
		}
		
		if( (*(list+i))%100000 == (number%100000)){
			std::cout<< (*(list+i))%100000;
			return 0;
		}
		if( (*(list+i))%10000 == (number%10000)){
			std::cout<< (*(list+i))%10000;
			return 0;
		}
		if( (*(list+i))%1000 == (number%1000)){
			std::cout<< (*(list+i))%1000;
			return 0;
		}
	}
}
