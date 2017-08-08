//Penjumlahan Pecahan
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;
 
int64_t FPB(int64_t x,int64_t y){
	int64_t t;
	while(y!=0){
		t=y;
		y=x%y;
		x=t;
	}
	return x;
}
 
int main(){
	int64_t A,B,C,D;
	cin>>A>>B;
	cin>>C>>D;
 
	int64_t temp,E,F;
	F = (B/FPB(B,D))*D;//kpk
	E = ((F/B)*A)+((F/D)*C);
 
	temp=FPB(E,F);
	F=F/temp;
	E=E/temp;
	cout<<E<<" "<<F<<endl;	
 
	return 0;
}
