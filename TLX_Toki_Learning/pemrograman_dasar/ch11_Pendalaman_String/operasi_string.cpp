#include<bits/stdc++.h>
using namespace std;

int main(){
	string str,str2,str3,str4;//a main, b sub
	cin>> str;
	cin>> str2;
	cin>> str3;
	cin>> str4;
	
	int found = str.find(str2);
	if(found!=string::npos){
		int a=str2.length();
		str.erase(found,a);
	}
	
	int found2 = str.find(str3);
	str.insert(found2+str3.length(),str4);
	
	cout<< str<<endl;
	return 0;
}