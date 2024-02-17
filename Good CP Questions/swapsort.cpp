#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  int n, count = 0;
  cin >> n;
  vector<ll> v(n);
  vector<pair<ll,ll>> res;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (v[j]< v[min_index])
      {
        min_index = j;
      }
    }
      if (min_index != i)
      {
        swap(v[i], v[min_index]);
        count++;
        res.push_back({i, min_index});
      }
    }
  if (count == 0)
  {
    cout << 0;
  }
  else
  {
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
      cout << res[i].first << " " << res[i].second << endl;
    }
  }
  }
  
