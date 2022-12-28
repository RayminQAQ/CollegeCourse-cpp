#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
// Input
    std::vector<int> vec1,vec2;
	int time1,time2;
	
	std::cin>>time1;
    for(int i=0;i<time1;i++){
        int temp;
        std::cin>>temp;
        vec1.push_back(temp);
    }
	std::cin>>time2;
	for(int i=0;i<time2;i++){
	    int temp;
	    std::cin>>temp;
	    vec2.push_back(temp);
	}

// Operation：
    std::vector<int> list;
    // Find non-repeated in vec1
    for(int i=0;i<vec1.size();i++){
        bool repeat = false;
        for(int j=0;j<vec2.size();j++){
            if(vec1[i]==vec2[j]){
                repeat = true;
            }
        }
        if(repeat == false){list.push_back(vec1[i]);}
    }
    // Find non-repeated in vec2
    for(int i=0;i<vec2.size();i++){
        bool repeat = false;
        for(int j=0;j<vec1.size();j++){
            if(vec2[i]==vec1[j]){
                repeat = true;
            }
        }
        if(repeat == false){list.push_back(vec2[i]);}
    }
    // sort and output non-repeated number
    std::sort(list.begin(),list.end()-1); // sort without -1 can still work
    for(int i=0;i<list.size();i++){
        std::cout<<list[i]<<" ";
    }
    return 0;
}
