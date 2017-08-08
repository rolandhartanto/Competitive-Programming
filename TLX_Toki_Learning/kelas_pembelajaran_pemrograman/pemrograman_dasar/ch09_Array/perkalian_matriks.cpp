//Perkalian Matriks
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;
     
int main(){
	int N,M,P;
	scanf("%d",&N);
	scanf("%d",&M);
	scanf("%d",&P);
	
	int i, j;
	int A[101][101], B[101][101];
	for(i=1;i<=N;i++){
		for(j=1;j<=M;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=1;i<=M;i++){
		for(j=1;j<=P;j++){
			scanf("%d",&B[i][j]);
		}
	}
	
	int k,sum=0;
	for(i=1;i<=N;i++){
		for(j=1;j<=P;j++){
			sum = 0;
			for(k=1;k<=M;k++){
				sum=sum+((A[i][k])*(B[k][j]));
			}
			
			if(j==P){
				printf("%d\n",sum);
			}
			else{
				printf("%d ",sum);
			}	
			
		}
	}
    return 0;
}
