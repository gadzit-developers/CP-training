#include <bits/stdc++.h>

#define vin vector<int>

// Valid answer gives 0.63s
// it uses square root Decomposition
// for more info read https://cp-algorithms.com/data_structures/sqrt_decomposition.html
using namespace std;

void addel(vin &arr, vin &arrs, int a, int sqn)
{
  if (!arr[a])
  {
    arr[a] = 1;
    arrs[a / sqn]++;
  }
  else
  {
    arr[a] = 0;
    arrs[a / sqn]--;
  }
}

void querry(vin &arr, vin &arrs, int l, int h, int sqn)
{
  int ans = 0;
  while (l <= h)
  {
    if (l % sqn == 0 && (l + sqn) <= h)
    {
      ans += arrs[l / sqn];
      l += sqn;
    }
    else
    {
      ans += arr[l];
      l++;
    }
  }
  cout << ans << endl;
}

int main()
{
  freopen("input.in", "r", stdin);
  int n, q;
  char c;
  cin >> n >> q;
  // structure construction
  int sqn = ceil(n / sqrt(n));
  n = sqn * sqn;
  vin arr(n, 0);
  vin arrs(sqrt(n), 0);
  while (q--)
  {
    cin >> c;
    if (c == 'F')
    {
      int a;
      cin >> a;
      addel(arr, arrs, a - 1, sqn);
    }
    else
    {
      int l, h;
      cin >> l >> h;
      querry(arr, arrs, l - 1, h - 1, sqn);
    }
  }

  return 0;
}