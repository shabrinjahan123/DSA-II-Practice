#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> cnt(m + 1, 0); // basket count

    double mid = (m + 1) / 2.0;

    for(int ball = 1; ball <= n; ball++) {

        int best = -1;

        for(int i = 1; i <= m; i++) {
            if(best == -1) {
                best = i;
            }
            else {
                if(cnt[i] < cnt[best]) {
                    best = i;
                }
                else if(cnt[i] == cnt[best]) {
                    double d1 = abs(mid - i);
                    double d2 = abs(mid - best);

                    if(d1 < d2) {
                        best = i;
                    }
                    else if(d1 == d2 && i < best) {
                        best = i;
                    }
                }
            }
        }

        cout << best << "\n";
        cnt[best]++;
    }

    return 0;
}
