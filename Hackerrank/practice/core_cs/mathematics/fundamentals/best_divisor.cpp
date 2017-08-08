//Best Divisor
//Author : Roland Hartanto

#include <bits/stdc++.h>

using namespace std;

int sumOfDigit(int n){
    int sum = 0;
    while(n > 0){
        sum += (n%10);
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int best = 1;
    for(int i=1;i<sqrt(n);i++){

        if(n%i == 0){
            int localBest;
            if(sumOfDigit(i) >= sumOfDigit(n/i)){
                localBest = i;
            }else if(sumOfDigit(i) < sumOfDigit(n/i)){
                localBest = (n/i);
            }
            best = (sumOfDigit(localBest) > sumOfDigit(best))? localBest:((sumOfDigit(localBest) == sumOfDigit(best))&&(localBest<best))?localBest:best;
        }
    }
    cout << best << endl;
    return 0;
}
