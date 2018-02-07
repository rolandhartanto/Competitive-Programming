#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n,time;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		time = 1;
		while(n--){
			int x, y;
			scanf("%d %d",&x,&y);
			if((time <= y)&&(time >= x)){
				if(n == 0){
					printf("%d\n",time);
				}else{
					printf("%d ",time);
				}
				time++;
			}else {
				if(time < x){
					time = x;
					if(n == 0){
						printf("%d\n",time);
					}else{
						printf("%d ",time);
					}
					time++;
				}else{
					if(n == 0){
						printf("0\n");
					}else{
						printf("0 ");
					}
				}
			}
		}
	}
	return 0;
}