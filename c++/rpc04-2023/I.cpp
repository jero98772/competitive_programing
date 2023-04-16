#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<float> gi(n);
    vector<int> c(k);
    vector<int> d(k, 0);
    double ta = 0;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        ta += t;
        gi[i] = max((ta * -0.2), 0.0);
        if (gi[i] == 0) ta = 0;
    }

    for (int i = 0; i < k; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++) {
        int j = lower_bound(c.begin(), c.end(), gi[i]) - c.begin();
        if (j < k) {
            d[j]++;
        }
    }

    for (int i = 0; i < k; i++) {
        cout << d[i] << " ";
    }

    return 0;
}
