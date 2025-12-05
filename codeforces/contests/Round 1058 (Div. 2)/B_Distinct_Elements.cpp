#include <iostream>
#include <vector>

using namespace std;
int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i ++){
        int n;
        cin >> n;
        vector<int> b(n);
        vector<int> a(n);
        for (int j = 0; j < n; j++){
            cin >> b[j];
        }
        // pattern: 1, 3, 6, 10, 15, 21
        // if pattern off of offset by 1, a[j-1] += 1
        // if pattern off of offset by 2, a[j-1] += 1, a[j] += 1
        int offset = 0;
        int expected = 3;
        a[0] = 1;
        for (int j = 1; j < n; j ++){
            int diff = expected - b[j] + offset;
            offset += diff-offset;
            a[j] = j+1;
            //cout << b[j] << " " << expected << " " << diff << " " << offset << "\n";
            if (diff == 1){
                a[j] += n-j;
                //cout << "hi";
            }
            else if (diff == 2){
                a[j-1] -= n-j;
                a[j] -= n-j+1;
            }
            expected += j + 2;
        }

        for (int j = 0; j < n; j ++){
            cout << a[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}