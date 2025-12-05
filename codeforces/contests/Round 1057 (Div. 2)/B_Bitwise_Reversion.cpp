#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> res;
    string yes = "YES";
    string no = "NO";
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        bool ok = true;

        for (int i = 0; i < 31; i++) {
            int xi = (x >> i) & 1;
            int yi = (y >> i) & 1;
            int zi = (z >> i) & 1;

            if (!(
                (!xi && !yi && !zi)||
                (!xi && yi && !zi) ||
                (!xi && !yi && zi) ||
                (xi && !yi && !zi )||
                (xi && yi && zi)
            )) {
                ok = false;
                break;
            }
        }
        if (ok)
            res.push_back(yes);
        else
            res.push_back(no);

    }

    for (string r : res)
        cout << r << "\n";
    return 0;
}