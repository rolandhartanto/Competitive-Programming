#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    bool st = true;
    cin >> N;
    int f[20];
    for(int i=0;i<20;i++){
        f[i] = 0;
    }
    for(int i=0;i<N;i++){
        int x;
        cin >> x; 
        f[x]++;
        if(f[x]>1){
            st = false;
            cout<< "NO"<< endl;
            break;
        }
    }
    if(st){
        cout<<"YES"<<endl;
    }
    return 0;
}
