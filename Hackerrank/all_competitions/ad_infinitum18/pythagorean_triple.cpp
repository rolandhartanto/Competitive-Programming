//Pythagorean Triple
//Author : Roland Hartanto

#include <bits/stdc++.h>

using namespace std;

vector < long long > pythagoreanTriple(long long a){
    long long b, c;
    vector<long long> result;
    if(a%2 == 0){
        b = (a*a/4) + 1;
        c = b-2;
    }else{
        b = (a*a + 1)/2;
        c = (a*a - 1)/2;
    }
    result.push_back(a);
    result.push_back(b);
    result.push_back(c);
    return result;
}

int main() {
    long long a;
    cin >> a;
    vector < long long > triple = pythagoreanTriple(a);
    for (ssize_t i = 0; i < triple.size(); i++) {
        cout << triple[i] << (i != triple.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
