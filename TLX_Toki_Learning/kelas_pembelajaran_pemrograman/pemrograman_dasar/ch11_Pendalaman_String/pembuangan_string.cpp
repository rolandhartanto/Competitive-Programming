//Pembuangan String
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int main(){
	string str,str2;//a main, b sub
	cin>> str;
	cin>> str2;
	
	int found = str.find(str2);
	while(found!=string::npos){
		int a=str2.length();
		str.erase(found,a);
		found=str.find(str2);
	}
	
	cout<< str<<endl;
	return 0;
}
