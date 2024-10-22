#include <iostream>
using namespace std;
void canChefScore(int T) {
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        
        if (Y % X == 0 && Y / X <= N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int T;
    cin >> T;
    canChefScore(T);
    return 0;
}

