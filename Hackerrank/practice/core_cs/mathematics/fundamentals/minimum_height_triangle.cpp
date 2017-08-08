//Minimum Height Triangle
//Author : Roland Hartanto

#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    int h = ((2*area)%base==0)? (2*area)/base:(1+((2*area)/base));
    return h;
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
