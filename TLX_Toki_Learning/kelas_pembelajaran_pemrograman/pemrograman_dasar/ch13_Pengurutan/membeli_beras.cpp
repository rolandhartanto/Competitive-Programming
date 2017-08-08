//Membeli Beras
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

struct barang{
	int W;
	double C;
	double harga;
};
int N, X;

void urut(barang A[]){
	double temp1,temp3;
	int temp2;
	int i,j;
	for(i=1;i<=N;i++){
		temp1 = A[i].harga;
		temp2 = A[i].W;
		temp3 = A[i].C;
		j=i-1;
		while((temp1<(A[j].harga))&&(j>1)){
			A[j+1].harga = A[j].harga;
			A[j+1].W = A[j].W;
			A[j+1].C = A[j].C;
			j--;
		}
		if(temp1>=A[j].harga){
			A[j+1].harga = temp1;
			A[j+1].W = temp2;
			A[j+1].C = temp3;
		}else{
			A[j+1].harga = A[j].harga;
			A[j].harga = temp1;
			A[j+1].W = A[j].W;
			A[j].W = temp2;
			A[j+1].C = A[j].C;
			A[j].C = temp3;
		}
	}
}


int main(){
	
	scanf("%d %d",&N,&X);
	
	int i;
	barang Data[1001];
	for(i=1;i<=N;i++){
		scanf("%d",&Data[i].W);
	}
	for(i=1;i<=N;i++){
		scanf("%lf",&Data[i].C);
	}
	for(i=1;i<=N;i++){
		Data[i].harga = (Data[i].C) / (Data[i].W) ;
	}
	
	urut(Data);

	int max = X;
	double sum=0;
	i=N;
	while((max>0)&&(i>0)){
		max--;
		Data[i].W--;
		sum = sum + Data[i].harga;
		if(Data[i].W == 0){
			i--;
		}
		
	}
	printf("%.5lf\n",sum);
	
	return 0;
}
