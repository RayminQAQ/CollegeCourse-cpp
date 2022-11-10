#include <iostream>
#include <iomanip>
#include <cstring>
#include <algorithm>

struct studentData{
    int midScore;
    int endScore;
    int sumScore; // int sumScore = midScore + endScore; -> cannot do operation in struct
    std::string name; // char name[10]; is okay
};

int main(void){
    // Input
    struct studentData list[100]; // Knowing that list is an object, data type call studentData 
    
    std::cout<<"Input\n";
    int size;
    std::cin>>size;
    std::cout<<"Student\n";
    for(int i=0;i<size;i++){
        std::cin>>list[i].name>>list[i].midScore>>list[i].endScore;
        list[i].sumScore = list[i].midScore + list[i].endScore;
    }

    // Bubble sort -> Practice
    for(int i = 0;i<size-1;i++){
    	for(int j=0;j<size-(i+1);j++){
    		if(list[j].sumScore>list[j+1].sumScore){ // j -> i can also work??
    			// swap
    			struct studentData temp;
    			temp = list[j];
    			list[j] = list[j+1];
    			list[j+1] = temp;
			}
		}
	}

    // Output
    std::cout<<"Name\t"<<"Midterm\t"<<"Final\t"<<"Total\n";
    for(int i=size-1;i>=0;i--){
        std::cout<<list[i].name<<"\t"<<list[i].midScore<<"\t"<<list[i].endScore<<"\t"<<list[i].sumScore<<std::endl;
    }
}
