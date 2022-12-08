#include <iostream>
#include <map>

void insert(std::map <std::string,int> &map);
void erase(std::map <std::string,int> &map);
void print(std::map <std::string,int> &map);

int main(void){
	int times;
	std::map <std::string,int> map;
	
	std::cout<<"The number of the instruction\n";
	std::cin>>times;
	for(int i=0;i<times;i++){
		int state;
		std::cin>>state;
		if(state==1){
			insert(map);
		}else if(state==2){
			erase(map);
		}else if(state==3){
			print(map);
		}else{
			std::cout<<"wrong\n";
		}
	}
}

void insert(std::map <std::string,int> &map){
	int value;
	std::string name;
	std::cin>>name>>value;
	std::map<std::string,int>::iterator iter = map.find(name);
	if(iter != map.end()/*map exist*/){
		map[name] += value;
		return;
	}else{
		map[name] = value;
	}
}

void erase(std::map <std::string,int> &map){
	std::string name;
	std::cin>>name;
	map.erase(name);
	return;
}
void print(std::map <std::string,int> &map){
	std::string name;
	std::cin>>name;
	std::cout<<map[name];
	return;
}
