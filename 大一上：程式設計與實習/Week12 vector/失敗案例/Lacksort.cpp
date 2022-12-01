#include <iostream>
#include <algorithm>
#include <vector>

int main(void){
// Input
	int repeat;
	std::cin>>repeat;
	std::vector<int> vec(repeat);
	for(int i=0;i<repeat;i++){
		std::cin>>vec[i];
	}
	
// Operation
	int cur = 1;
	for(int i=0;i<repeat;i++){
		if(cur%2 == 1){
			std::sort(vec.begin(), vec.end()); // sort cannot work
		}else{
			std::sort(vec.begin(), vec.end(), std::greater<int>());
		}
		
		for(int i=0;i<vec.size();i++){
			std::cout<<vec[i];
		}
		std::cout<<std::endl;
		
		vec.erase(vec.begin());
	}
}
