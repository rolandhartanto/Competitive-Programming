#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	
	if(((x-y+1) % 2 == 0)&&(x-y+1 >= 0)&&(y > 1)){
		printf("Yes\n");
	}else{
		if((y == 1)&&(x == 0)){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}