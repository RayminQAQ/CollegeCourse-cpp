#include <iostream>
#include <cstdlib>
#include <ctime>


int getramNum(void){
	int randomNum;
	srand(time(NULL));
	randomNum = rand();
	randomNum %= 98;
	randomNum += 1;
	return randomNum;
}

int main(void){
//1
	int num = getramNum();
	
	int trail = 0;
	
	//GET RANGE
	int up = 99,down = 1;
	while(true){
	//trail
	trail++;
		
		//GET NUM
		std::cout<<"Upper limit: "<<up<<"  "<<"lower limit: "<<down<<std::endl;
		std::cout<<"Input number? "<<std::endl;
		int playernum;
		std::cin>>playernum;
		
		//counting
		if((playernum<down)||(playernum>up)){
			std::cout<<"Invalid Number"<<std::endl;
			continue;
		}else{
			if(playernum==num){
				std::cout<<"Bang!"<<std::endl;
				break;
			}else if(playernum>num){
				up = playernum;
			}else{
				down = playernum;
			}	
		}			
	}
	
	std::cout<<"Trail: "<<trail;
	
} 
