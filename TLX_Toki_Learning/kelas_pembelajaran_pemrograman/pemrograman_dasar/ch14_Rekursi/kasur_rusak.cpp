//Kasur Rusak
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

bool cekPalindrom(string X){
	if(X.length()==1){
		return true;
	}else if(X.length()==2){
		if(X[0] == X[1]){
			return true;
		}else{
			return false;
		}
	}
	else if(X.length()>2){
		if(X[0] == X[X.length()-1]){
			X.erase(0,1);
			X.erase(X.length()-1,1);
			
			return (cekPalindrom(X));
		}else{
			return false;
		}
	}
}

int main(){
	string A;
	cin>>A;
	if(cekPalindrom(A)==true){
		cout<<"YA"<<endl;
	}else{
		cout<<"BUKAN"<<endl;
	}
	
	return 0;
}
