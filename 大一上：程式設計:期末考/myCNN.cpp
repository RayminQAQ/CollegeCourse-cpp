#include<iostream>
#include<array>
using namespace std;


int main() {
	// create Input Matrix X, Kernel Matrix W and Output Matrix Y
	array<array<int,8>,8> X = {{{10,10,10,10,0,0,0,0},{10,10,10,10,0,0,0,0},{10,10,10,10,0,0,0,0},{10,10,10,10,0,0,0,0},{10,10,10,10,0,0,0,0},{10,10,10,10,0,0,0,0},{10,10,10,10,0,0,0,0},{10,10,10,10,0,0,0,0}}};
    array<array<int,3>,3> W = {{{1,0,-1},{1,0,-1},{1,0,-1}}};
    array<array<int,6>,6> Y = {0};
    
	// 2D cross-correlation operation
    for(int i=0;i<6;i++){
    	for(int j=0;j<6;j++){
    		Y[i][j] = X[i][j] * W[0][0] + X[i][j+1] * W[0][1] + X[i][j+2] * W[0][2] + X[i+1][j] * W[1][0] + X[i+1][j+1] * W[1][1] + X[i+1][j+2] * W[1][2]+ X[i+2][j] * W[2][0] + X[i+2][j+1] * W[2][1] + X[i+2][j+2] * W[2][2];
			//    		Y[i][j] = X[i][j] * W[0][0];
			//    		Y[i][j+1] = X[i][j+1] * W[0][1];
			//    		Y[i][j+2] = X[i][j+2] * W[0][2];
			//    		
			//    		Y[i+1][j] = X[i+1][j] * W[1][0];
			//    		Y[i+1][j+1] = X[i+1][j+1] * W[1][1];
			//    		Y[i+1][j+2] = X[i+1][j+2] * W[1][2];
			//    		
			//    		Y[i+2][j] = X[i+2][j] * W[2][0];
			//    		Y[i+2][j+1] = X[i+2][j+1] * W[2][1];
			//    		Y[i+2][j+2] = X[i+2][j+2] * W[2][2];
		}
	}
    
	// Print out the Output Matrix Y	
    cout << endl << "Output Matrix Y:" << endl;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			std::cout<<Y[i][j]<<" ";
		}
		std::cout<<"\n";
	}

    return 0;
}

