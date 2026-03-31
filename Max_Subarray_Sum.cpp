#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x;
    long long currentSum = 0;
    long long maxSum = LLONG_MIN;

    for(int i = 0; i < n; i++) {
        cin >> x;

        currentSum = max(x, currentSum + x);
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << endl;

    return 0;
}
