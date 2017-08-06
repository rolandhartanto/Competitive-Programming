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
    int arr[21];
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= N; i++){
        cout << arr[arr[i]] << endl;
    }
    return 0;
}

