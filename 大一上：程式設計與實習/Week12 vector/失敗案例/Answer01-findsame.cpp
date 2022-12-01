#include <iostream>
#include <algorithm>
#include <vector>

int main(void){
// Input
	std::vector<int> vec1,vec2;
	int time1,time2;
	
	std::cin>>time1;
	for(int i=0;i<time1;i++){
		int temp;
		std::cin>>temp;
		vec1.push_back(temp);
	}
	std::sort(vec1.begin(),vec1.end()-1);
	
	std::cin>>time2;
	for(int i=0;i<time2;i++){
		int temp;
		std::cin>>temp;
		vec2.push_back(temp);
	}
	std::sort(vec2.begin(),vec2.end()-1);
	
// Operation
	std::vector<int> sameList;
	for(int i=0;i<vec2.size();i++){
		// Find same
		for(int index=0;index<vec1.size();index++){
			if(vec1[index] == vec2[i]){
				sameList.push_back(vec2[i]);
			}
		}
	}
	
// Output
	for(int i=0;i<sameList.size();i++){
		std::cout<<sameList[i]<<" ";
	}
}
