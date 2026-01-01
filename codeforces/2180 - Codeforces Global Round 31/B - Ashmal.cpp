#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int t;
    std::cin>>t;
    while (t--){
        int n;
        std::cin>>n;
        std::vector<std::string> s(n);
        for (int i=0;i<n;i++){
            std::cin>>s[i];
        }
        std::string result;
        for (int i=0;i<n;i++){
            result = std::min(result + s[i], s[i] + result);
        }
        std::cout<<result<<"\n";
    }
    return 0;
}
