#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    if (n == 2)
    {
      if (a[0] % 2 == 1 && a[1] % 2 == 1 || a[0] % 2 == 0 && a[1] % 2 == 0)
      {
        cout << "YES" << endl;
      }
      else
        cout << "NO" << endl;
      
    }
    else
    {
      sort(a, a + n);
      int a_mid = (n + 1) / 2;
      int sum1 = 0;
      for (int i = 0; i < a_mid; i++)
      {
        sum1 += a[i];
      }
      int sum2 = 0;
      for(int i =a_mid;i<n;i++){
        sum2 +=a[i];

      }
      if(sum2%2==0 && sum1%2==0 || sum2%2==1 && sum1%2==1){
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
    }
  }
  return 0;
}