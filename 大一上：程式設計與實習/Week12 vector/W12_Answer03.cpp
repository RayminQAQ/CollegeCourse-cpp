#include <iostream>
#include <vector>

int main(void){
// Input
	int size;
	std::cin>>size;
	
	std::cout<<"The column element"<<std::endl;
	int columns = size, rows = size;
	std::vector<std::vector<int>> array;
	
	for(auto c=0;c<size;c++){
		std::vector<int> vectemp;
		for(auto r=0;r<size;r++){
			int temp;
			std::cin>>temp;
			vectemp.push_back(temp);
		}
		array.push_back(vectemp);
	}
	
	int change1,change2;
	std::cout<<"The column you want to modified"<<std::endl;
	std::cin>>change1>>change2;
	
// Operation
	for(int i=0;i<size;i++){
		int temp = array[i][change1];
		array[i][change1] = array[i][change2];
		array[i][change2] = temp;
	}
	
// Output
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			std::cout<<array[i][j];
		}
		std::cout<<std::endl;
	} 
}
