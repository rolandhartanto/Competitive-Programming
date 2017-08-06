#include <bits/stdc++.h>
using namespace std;


int main() {
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        int multi = 1;
        while((N--) >1){
            int x;
            cin >> x;
            multi *= (x%1234567);
            multi %=1234567;
        }
        
        cout << multi << endl;
    }
    return 0;
}
