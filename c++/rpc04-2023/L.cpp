//acepted
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double x;
    double s = 0.0;
    double tolerance = 1e-6; // set tolerance to 10^-6
    std::cin >> t;
    
    while (t--) {
        std::cin >> x;
        s += x * x * x;
    }

    double expected_result = cbrt(s);
    double calculated_result = round(expected_result / tolerance) * tolerance; // round to nearest multiple of tolerance
    long double absolute_error = abs(calculated_result - expected_result);
    
    cout << fixed << setprecision(6) << calculated_result ; // output with 6 decimal places
    
    
    return 0;
}
