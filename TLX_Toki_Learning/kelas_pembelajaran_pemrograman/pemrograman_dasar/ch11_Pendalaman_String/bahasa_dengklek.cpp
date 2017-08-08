//Bahasa Dengklek
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>> str;

	unsigned int maxkcl='z';
	unsigned int minkcl='a';
	unsigned int maxbsr='Z';
	unsigned int minbsr='A';
	
	unsigned int temp;
	
	for(int i=0;i<str.length();i++){
		temp=str[i];
		
		if((temp>=minkcl)&&(temp<=maxkcl)){
			str[i]=minbsr+(temp-minkcl);
		}else if((temp>=minbsr)&&(temp<=maxbsr)){
			str[i]=minkcl+(temp-minbsr);
		}
	}
	
	cout<<str<<endl;
	return 0;
}
