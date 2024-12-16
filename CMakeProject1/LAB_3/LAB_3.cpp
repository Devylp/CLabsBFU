#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, i;
    cin >> n >> i;
    
    if (i < 0)
        cout << "i is negative, enter a positive i.";
    
    else {
        if (0 < n && n < pow(10, 9))
            cout << ((n >> (i - 1)) & 1);
    
        else 
            cout << "Error, number out of range (0, 10^9)" << endl;
    }
}