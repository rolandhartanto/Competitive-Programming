#include<bits/stdc++.h>
using namespace std;

long long hitung(long long x, long long y){
	long long hit=0;
	long long temp = x;
	while(temp % y ==0){
		hit++;
		temp=temp/y;
	}
	return (hit);
}

int main(){
	bool A[1000001];
	A[1]=false;
	long long i;
	for(i=2;i<=1000000;i++){
		A[i]=true;
	}
	long long j;
	for(i=2;i<=(sqrt(1000000));i++){
		if(A[i]==true){
			for(j=i*i;j<=1000000;j+=i){
				A[j]=false;
			}
		}
	}
	
	long long N;
	scanf("%lld",&N);
	long long max;
	for(i=2;i<=N;i++){
		if(A[i]==true){
			max=i;
		}
	}
	
	long long fak,h=0;
	for(i=2;i<=max;i++){
		if(A[i]==true){
			fak= hitung(N,i);
			if(fak>0){
				h++;
			}
			if(h==1){
				if(fak>1){
					printf("%lld^%lld",i,fak);
				}else if(fak==1){
					printf("%lld",i);
				}
			}else if(h>1){
				if(fak>1){
					printf(" x %lld^%lld",i,fak);
				}else if(fak==1){
					printf(" x %lld",i);
				}	
			}
		}
	}
	printf("\n");
	return 0;
}