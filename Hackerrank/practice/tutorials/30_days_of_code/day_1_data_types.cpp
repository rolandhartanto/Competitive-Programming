#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	
    // Declare second integer, double, and String variables.
    int input;
    double input2;
    double sum = 0.0;
    string input3;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> input;
    cin >> input2;
    sum = d + input2;
    cin.get();
    getline(cin, input3);

    // Print the sum of both integer variables on a new line.
    cout << input + i << endl;
    
    // Print the sum of the double variables on a new line.
    cout << setprecision(1) << fixed << sum << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + input3 << endl;
	
    return 0;
}