#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, g;
    
    cin >> k;
    
    if (k == 1) {
        g = 15;
    }
    
    if (k == 2) {
        g = 24;
    }
    
    if (k >= 3) {
        g = 24 + (k - 2) * 4;
    }
    
    if (k > 18) {
        g = 24 + 16 * 4 + (k - 18) * 3;
    }
    cout << g << endl;
    
    return 0;
}