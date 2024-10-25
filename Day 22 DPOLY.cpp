#include <iostream>
#include <vector>
using namespace std;

// Function to find the degree of the polynomial
int polynomial_degree(const vector<int>& coefficients) {
    int degree = coefficients.size() - 1;
    // Find the last index with a non-zero coefficient
    while (degree >= 0 && coefficients[degree] == 0) {
        degree--;
    }
    return degree;
}

int main() {
    int T;
   
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> coefficients(N);

        // Reading coefficients of the polynomial
        for (int i = 0; i < N; ++i) {
            cin >> coefficients[i];
        }

        // Calculating the degree of the polynomial
        int degree = polynomial_degree(coefficients);
        cout << degree << endl;
    }

    return 0;
}

