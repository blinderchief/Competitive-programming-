#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v(n, 1); 

        if (x != 1) {
            cout << "YES" << '\n';
            cout << n << '\n';
            for (int i = 0; i < n; i++) {
                cout << v[i] << ' ';
            }
            cout << '\n';
        } else {
            if (k == 1 || (k == 2 && x == 1 && n % 2 == 1))
                cout << "NO" << '\n';
            else {
                if (n % 2 == 0) {
                    cout << "YES\n";
                    cout << n / 2 << "\n";
                    for (ll i = 0; i < (n / 2); i++) {
                        cout << "2 " << ' ';
                    }
                    cout << "\n";
                } else {
                    ll tot = (n / 2);
                    cout << "YES\n";
                    cout << tot << "\n";

                    for (ll i = 0; i < (n / 2 - 1); i++)
                        cout << "2 ";

                    cout << "3 ";
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}
