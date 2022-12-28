#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

int main()
{
    const int size = 3;
    std::array<std::array<int,size>,size> vec = {{{1,2,3},{4,5,6},{7,8,9}}};
    
    int column1 = 0,column2 = 1;
    for(int i=0;i<size;i++){
        // swap for column1 and column2
        int temp = vec[i][column1];
        vec[i][column1] = vec[i][column2];
        vec[i][column2] = temp;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            std::cout<<vec[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}
