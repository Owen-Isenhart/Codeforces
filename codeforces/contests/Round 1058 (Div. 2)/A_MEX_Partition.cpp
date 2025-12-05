#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> res(t);
    for (int i = 0; i < t; i ++){
        int n;
        cin >> n;
        vector<int> a(102, 0);
        for (int j = 0; j < n; j ++){
            int temp;
            cin >> temp;
            a[temp] += 1;
        }
        for (int j = 0; j < 102; j ++){
            if (a[j] == 0){
                res[i] = j;
                break;
            }
            else if (a[j] == 1){
                res[i] = j+1;
                break;
            }
            
        }
        
    }

    for (int r : res){
        cout << r << "\n";
    }
    return 0;
}