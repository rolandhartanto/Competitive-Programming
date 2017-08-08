//Fibonacci Finding (easy)
//Author : Roland Hartanto

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//2x2 matrix
typedef struct{
    ll el[2][2];
}matrix;

#define nMod 1000000007

matrix matrix_multiply(matrix a, matrix b){
    matrix result;
    result.el[0][0] = 0;
    result.el[0][1] = 0;
    result.el[1][0] = 0;
    result.el[1][1] = 0;
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                result.el[i][j] = (result.el[i][j] + (a.el[i][k] * b.el[k][j]) % nMod) % nMod; 
            }
        }
    }
    return result;
}

matrix matrix_power(matrix a, int n){
    if(n == 0){
        matrix specResult;
        specResult.el[0][0] = a.el[0][1];
        specResult.el[0][1] = a.el[1][1];
        specResult.el[1][0] = a.el[1][1];
        specResult.el[1][1] = a.el[0][1] - a.el[1][1];
        return specResult;
    }else if(n == 1){
        return a;
    }else{
        matrix b = matrix_power(a,n/2);
        matrix result = matrix_multiply(b,b);
        if(n%2 == 1){
            result = matrix_multiply(result,a);
        }
        return result;
    }
}

int main() {
    int tc;
    ll A, B, N;
    cin >> tc;
    
    while(tc--){
        matrix M;
        M.el[0][0] = 1;
        M.el[0][1] = 1;
        M.el[1][0] = 1;
        M.el[1][1] = 0;

        cin >> A >> B >> N;
        M = matrix_power(M,N);
        cout << ((M.el[0][1]*B + M.el[1][1]*A) % nMod) << endl;
    }
    return 0;
}
