//Pendataan Berat Bebek
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	long long berat[100001]={0};
	
	scanf("%d",&N);
	int i;
	for(i=1;i<=N;i++){
		scanf("%lld",&berat[i]);
	}
	
	int Q;
	scanf("%d",&Q);
	long long X,Y;
	for(i=1;i<=Q;i++){
		scanf("%lld %lld",&X,&Y);
		
		int hasil1=0,hasil2=0;
		int kiri=1, kanan=N;
		int tengah;
		
		while((kiri<=kanan)&&(hasil1==0)){
			tengah = (kiri+kanan)/2;
			
			if(X<berat[tengah]){
				kanan=tengah-1;
				if(X>berat[tengah-1]){
					hasil1=tengah;
				}
			}else if(X>berat[tengah]){
				kiri=tengah+1;
				if((tengah<N)&&(X<berat[tengah+1])){
					hasil1=tengah+1;
				}else if(X>berat[N]){
					hasil1=N+1;
				}
			}else{
				if(X==berat[tengah+1]){
					kiri=tengah+1;
				}else{
					hasil1=tengah+1;	
				}
			}
		}

		kiri=1, kanan=N;
		while((kiri<=kanan)&&(hasil2==0)){
			tengah = (kiri+kanan)/2;
			
			if(Y<berat[tengah]){
				kanan=tengah-1;
				if(Y>berat[tengah-1]){
					hasil2=tengah;
				}
			}else if(Y>berat[tengah]){
				kiri=tengah+1;
				if((tengah<N)&&(Y<berat[tengah+1])){
					hasil2=tengah+1;
				}else if(Y>berat[N]){
					hasil2=N+1;
				}
			}else{
				if(Y==berat[tengah+1]){
					kiri=tengah+1;
				}else{
					hasil2=tengah+1;	
				}
			}
		}
		
		printf("%d\n",(hasil2-hasil1));
	}
	
	return 0;
}
