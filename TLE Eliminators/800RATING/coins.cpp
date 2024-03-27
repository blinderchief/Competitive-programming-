#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long int n, k; 
        cin >> n >> k;
        int y = 0;
        bool res = false;
        while (true) {
            long long int x = n - (k * y);
            if (x < 0) break; 
            if (x % 2 == 0) {
                res = true;
                break;
            }
            if(y>9) break;
            y++;
        }
        if (res) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
