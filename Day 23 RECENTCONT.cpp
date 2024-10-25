#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int N; 
        cin >> N;
        
        vector<string> contests(N);
        int countStart38 = 0, countLtime108 = 0;
        
        
        for (int i = 0; i < N; i++) {
            cin >> contests[i];
            if (contests[i] == "START38") {
                countStart38++;
            } else if (contests[i] == "LTIME108") {
                countLtime108++;
            }
        }
        
 
        cout << countStart38 << " " << countLtime108 << endl;
    }
    
    return 0;
}
