//UVa 10567 - Helping Fill Bates
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
	vector<vi> chars; // index 0-25 are for the lower case char
	chars.assign(52, vi());
	string S;
	cin >> S;
	//store increasing indices of each char in S in 52 vectors
	for(int i=0;i<S.length();i++){
		int c = S[i] - 'a';
		if((c <= 0) && (c >= 25)){ // lowercase
			c = S[i] - 'A' + 26;
		}
		chars[c].push_back(i);
	}
	
	int Q;
	cin >> Q;
	while(Q--){
		string qStr;
		cin >> qStr;
		vector<int>::iterator low;
		int lowestIdx = 0;
		bool isMatch = true;
		int first, last;
		for(int i=0;i<qStr.length();i++){
			int c = qStr[i] - 'a';
			if((c <= 0) && (c >= 25)){ //upper case
				c = S[i] - 'A' + 26;
			}
			if(chars[c].size() > 0){
				low = lower_bound(chars[c].begin(),chars[c].end(),lowestIdx);
			}else{
				isMatch = false;
				break;
			}
			
			if((low-chars[c].begin()) == chars[c].size()){
				if(chars[c][chars[c].size()-1] != lowestIdx){
					isMatch = false;
					break;
				}
			}
			if(i == 0){
				first = chars[c][low-chars[c].begin()];
			}else if(i == qStr.size()-1){
				last = chars[c][low-chars[c].begin()];
			}
			lowestIdx = chars[c][low-chars[c].begin()] +1;
		}
		
		if(isMatch){
			cout << "Matched " << first << " " << last << endl;
		}else{
			cout << "Not matched" << endl;
		}
	}
	return 0;
}