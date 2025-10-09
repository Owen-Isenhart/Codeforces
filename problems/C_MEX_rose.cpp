#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


int main(){
    int t;
    std::cin >> t;
    std::vector<int> res;
    for (int i = 0; i < t; i ++){
        int n, k;
        std::cin >> n >> k;
        std::vector<int> a;
        int kTotal = 0;
        for (int j = 0; j < n; j ++){
            int temp;
            std::cin >> temp;
            if (temp < k)
                a.push_back(temp);
            if (temp == k)
                kTotal ++;
        }
        std::set<int> uniqueVals(a.begin(), a.end());
        int unique = uniqueVals.size();
        int invUnique = (k) - unique;
        res.push_back(std::max(invUnique, kTotal));
    }

    for (int r : res)
        std::cout << r << "\n";

    return 0;
}