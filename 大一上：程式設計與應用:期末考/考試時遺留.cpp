B1101	Kitty
B1102	Amy
B1103	Sabina
B1104	Bob
B1105	Tracy
B1106	Cathy
B1107	David
B1108	Grace
B1109	David
B1110	John
B1111	Helen
B1112	Isabel
B1113	Janet
B1114	Alice
B1115	Judy
B1116	Susan
B1117	Cathy
B1118	David
B1119	Mary
B1120	Nina
B1121	Frank
B1122	Cathy
B1123	Andy
B1124	Daisy
B1125	Gina
B1126	Ruby
B1127	Betty
B1128	Simon
B1129	Olive
B1130	Wendy




while(myfile>>tmp2){
		if(tmp2.length()%2==1){
			for(int i=0;i<tmp2.length();i++){
				if(('A'<=tmp2[i]||tmp2[i]<='Z')||('a'<=tmp2[i]||tmp2[i]<='z')){
					str2 += (tmp2[i] + 5);
				}else{
					str2 += tmp2[i];
				}
			}
		}else{
			for(int i=0;i<tmp2.length();i++){
				if(('A'<=tmp2[i]||tmp2[i]<='Z')||('a'<=tmp2[i]||tmp2[i]<='z')){
					str2 += (tmp2[i] + 3);
				}else{
					str2 += tmp2[i];
				}
			}
		}
		str2 += " ";
	}
	myfile.close();
	
	
	
//










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
