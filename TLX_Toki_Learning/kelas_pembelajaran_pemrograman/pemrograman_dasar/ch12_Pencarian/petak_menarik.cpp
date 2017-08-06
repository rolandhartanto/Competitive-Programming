#include<bits/stdc++.h>
using namespace std;

struct Data{
	int isi;
	int hslKali;
};

int main(){
	int brs,kol,X;
	Data table[101][101]={0};
	
	scanf("%d %d %d",&brs,&kol,&X);
	
	if(((brs>=1)&&(brs<=100))&&((kol>=1)&&(kol<=100))&&((X>=1)&&(X<=10000))){
		int i,j,a;
		for(i=1;i<=brs;i++){
			for(j=1;j<=kol;j++){
				scanf("%d",&a);
				if((a>=1)&&(a<=10)){
					table[i][j].isi = a;
				}
			}
		}
		
		for(i=1;i<=brs;i++){
			for(j=1;j<=kol;j++){
				table[i][j].hslKali=1;
				if(i>1){
					table[i][j].hslKali=table[i][j].hslKali * table[i-1][j].isi;
				}
				if(i<brs){
					table[i][j].hslKali=table[i][j].hslKali * table[i+1][j].isi;
				}
				if(j<kol){
					table[i][j].hslKali=table[i][j].hslKali * table[i][j+1].isi;
				}
				if(j>1){
					table[i][j].hslKali=table[i][j].hslKali * table[i][j-1].isi;
				}
			}
		}
		
		int posbrs=0,poskol=0;
		bool found=false;
		for(j=1;j<=kol;j++){
			for(i=1;i<=brs;i++){
				if(table[i][j].hslKali==X){
					posbrs=i;
					poskol=j;
					found = true;
					break;
				}
			}
			if(found){
				break;
			}
		}
		
		printf("%d %d\n",posbrs,poskol);
	}
	
	return 0;
}