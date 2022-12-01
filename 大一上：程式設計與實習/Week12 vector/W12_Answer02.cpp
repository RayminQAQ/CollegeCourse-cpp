#include <iostream>
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
	for(int i=0;i<(repeat/2+1);i++){
		// acend
		for(int odd=0;odd<vec.size();odd++){
			std::cout<<vec[odd]<<" ";
		}
		std::cout<<std::endl;
		vec.erase(vec.begin());
		// decend
		for(int even=vec.size()-1;even>=0;even--){
			std::cout<<vec[even]<<" ";
		}
		std::cout<<std::endl;
		vec.erase(vec.end()-1);
	} 
}
