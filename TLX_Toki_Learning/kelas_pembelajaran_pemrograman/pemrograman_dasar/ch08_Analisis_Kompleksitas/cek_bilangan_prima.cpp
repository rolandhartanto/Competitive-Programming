#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
	if(x == 1){
		return false;
	}else{
		int i = 2;
		bool prime = true;
		while((i<=(int)sqrt(x))&&(prime)){
			if(x%i == 0){
				prime = false;
			}
			i++;
		}
		return prime;
	}
}

int main(){
	int tc;
	scanf("%d",&tc);
	
	while(tc--){
		int x;
		scanf("%d",&x);
		
		if(isPrime(x)){
			printf("YA\n");
		}else{
			printf("BUKAN\n");
		}
	}
	
	return 0;
}
