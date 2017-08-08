//Konversi Biner
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

string biner(long long bil){
	string str="";
	if(bil==1){
		str = "1";
	}else{
		if(bil%2 ==0){
			str= biner(bil/2) + "0";
		}else if(bil%2 ==1){
			str= biner(bil/2) + "1";
		}
	}	
	return str;
}
int main(){
	long long A;
	scanf("%lld",&A);
	
	cout<<biner(A)<<endl;
	
	return 0;
}
