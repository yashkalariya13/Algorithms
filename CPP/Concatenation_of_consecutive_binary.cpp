
/*Approach:

Iterate through the numbers from 1 to n and add the binary representation of each number to the answer.
ans = ans<<(number of bits in the binary representation of the current number) + binary representation of the current number.*/



#include<iostream>

using namespace std;
typedef long long ll;
class Solution {
public:
    int concatenatedBinary(int n) {
         const unsigned int m = 1000000007;
        
    ll res = 1,sum=0;
        for(ll j=2;j<=n;j++){
            ll i=j,c=0;
            while(i){
                c++;
                i= i >> 1;
                
            }res = ((res << c)+j) %m;
           
        }
        return res;
        
    }
};
int main() {
    Solution S;
    int n;
    std::cout << "Enter value n" << std::endl;
    std::cin >> n;
    std::cout << S.concatenatedBinary(n) << std::endl;
}
