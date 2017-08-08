//Komposisi Fungsi
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int fungsi(int T,int R, int U, int z){
	int hsl;
	if(U>1){
		hsl=abs(T*(fungsi(T,R,U-1,z))+R);
	}else if(U==1){
		hsl=abs(T*z+R);
	}
	return(hsl);
}
int main(){
	int A,B,K,x;
	scanf(" %d %d %d %d",&A,&B,&K,&x);
	
	int nilai;
	nilai = fungsi(A,B,K,x);
	
	printf("%d\n",nilai);
	return 0;
}
