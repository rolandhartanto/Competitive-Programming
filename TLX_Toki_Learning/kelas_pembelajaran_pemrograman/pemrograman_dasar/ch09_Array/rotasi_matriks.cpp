//Rotasi Matriks
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int main(){
   	int M, N;
	scanf("%d %d",&M,&N);
 
	int i,j, Ar[M+1][N+1];
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			scanf("%d",&Ar[i][j]);
		}
	}
 
	for(i=1;i<=N;i++){
		for(j=M;j>=1;j--){
			if(j==1){
				printf("%d\n",Ar[j][i]);
			}
			else{
				printf("%d ",Ar[j][i]);
			}
		}
	}
 
	return 0;
}
