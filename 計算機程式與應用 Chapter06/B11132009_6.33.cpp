#include <iostream>
#include <random>

enum Coin {Tails = 0, Heads};

Coin flip(void);

int main(void){
    int countTails = 0, countHeads = 0;
    for(int i = 0;i<100;i++){
        Coin current = flip();
        if(current == Tails){
            countTails++;
        }else{  
            countHeads++;
        }
    }
    std::cout<<"\n\n";
    std::cout<<"The total number of Heads was "<<countHeads<<std::endl;
    std::cout<<"The total number of Tails was "<<countTails<<std::endl;
}

std::default_random_engine generator( time(NULL) );
Coin flip(void){
    std::uniform_real_distribution<int> unif(0.0, 1.0);
    int ramNum = (unif(generator)) % 2;
    if(ramNum == 0){
        std::cout<<"Tails ";
        return Tails;
    }else{
        std::cout<<"Heads ";
        return Heads;
    }
}