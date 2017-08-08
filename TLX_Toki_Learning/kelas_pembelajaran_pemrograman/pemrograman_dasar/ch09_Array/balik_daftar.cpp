//Balik Daftar
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

int main(){
	int A[101];
	int i=0,b, x;
	
	x = scanf("%d",&b);
	while(x!=EOF){
		i++;
		A[i]=b;
		x = scanf("%d",&b);
	}

	int j;
	for(j=i;j>=1;j--){
		printf("%d\n",A[j]);
	}
	
	return 0;
}
