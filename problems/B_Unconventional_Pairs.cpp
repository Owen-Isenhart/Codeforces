#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int t;
    std::cin >> t;
    std::vector<size_t> res;

    for (int i = 0; i < t; i ++){
        int n;
        std::cin >> n;
        std::vector<int> a(n);

        for (int j = 0; j < n; j ++){
            std::cin >> a[j];
        }

        std::sort(a.begin(), a.end());
        size_t max = 0;
        for (int j = 0; j < n-1; j += 2){
            if (abs(a[j] - a[j+1]) > max){
                max = abs(a[j]-a[j+1]);
            }
        }
        res.push_back(max);
    }
    for (int r : res)
        std::cout << r << "\n";

    return 0;
}