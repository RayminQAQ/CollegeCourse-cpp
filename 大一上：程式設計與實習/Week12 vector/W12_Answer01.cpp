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
	std::vector<int> veclist;
	// Find vec1
	for(int i=0;i<vec1.size();i++){
		int counter = 0;
		for(int j=0;j<vec2.size();j++){
			if(vec1[i] == vec2[j]){
				counter++;
			}
		}
		if(counter==0){
			veclist.push_back(vec1[i]);
		}
	}
	// Find vec2
	for(int i=0;i<vec2.size();i++){
		int counter = 0;
		for(int j=0;j<vec1.size();j++){
			if(vec2[i] == vec1[j]){
				counter++;
			}
		}
		if(counter==0){
			veclist.push_back(vec2[i]);
		}
	}

// Output
	std::sort(veclist.begin(),veclist.end()-1);
	for(int i=0;i<veclist.size();i++){
		std::cout<<veclist[i];
	}
}
