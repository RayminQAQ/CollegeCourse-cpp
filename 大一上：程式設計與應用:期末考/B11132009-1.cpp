#include <bits/stdc++.h> 

using namespace std;

typedef struct people{
	int salary;
	string name;
	string id;
}people;

int r(void){
	return (rand() % 16 + 35) * 1000; //35-50
}

int main(void){
// Step 1
	std::cout<<"Sample for Step1:\n";
	srand(time(NULL));
	fstream myfile;
	myfile.open("data-1.txt", fstream::in);
	
	people data[30];
	string tmp1,tmp2;
	int count1_1 = 0;
	while(myfile>>tmp1>>tmp2){
		data[count1_1].id = tmp1;
		data[count1_1].name = tmp2;
		data[count1_1].salary = r();
		count1_1++;
	}
	myfile.close();
	
	myfile.open("B11132009-1.txt", fstream::out);
	// file
	myfile<<"B11132009-1.txt\n";
	for(int i=0;i<30;i++){
		myfile<<data[i].id<<"\t"<<data[i].name<<"\t"<<data[i].salary<<"\n";
	}
	// console
	for(int i=0;i<30;i++){
		std::cout<<data[i].id<<"\t"<<data[i].name<<"\t"<<data[i].salary<<"\n";
	}
	
	myfile.close();

// Step 2
	std::cout<<"\nSample for Step2:\n";
	// average salary
	float sum = 0;
	for(int i=0;i<30;i++){
		sum += data[i].salary;
	}
	std::cout<<"average salary: "<<sum/30<<"\n";
	
	myfile.open("B11132009-1.txt", fstream::app);
	myfile<<"\naverage salary: "<<sum/30<<"\n";
	myfile.close();
	
	// mediate salary
		//sort
		for(int i=0;i<30;i++){
			for(int j=i;j<30;j++){
				if(data[i].salary<data[i+1].salary){
					people tmp = data[i];
					data[i] = data[i+1];
					data[i+1] = tmp;
				}
			}
		}
		//cout
		std::cout<<"mediate salary: "<<(data[14].salary+data[15].salary)/2<<"\n";
		myfile.open("B11132009-1.txt", fstream::app);
		myfile<<"mediate salary: "<<(data[14].salary+data[15].salary)/2<<"\n\n";
		myfile.close();

// Step 3
	std::cout<<"\nSample for Step3:\n";
	int list[51] = {0};
	for(int i=0;i<30;i++){
		int tmp = data[i].salary / 1000;
		list[tmp]++;
	}
	
	std::vector<int> common;
	for(int i=30;i<51;i++){
		if(list[i]>=2){
			common.push_back(i);
		}
	}
	
	//search
	myfile.open("B11132009-1.txt", fstream::app);
	for(int i=0;i<common.size();i++){
		//int flag = common[i];
		int salary = common[i] * 1000;
		for(int j=0;j<30;j++){
			if(data[j].salary == salary){
				std::cout<<data[j].id<<"\t"<<data[j].name<<"\t"<<data[j].salary<<"\n";
				myfile<<data[j].id<<"\t"<<data[j].name<<"\t"<<data[j].salary<<"\n";
			}
		}
		std::cout<<"\n";
		myfile<<"\n";
	}
	myfile.close();
}
