#include<bits/stdc++.h>
using namespace std;

int main(){
	bool A[1000001];
	int i;
	for(i=1;i<=1000000;i++){
		A[i]=true;
	}
	int j;
	
	A[1]=false;
	for(i=2;i<=sqrt(1000000);i++){
		if(A[i]==true){
			for(j=(i*i);j<=1000000;j+=i){
				A[j]=false;
			}
		}
	}
	int X;
	int count;
	bool tanda=true;
	
	scanf("%d",&X);
	for(i=2;i<=X;i++){
		if((tanda==false)&&(count!=0)){
			printf(" x ");
		}
		count=0;
		if(A[i]==true){
			while((X%i)==0){
				tanda=false;
				count++;
				X=X/i;
			}
		}
		
		if(count>1){
			printf("%d^%d",i,count);
		}else if(count==1){
			printf("%d",i);
		}
	}
	printf("\n");
	
	return 0;
}
