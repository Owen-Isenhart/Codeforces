#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;

constexpr int MOD = 1e9 + 7;
constexpr ll INF = 1e18;

#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back
#define mp make_pair
#define sz(x) (int)(x).size()

bool abundant(int n){
    vi divisors;
    for (int i = 1; i < n; i ++){
        if (n % i == 0) divisors.pb(i);
    }
    ll sum = 0;
    for (auto i : divisors)
        sum += i;
    if (sum > n) return true;
    return false;
}

void solve() {
    vi nums;
    for (int i = 0; i < 28123; i ++){
        if (abundant(i))
            nums.pb(i);
    }
    unsigned long long sum = 28124*28123/2;
    vector<bool> subtracted(28124, false);

    for (int i = 0; i < nums.size(); i ++){
        for (int j = i; j < nums.size(); j ++){
            if (nums[i]+nums[j] <= 28123 && !subtracted[nums[i]+nums[j]]){
                subtracted[nums[i]+nums[j]] = true;
                sum -= (nums[i]+nums[j]);
            }
            
        }
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; 
    //cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}