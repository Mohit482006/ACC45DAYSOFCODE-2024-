#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int H, X, Y; 
        cin >> H >> X >> Y;
        int health_after_special = H - Y;
        int attacks_with_special = 1; 
        if (health_after_special > 0) {
            attacks_with_special += (health_after_special + X - 1) / X; 
        }

        
        int attacks_without_special = (H + X - 1) / X; 

        
        cout << min(attacks_with_special, attacks_without_special) << endl;
    }

    return 0;
}