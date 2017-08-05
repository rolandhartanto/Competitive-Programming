#include<bits/stdc++.h>
using namespace std;

int fak(int N){
	if(N==1){
		return 1;
	}
	else if(N%2 == 1){
		return (N * (fak(N-1)));
	}else if(N%2 == 0){
		return ((N/2)*fak(N-1));
	}
}

int main(){
	int A;
	scanf("%d",&A);
	printf("%d\n",fak(A));

	return 0;
}