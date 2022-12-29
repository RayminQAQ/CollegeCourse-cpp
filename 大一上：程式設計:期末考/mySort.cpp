#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

// 7 8 9 ¡Ÿ®Sºg


// Algorithm
void function1(array<int, 15> &data){
    sort(data.begin(),data.end());
}
// Bubble Sort
void function2(array<int, 15> &data){
    for(int i=0;i<(15-1);i++){
    	for(int j=0;j<(14-i);j++){
    		if(data[j]>data[j+1]){
    			int temp = data[j];
    			data[j] = data[j+1];
    			data[j+1] = temp;
			}
		}
	}

}
// Recursive Bubble Sort
void function3(array<int, 15> &data,int n){
	if(n==1){return;}
	for(int i=0;i<n-1;i++){
   		for(int j=0;j<n-1-i;j++){
   			if(data[data.size() - n + j] > data[data.size() - n + j + 1]){
   				//swap
				int temp = data[data.size() - n + j];
				data[data.size() - n + j] = data[data.size() - n + j + 1];
				data[data.size() - n + j + 1] = temp;	
			}	
		}
	}
	return function3(data,n-1);
}

int main() {
    array<int, 15> data = {4, 5, 1, 2, 3, 6, 11, 15, 13, 14, 8, 9, 7, 10, 12};
    int n = data.size();

    cout << "Unsorted Array: ";
    for (int i=0; i<data.size(); i++) {
        cout << data[i] << " ";
    }

    function1(data);
//    function2(data);
//    function3(data, n);

    cout << endl;
    cout << "Sorted Array: ";
    for (int i=0; i<data.size(); i++) {
        cout << data[i] << " ";
    }
    return 0;
}
