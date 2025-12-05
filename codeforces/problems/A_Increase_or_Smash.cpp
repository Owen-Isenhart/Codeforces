#include <iostream>
#include <vector>
#include <set>

int main(){
    int t;
    std::cin >> t;
    std::vector<int> res;

    for (int i = 0; i < t; i ++){
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int j = 0; j < n; j ++){
            std::cin >> a[j];
        }
        
        std::set<int> uniqueVals(a.begin(), a.end());
        int unique = uniqueVals.size();
        int steps = unique + unique - 1;
        res.push_back(steps);
    }

    for (int r : res){
        std::cout << r << "\n";
    }
    return 0;
}