//UVa 10487 - Closest Sums
//Author : Roland Hartanto
#include <bits/stdc++.h>
using namespace std;

int absolute(int a){return ((a < 0)? -a:a);}

int main(){
	int n;
	cin >> n;
	int c = 1;
	while(n>0){
		vector<int> numbers;
		vector<int> sums;
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			numbers.push_back(x);
		}
		
		for(int i=0;i<n-1;i++){
			int sum;
			for(int j=i+1;j<n;j++){
				sum = numbers[i] + numbers[j];
				sums.push_back(sum);
			}
		}
		sort(sums.begin(),sums.end());
		//cout << sums[0] << endl;
		cout << "Case " << c << ":" << endl;
		
		int m;
		cin >> m;
		for(int i=0;i<m;i++){
			int x;
			cin >> x;
			int hi = (int)sums.size()-1, lo = 0, mid, ans;
			bool found = false;
			while(hi >= lo){
				mid = (hi+lo)/2;
				if(sums[mid] == x){
					found = true;
					ans = sums[mid];
					break;
				}else if(sums[mid] > x){
					hi = mid-1;
				}else{
					lo = mid+1;
				}
			}
			
			int test1, test2, test3;
			if(!found){
				if(sums.size() == 1){
					ans = sums[0];
				}else{
					if(lo == (int)sums.size()-1){
						test1 = absolute(sums[lo] - x);
						test2 = absolute(sums[lo-1] - x);
						ans = (test1 > test2)? sums[lo-1]: sums[lo];
					}else if(lo == 0){
						test1 = absolute(sums[lo] - x);
						test2 = absolute(sums[lo+1] - x);
						ans = (test1 > test2)? sums[lo+1]: sums[lo];
					}else{
						test1 = absolute(sums[lo] - x);
						test2 = absolute(sums[lo-1] - x);
						test3 = absolute(sums[lo+1] - x);
						ans = (min(test1,min(test2,test3)) == test1)? sums[lo]: ((min(test1,min(test2,test3)) == test2)? sums[lo-1]:sums[lo+1]);
					}
				}
			}
			
			cout << "Closest sum to " << x << " is " << ans << "." << endl;
		}
		
		c++;
		cin >> n;
		numbers.clear();
		sums.clear();
	}

	return 0;
}