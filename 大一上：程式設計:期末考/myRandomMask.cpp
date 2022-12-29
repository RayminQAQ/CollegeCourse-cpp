#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int r(int &count){
	return rand() % count;
}

int main (){
	srand(time(NULL));
// 1.txt
	// Find the element in the file
	fstream myfile1; //
	myfile1.open("1.txt", fstream::in | fstream::out); //
	
	int count = 0,temp;
	vector<int> vec;
	while(myfile1>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	int modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile1.close(); //
	
	fstream mn01; //
	mn01.open("1.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn01<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn01.close(); //

// 2.txt
	// Find the element in the file
	fstream myfile2; //
	myfile2.open("2.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile2>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile2.close(); //
	
	fstream mn02; //
	mn02.open("2.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn02<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn02.close(); //
	
// 3.txt
	// Find the element in the file
	fstream myfile3; //
	myfile3.open("3.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile3>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile3.close(); //
	
	fstream mn03; //
	mn03.open("3.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn03<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn03.close(); //
	
// 4.txt
	// Find the element in the file
	fstream myfile4; //
	myfile4.open("4.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile4>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile4.close(); //
	
	fstream mn04; //
	mn04.open("4.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn04<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn04.close(); //
	
// 5.txt
	// Find the element in the file
	fstream myfile5; //
	myfile5.open("5.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile5>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile5.close(); //
	
	fstream mn05; //
	mn05.open("5.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn05<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn05.close(); //
// 6.txt
	// Find the element in the file
	fstream myfile6; //
	myfile6.open("6.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile6>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile6.close(); //
	
	fstream mn06; //
	mn06.open("6.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn06<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn06.close(); //
	
// 7.txt
	// Find the element in the file
	fstream myfile7; //
	myfile7.open("7.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile7>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile7.close(); //
	
	fstream mn07; //
	mn07.open("7.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn07<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn07.close(); //

// 8.txt
	// Find the element in the file
	fstream myfile8; //
	myfile8.open("8.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile8>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile8.close(); //
	
	fstream mn08; //
	mn08.open("8.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn08<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn08.close(); //
	
// 9.txt
	// Find the element in the file
	fstream myfile9; //
	myfile9.open("9.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile9>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile9.close(); //
	
	fstream mn09; //
	mn09.open("9.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn09<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn09.close(); //
	
// 10.txt
	// Find the element in the file
	fstream myfile10; //
	myfile10.open("10.txt", fstream::in | fstream::out); //
	
	count = 0,temp = 0;
	while(myfile10>>temp){ //
		vec.push_back(temp);
		count++;
	}
	
	// Find the element to be modified
	modtime = count * 0.1;
	
	// Find the place to be modified
	for(int i=0;i<modtime;i++){
		vec[r(count)] = 0;	
	}
	
	myfile10.close(); //
	
	fstream mn10; //
	mn10.open("10.txt", fstream::in | fstream::out); //
	// Modified element
	for(int i=0;i<count;i++){
		mn10<<vec[i]<<"\n"; //
	}
	
	// Close file
	vec.empty();
	mn10.close(); //
}
