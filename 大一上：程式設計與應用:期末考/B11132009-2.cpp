#include <bits/stdc++.h> 

using namespace std;

int main(void){
	std::cout<<"The encrypted words by shift1 = 3 and shift2 = 5\n";
// 1
	fstream myfile;
	myfile.open("data-2.txt", fstream::in);
	
	string str,tmp;
	while(myfile>>tmp){
		str = str + tmp + " ";
	}
	myfile.close();
	// console
	std::cout<<"The original words: "<<str;
	// B11132009-2.txt
	myfile.open("B11132009-2.txt", fstream::out);
	myfile<<"The original words: ";
	for(int i=0;i<str.length();i++){
		myfile<<str[i];
	}
	myfile<<"\n";
	std::cout<<"\n";
	myfile.close();
	
// 2
	myfile.open("data-2.txt", fstream::in);
	
	string str2,tmp2;
	while(myfile>>tmp2){
		for(int i=0;i<tmp2.length();i++){
			if(('A'<=tmp2[i]&&tmp2[i]<='Z')||('a'<=tmp2[i]&&tmp2[i]<='z')){
				if(i%2==1){
					if(('V'<=tmp2[i]&&tmp2[i]<='Z')||('v'<=tmp2[i]&&tmp2[i]<='z')){
						str2 += (tmp2[i] + 5) - 26;
						continue;
					}
					str2 += (tmp2[i] + 5);
				}else{
					if(('X'<=tmp2[i]&&tmp2[i]<='Z')||('x'<=tmp2[i]&&tmp2[i]<='z')){
						str2 += (tmp2[i] + 3) - 26;
						continue;
					}
					str2 += (tmp2[i] + 3);
				}
			}else{
				str2 += tmp2[i];
			}
		}
		str2 += " ";
	}
	myfile.close();
	// console
	std::cout<<"The encrypted words: "<<str2;
	// B11132009-2.txt
	myfile.open("B11132009-2.txt", fstream::app);
	myfile<<"The encrypted words: ";
	for(int i=0;i<str2.length();i++){
		myfile<<str2[i];
	}
	myfile<<"\n";
	std::cout<<"\n";
	myfile.close();

// 3: process str2 (未完成，因為空白件不能納入計算) -> if(str2[i]==' '){space++;} //好像可以再讀一次檔案看看，謥白建好線可以幫忙 
	string str3;
	int space = 0;
	for(int i=0;i<str2.length();i++){
		if(str2[i]==' '){space++;}
		if(('A'<=str2[i]&&str2[i]<='Z')||('a'<=str2[i]&&str2[i]<='z')){
			if(i%2==1){
				if(('A'<=str2[i]&&str2[i]<='E')||('a'<=str2[i]&&str2[i]<='e')){
					str3 += (str2[i] - 5) + 26;
					continue;
				}
				str3 += (str2[i] - 5);
			}else{
				if(('A'<=str2[i]&&str2[i]<='C')||('a'<=str2[i]&&str2[i]<='c')){
					str3 += (str2[i] - 3) + 26;
					continue;
				}
				str3 += (str2[i] - 3);
			}
		}else{
			str3 += str2[i];
		}
	}
	
//	
	// console
	std::cout<<"The decrypted words: "<<str3;
	// B11132009-2.txt
	myfile.open("B11132009-2.txt", fstream::app);
	myfile<<"The decrypted words: ";
	for(int i=0;i<str3.length();i++){
		myfile<<str3[i];
	}
	myfile<<"\n";
	std::cout<<"\n";
	myfile.close();
	
}
