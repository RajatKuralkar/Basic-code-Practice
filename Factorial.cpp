#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Input
    int N;
    cin >> N;

    // Output
    int result = factorial(N);
    cout << result << endl;

    return 0;
}
