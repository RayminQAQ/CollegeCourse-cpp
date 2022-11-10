#include <iostream>

int main(void){
//1
	int check = 0;
	float celsius,fahre;
	do{
		std::cin>>celsius;
		if((celsius<-100)||(celsius>100)){
			std::cout<<"out of range"<<std::endl;
			check = 0;
		}else{
			fahre = celsius *9 /5 +32;
			std::cout<<fahre<<std::endl;
			check = 1;
		}
	}while(check==0);
	
//2
	float H,W,BMI;
	std::cin>>H>>W;
	
	if((H<1.0) || (H>2.2)){
		std::cout<<"你輸入錯了";
	}
	if((W<30.0) || (W>200.0)){
		std::cout<<"你輸入錯了";
	}
	
	BMI = W / (H*H);
	std::cout<<(int)BMI<<std::endl;
	
//3 
	int a,b,c,sum;
	std::cin>>a>>b>>c;
	
	sum = a+b;
	if(sum>c){
		sum = a+c;
		if(sum>b){
			sum = a+c;
			if(sum>c){
				std::cout<<"success";
			}
			else{
				std::cout<<"FAILED";
			}
		}
		else{
		std::cout<<"FAILED";
		}
	}
	else{
		std::cout<<"FAILED";
	}
	
//4
	int digit8,digit3;
	std::cin>>digit8;
	digit3 = digit8 % 1000;
	
	switch(digit3){
		case 923:
			std::cout<<"中獎了";
			break;
		case 922:
			std::cout<<"中獎了";
			break;
		case 921:
			std::cout<<"中獎了";
			break;
		case 920:
			std::cout<<"中獎了";
			break;
		case 919:
			std::cout<<"中獎了";
			break;
		case 918:
			std::cout<<"中獎了";
			break;
		default:
			std::cout<<"ㄏㄏ沒中";
	}
	return 0;
} 

