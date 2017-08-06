#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int arr[20];
    cin >> N;
    for(int i=1;i<=N;i++){
        int X;
        cin >> X;
        arr[X] = i;
    }
    for(int i=1;i<=N;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
