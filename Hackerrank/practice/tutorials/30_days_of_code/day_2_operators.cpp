#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    double cost, tip, tax;
    cin >> cost;
    cin >> tip;
    cin >> tax;
    
    double ans = cost * (1.0 + tip/100 + tax/100);
    cout << "The total meal cost is " << setprecision(0) << fixed << ans << " dollars." << endl;
    return 0;
}
