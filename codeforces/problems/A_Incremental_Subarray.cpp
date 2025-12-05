#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    // first line is num test cases (t)
    
    // for each test case, first line has m and n
    // m is max number written, n is length of the array
    // second line has n numbers to find subarrays for
    int t;
    std::cin >> t;
    std::vector<int> res;
    for (int i = 0; i < t; i ++){
        int m, n;
        std::cin >> m >> n;
        std::vector<int> a(n);
        bool single = false;

        for (int j = 0; j < n; j ++){
            std::cin >> a[j];
        }

        for (int j = 1; j < n; j ++){
            if (a[j-1] >= a[j]){
                single = true;
                break;
            }
        }
        
        if (single){
            res.push_back(1);
            continue;
        }

        // m - max(a) + 1
        int r = a.back();
        res.push_back(m - r + 1);
    }

    for (int r : res)
            std::cout << r << "\n";

    return 0;
}