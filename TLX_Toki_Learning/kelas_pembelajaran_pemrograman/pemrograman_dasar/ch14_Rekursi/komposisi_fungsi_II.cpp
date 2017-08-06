#include<bits/stdc++.h>
using namespace std;

int rekursi(int A, int B, int K, int x){
	int temp;
	
	if(K==1){
		temp = A*x+B;
	}else{
		temp = A*rekursi(A,B,K-1,x) + B;
	}

	if(temp<0){
		temp = (-1)*temp;
	}
	
	return temp;
}

int main(){
	int a,b,k,X;
	scanf("%d %d %d %d",&a,&b,&k,&X);
	printf("%d\n",rekursi(a,b,k,X));
	
	return 0;
}