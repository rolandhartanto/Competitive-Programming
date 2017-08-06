#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    int arr[20];
    int arrInv[20];
    for(int i=1;i<=N;i++){
        cin >> arr[i];
        arrInv[arr[i]] = i;
    }
    int i = 1;
    bool st = true;
    while((i<=N)&&(st)){
        if(arr[i] != arrInv[i]){
            st = false;
        }else{
            i++;
        }
    }
    if(st){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
    return 0;
}