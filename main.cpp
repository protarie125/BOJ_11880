#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll T;
ll a, b, c;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> T;
  while (0 < (T--)) {
    cin >> a >> b >> c;

    auto ans = (a + b) * (a + b) + c * c;
    ans = min(ans, (a + c) * (a + c) + b * b);
    ans = min(ans, (b + c) * (b + c) + a * a);

    cout << ans << '\n';
  }

  return 0;
}