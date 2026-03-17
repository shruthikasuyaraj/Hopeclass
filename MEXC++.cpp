#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long mex = 0;
        for (int i = 0; i < n; i++) {
            if (i > 0 && a[i] == a[i - 1]) continue; // skip duplicates
            if (a[i] <= mex) {
                mex++;
            } else {
                break;
            }
        }

        cout << mex << "\n";
    }
    return 0;
}
