#include <iostream>
#include <vector>

int main(void){
// Wrong
	int repeat;
	std::cin>>repeat;
	std::vector<int> vec(repeat);
	std::cin>>vec;
	for(int i=0;i<repeat;i++){
		std::cout<<vec[i];
	}

// Right way-1: Declare memory
	int repeat;
	std::cin>>repeat;
	std::vector<int> vec(repeat);
	for(int i=0;i<repeat;i++){
		std::cin>>vec[i];
	}
	
// Right way-2: Doesn't declare memory
	int repeat;
	std::cin>>repeat;
	std::vector<int> vec;
	for(int i=0;i<repeat;i++){
		int tem;
		std::cin>>tem;
		vec.push_back(tem);
	}
}
