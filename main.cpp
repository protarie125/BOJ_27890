#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll x, n;
	cin >> x >> n;

	while (0 < (n--)) {
		if (0 == x % 2) {
			x = (x / 2) ^ 6;
		}
		else {
			x = (2 * x) ^ 6;
		}
	}

	cout << x;

	return 0;
}