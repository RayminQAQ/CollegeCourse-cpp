/* 
	cvs file cannot have space, only use comma to seperate data 
	the comma in csv file is space
	
	& and you can open csv by excel 
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime> 

int r(void){
	return rand() % 80 + 20;
}

int main(void){
	srand(time(NULL));
	
	while(true){
		
		int mode;
		std::cout<<"Enter the mode to operate (1:input, 2:read, 3:exit)\n";
		std::cin>>mode;
		switch(mode){
			case 1:
				{
				// Open file
					std::fstream myfile;
					myfile.open("filename.csv", std::fstream::in | std::fstream::app);
					if(myfile.is_open()){
						std::cout<<"Open Successfully"<<std::endl;
					}
				// Operation
					int n;
					std::cout<<"The number of the data set\n";
					std::cin>>n;
					for(int i=0;i<n;i++){
						myfile<<r()<<","<<r()<<","<<r()<<","<<r()<<"\n";
					}
				// Close file
					myfile.close();
					break;
				}
			case 2:
				{
				// Open file
					std::fstream myfile;
					myfile.open("filename.csv", std::fstream::in | std::fstream::app);
					if(myfile.is_open()){
						std::cout<<"Open Successfully"<<std::endl;
					}
					
				// Operation
					float aveChinese;
					float sumChinese{0}, sumEnglish{0}, sumMath{0}, sumSociety{0};
					int Chinese, English, Math, Society, Dataset = 0;
					char comma;
					while(!myfile.eof()){
						myfile>>Chinese>>comma>>English>>comma>>Math>>comma>>Society;
						sumChinese += Chinese;
						sumEnglish += English;
						sumMath += Math;
						sumSociety += Society;	
						Dataset++;	
					}
					std::cout<<"Chinese:"<<sumChinese/Dataset<<"\n";
					std::cout<<"English: "<<sumEnglish/Dataset<<"\n";
					std::cout<<"Math: "<<sumMath/Dataset<<"\n";
					std::cout<<"Society: "<<sumSociety/Dataset<<"\n";
				
					float aveTotal = (sumChinese + sumEnglish + sumMath + sumSociety) / (4*Dataset);
					std::cout<<"Total: "<<aveTotal<<"\n";
				// Close file
					myfile.close();
					break;	
				}
			case 3:
				{
					std::cout<<"Close the file\n";
					std::fstream myfile;
					myfile.open("filename.csv", std::fstream::trunc); // Delete all the file
					myfile.close();
					return 0;
				}
			default:
				std::cout<<"Wrong Input\n";	
		}
	}
}


