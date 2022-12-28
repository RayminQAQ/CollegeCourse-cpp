#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
// Input
    int times;
    std::cin>>times;
    
    std::vector<int> vec;
    for(int i=0;i<times;i++){
        int temp;
        std::cin>>temp;
        vec.push_back(temp);
    }
    
// Operation & Output
    for(int i=0;i<times;i++){
        if(i%2==0){
            std::sort(vec.begin(),vec.end());
        }else{
            std::sort(vec.begin(),vec.end(),[](int a, int b){return a>b;});
        }
        for(int j=0;j<vec.size();j++){
            std::cout<<vec[j]<<" ";
        }
        std::cout<<"\n";
        vec.erase(vec.begin());
    }
}
