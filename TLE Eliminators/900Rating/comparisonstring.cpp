#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 2, check = 2;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i - 1]) check = 2;
            else check++;
            res= max(res, check);
        }
        cout << res << endl;
    }    
}
