//UVa 01237 - Expert Enough
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main(){
	int tc;
	vector<pair<string,ii> > data;
	cin >> tc;
	while(tc--){
		int D;
		cin >> D;
		for(int i=0;i<D;i++){
			string x;
			int l, h;
			cin >> x >> l >> h;
			data.push_back(make_pair(x,ii(l,h)));
		}
		int Q;
		cin >> Q;
		for(int i=0;i<Q;i++){
			int q, cnt = 0, idx;
			cin >> q;
			
			for(int j=0;j<(int)data.size();j++){
				if((q >= data[j].second.first) && (q <= data[j].second.second)) {
					idx = j;
					cnt++;
				}
			}
			
			if(cnt != 1){
				cout << "UNDETERMINED" << endl;
			}else{
				cout << data[idx].first << endl;
			}
		}
		if(tc > 0){
			cout << endl;
		}
		data.clear();
	}
	return 0;
}