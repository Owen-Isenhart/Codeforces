#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> res(t);
    for (int i = 0; i < t; i ++){
        int n, k;
        cin >> n >> k;
        if (n % k != 0){
            res[i] = 0;
            continue;
        }
        vector<int> a(n);
        for (int j = 0; j < n; j ++){
            cin >> a[j];
        }
        
    }
    for (int r : res)
        cout << r << "\n";
    return 0;
}