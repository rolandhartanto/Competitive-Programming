#include <bits/stdc++.h>
using namespace std;

bool isTriangle(int a, int b, int c){
	return ((a + b > c) && (a + c > b) && (b + c > a));
}

int main(){
	int n;
	scanf("%d",&n);
	
	int count;
	int ans = 0;
	
	// if i ^ j ^ k = 0, then i ^ j = k !!
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			int third = i ^ j;
			if((third > i)&&(third > j)){
				if((isTriangle(i,j,third))&&(third<=n)){
					ans++;
				}
			}
		}	
	}
	
	printf("%d\n",ans);
	return 0;
}