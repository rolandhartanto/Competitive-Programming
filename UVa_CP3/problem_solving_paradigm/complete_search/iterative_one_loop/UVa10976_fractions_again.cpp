//UVa 10976 - Fractions Again
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int gcd(int a, int b){return (b == 0)? a:gcd(b, a%b);}
int lcm(int a, int b){return a * (b / gcd(a,b));}

int main(){
	int n;
	while(scanf("%d",&n) == 1){
		int it = n+1;
		int b = lcm(it,n); // the fraction is a/b
		vector<ii> result;
		while(it != b){
			int a = (b/n) - (b/it);
			if(b%a == 0){
				b /= a;
				a = 1;
			}
			if(a == 1){
				result.push_back(ii(b,it));
			}
			it++;
			b = lcm(it,n);
		}
		if(b == it){
			result.push_back(ii(b,it));
		}
		printf("%d\n",(int)result.size());
		for(int i=0;i<(int)result.size();i++){
			printf("1/%d = 1/%d + 1/%d\n",n,result[i].first,result[i].second);
		}
		result.clear();
	}
	return 0;
}