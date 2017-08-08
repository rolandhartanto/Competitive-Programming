//Tukang Sulap
//Author : Roland Hartanto

#include<cstdio>
using namespace std;

void tukar(int * j, int * k){
	int temp;
	
	temp = *j;
	*j = *k;
	*k = temp;	
} 

int main(){
	int N;
	scanf("%d",&N);
	
	int i;
	int A[1001],B[1001];
	for(i=1;i<=N;i++){
		scanf("%d",&A[i]);
	}
	for(i=1;i<=N;i++){
		scanf("%d",&B[i]);
	}
	
	int Tes;
	scanf("%d",&Tes);
	
	int sa, ye, tm1, tm2;
	char P, Q;
	for(i=1;i<=Tes;i++){
		scanf(" %c %d %c %d",&P,&sa,&Q,&ye);
		
		if(P=='A'){
			tm1 = A[sa];
		} else if (P=='B'){
			tm1 = B[sa];
		}
		if(Q=='A'){
			tm2 = A[ye];
		} else if (Q=='B'){
			tm2 = B[ye];
		}
		
		tukar(&tm1,&tm2);
		
		if(P=='A'){
			A[sa] = tm1;
		} else if (P=='B'){
			B[sa] = tm1;
		}
		if(Q=='A'){
			A[ye] = tm2;
		} else if (Q=='B'){
			B[ye] = tm2;
		}
	}
	
	for(i=1;i<=N;i++){
		if(i==N){
			printf("%d\n",A[i]);
		}else{
			printf("%d ",A[i]);
		}
	}
	for(i=1;i<=N;i++){
		if(i==N){
			printf("%d\n",B[i]);
		}else{
			printf("%d ",B[i]);
		}
	}
	return 0;
}
