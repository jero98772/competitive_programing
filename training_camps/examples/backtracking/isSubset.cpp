#include <iostream>
#include <vector>

using namespace std;

bool isSubsetSum(vector<int>& set, int n, int sum) {
    // Base Cases
    if (sum == 0) {
        return true;
    }
    if (n == 0 && sum != 0) {
        return false;
    }

    // If last element is greater than sum, ignore it
    if (set[n - 1] > sum) {
        return isSubsetSum(set, n - 1, sum);
    }

    // Check if sum can be obtained by including or excluding the last element
    return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}

int main() {
    vector<int> set = {3, 34, 4, 12, 5, 2,3};
    int sum = 9;
    int n = set.size();

    if (isSubsetSum(set, n, sum)) {
        cout << "Found a subset with given sum" << endl;
    } else {
        cout << "No subset with given sum" << endl;
    }

    return 0;
}
