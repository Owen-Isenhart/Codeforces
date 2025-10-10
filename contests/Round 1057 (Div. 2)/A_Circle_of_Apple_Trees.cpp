#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main(){
    int t; 
    cin >> t;
    vector<int> res(t);
    for (int i = 0; i < t; i ++){
        int n;
        cin >> n;
        vector<int> b(n);
        for (int j = 0; j < n; j ++)
            cin >> b[j];
        
        set<int> unique(b.begin(), b.end());
        res[i] = unique.size();
    }

    for (int r : res)
        cout << r << "\n";
    return 0;
}