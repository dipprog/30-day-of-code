#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
		    
    // Declare second integer, double, and String variables.
    int integer;
    double rational;
    string str;
    
    // Read and save an integer, double, and String to your variables.
    cin>>integer;
    cin>>rational;
    getline(cin>>ws,str);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<< i + integer <<endl;
    
    // Print the sum of the double variables on a new line.
    cout<<fixed<<setprecision(1)<< d + rational <<endl;
    
    // Concatenate and print the String variables on a new line
    cout<< s + str;
    // The 's' variable above should be printed first.
		    
		return 0;
}
