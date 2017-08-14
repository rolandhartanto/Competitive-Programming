#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    if((s[8]=='P')&&(s[9]=='M')){
        if((s[0]=='1')&&(s[1]=='2')){
            return s.substr(0,8);
        }else{
            int hour = (10*(s[0]-'0') + (s[1]-'0') + 12)%24;
            return to_string(hour/10) + to_string(hour%10) + s.substr(2,6);
        }
    }else{
        if((s[0]=='1')&&(s[1]=='2')){
            return to_string(0) + to_string(0) + s.substr(2,6);
        }else{
            return s.substr(0,8);
        }
    }
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}