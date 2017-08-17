#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    if(N%2 == 0){
        if((N>=2 && N<=5) || (N > 20)){
            cout << "Not Weird" << endl;
        }else{
            cout << "Weird" << endl;    
        }
    }else{
        cout << "Weird" << endl;
    }
    return 0;
}
