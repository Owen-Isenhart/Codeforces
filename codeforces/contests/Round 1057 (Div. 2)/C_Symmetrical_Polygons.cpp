#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> res;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        map<int, int> a;
        int temp;
        for (int j = 0; j < n; j ++){
            cin >> temp;
            a[temp] += 1;
        }

        int total = 0;
        int maxSingle = 0;
        int secondMaxSingle = 0;
        while (a.size() > 0){
            int length = a.rbegin()->first;
            int freq = a[length];
            
        }
        // think my idea is close but i give up
        res.push_back(total);

    }

    for (int r : res)
        cout << r << "\n";
    return 0;
}