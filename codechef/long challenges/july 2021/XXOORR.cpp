#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define mid(l, h) (l + h / 2)
#define loop(i, a, b) for (int i = a; i <= b; ++i)
#define looprev(i, a, b) for (int i = a; i >= b; --i)
#define mod(a) (a % 100'000'007)
#define endl '\n'

void file_i_o() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

void solve() {
  // input
  int n, k;
  cin >> n >> k;
  vi v(n);
  loop(i, 0, n - 1) cin >> v[i];

  vi bits(32, 0);
  loop(j, 0, 31) {
    int i = pow(2, j);
    for (int num : v)
      if (num & i) bits[j]++;
  }
  int ans = 0;
  for (int b : bits) {
    ans += ceil((float)b / k);
  }

  cout << ans << endl;
}

int32_t main() {
  clock_t start = clock();
  file_i_o();
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
#ifndef ONLINE_JUDGE
  clock_t end = clock();
  cout << "\n\nExecuted in: " << (double)(end - start) / double(CLOCKS_PER_SEC)
       << " sec";
#endif
  return 0;
}
