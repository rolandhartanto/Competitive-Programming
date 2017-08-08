//Membalik yang Terbalik
//Author : Roland Hartanto

#include<bits/stdc++.h>
using namespace std;

long long reve(long long x){
	long long temp = x, ret=0;
	while(temp>0){
		ret=(ret*10)+(temp % 10);
		temp = temp/10;
	}
	return (ret);
}

int main(){
	long long A,B;
	scanf("%lld %lld",&A,&B);
	long long tmp1,tmp2,sum,rsum;
	
	tmp1 = reve(A);
	tmp2 = reve(B);
	sum = tmp1+tmp2;
	rsum = reve(sum);
	
	printf("%lld\n",rsum);
	
	return 0;
}
