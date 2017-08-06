#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int k;
	cin>>k;
	
	int maxascii='z';
	int minascii='a';
	
	for(int i=0;i<str.length();i++){
		unsigned int temp = str[i];
		str[i]=str[i]+k;
		temp=str[i];
		do{
			if(temp>maxascii){
				str[i]=minascii-1+(temp-maxascii);
			}
			temp = str[i];
		}while(temp>maxascii);
	}
	
	cout<<str<<endl;
	
	return 0;
}