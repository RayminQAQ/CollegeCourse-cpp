/* Use a bool array[26][times] as counter, and then retreive the charater*/
#include <iostream>
#include <string>

int main()
{
    // Input
	int times; 
	std::cout<<"The number of strings: ";
	std::cin>>times;
	
	// Operation
	bool count[26][times] = {false};
	for(int i=0;i<times;i++){
	    std::cout<<"String"<<i+1<<":";
	    std::string str;
	    std::cin>>str; // std::getline(std::cin,str); & std::cin.ignore();
	    for(int j=0;j<str.length();j++){
	        count[(int)(str[j] - 'a')][i] = true;
	    }
	    std::cout<<"\n";
	}
	
	// Retreive count
	int common = 0;
	for(int i=0;i<26;i++){
	    int flag = 0;
	    for(int j=0;j<times;j++){
	        if(count[i][j]==true){
	            flag++;
	        }
	    }
	    if(flag==times){
	        common++;
	    }
	}
	
	// Output
	std::cout<<common<<" characters exist in each string";
}