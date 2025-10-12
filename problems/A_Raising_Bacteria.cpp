#include <iostream>

int main(){
    int x;
    std::cin >> x;
    int ans = 0;
    while (x > 0){
        if (x & 1)
            ans ++;
        x >>= 1;
    }
    std::cout << ans;
    return 0;
}