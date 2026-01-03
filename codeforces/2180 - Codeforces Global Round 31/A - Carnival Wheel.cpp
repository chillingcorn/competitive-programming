#include <iostream>
#include <numeric>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t;
    std::cin>>t;
    while (t--){
        int l,a,b;
        std::cin>>l>>a>>b;
        std::cout<<l - std::gcd(l, b) + a % std::gcd(l, b)<<"\n";
    }
    return 0;
}