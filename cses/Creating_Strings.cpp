#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll factorial(int n){
    ll total = 1;
    for (int i = 1; i <= n; i ++){
        total *= i;
    }
    return total;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    sort(s.begin(), s.end());

    // need to find all combinations for the string
    // feel like it should just be nCr but that math doesn't seem to work

    // the trouble is coming from dealing with duplicate letters
    // nCr would work without duplicates

    // yea im an idiot and mixed up nCr with nPr

    // n! / each character's freq

    ll total = 1;
    map<char, int> freqs;

    for (int i = 1; i <= s.size(); i ++){
        total *= i;
        freqs[s[i-1]] = freqs[s[i-1]] + 1;
    }
    
    for (const auto& pair : freqs){
        total /= factorial(pair.second);
    }

    cout << total << endl;

    // std library the goat
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    return 0;
}