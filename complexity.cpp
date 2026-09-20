#include <iostream>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;

    // 1. Linear: O(n + m)
    for(int i = 1; i < n; i++) {
        cout << i << " ";
    }
    for(int i = 1; i < m; i++) {
        cout << i << " ";
    }

    // 2. Nested (Rectangular): O(n * m)
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            cout << j << " ";
        }
    }

    // 3. Nested (Square if n == m): O(n^2)
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            cout << j << " ";
        }
    }
    
    // 4. Logarithmic: O(log n)
    for(int i = n; i > 0; i /= 2) {
        cout << i << " ";
    }

    return 0;
}