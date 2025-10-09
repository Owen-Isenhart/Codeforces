#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int t;
    std::cin >> t;
    std::vector<int> res;

    for (int i = 0; i < t; i ++){
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        int steps = 0;
        for (int j = 0; j < n; j ++){
            std::cin >> a[j];
        }
        std::sort(a.begin(), a.end());
        for (int j = 0; j < n; j ++){
            if (a[j] > 0)
                break;
            if (a[j] < 0 && a[j+1] < 0){
                j ++;
                continue;
            }
            steps += abs(a[j]) + 1;

        }
        res.push_back(steps);
    }

    for (int r : res)
        std::cout << r << "\n";

    return 0;
}