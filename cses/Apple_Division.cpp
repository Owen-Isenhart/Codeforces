#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dfs(ll left, ll right, int index, vector<ll> apples){
    if (index == apples.size()){
        return abs(left - right);
    }
    return min(dfs(left + apples[index], right, index + 1, apples), dfs(left, right + apples[index], index + 1, apples));

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> apples(n);
    for (int i = 0; i < n; i ++){
        cin >> apples[i];
    }

    // how can we find minimum difference
    // piles don't have to have equal number of apples
    // think a good place to start would be sorting, then adding each apple on opposite ends to same pile and removing them from list
    // this works for something like 1, 2, 3, 4 (each pile has 5)
    // but not something like 1, 2, 3, 100
    // for that, we would want 1, 2, 3 in the same pile
    // so maybe we start with the initial moves, then check if difference is greater than any apples in the greater pile, and if so move them over

    // nevermind that doesn't work
    // instead, we do dfs and return the minimum difference
    ll res = dfs(0, 0, 0, apples);
    cout << res;
    
    return 0;
}