//UVa 01260 - Sales
//Author : Roland Hartanto
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		vector<int> dailySales;
		
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			dailySales.push_back(x);
		}
		
		int sumOfCount = 0;
		for(int i=1;i<n;i++){
			int count = 0;
			for(int j=0;j<i;j++){
				if(dailySales[j] <= dailySales[i]){
					count++;
				}
			}
			sumOfCount+=count;
		}
		
		cout << sumOfCount << endl;
	}
	return 0;
}