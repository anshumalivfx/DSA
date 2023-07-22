#include <iostream>
using namespace std;

class Solution {
public:
// write code that beats 100% of cpp submissions
    bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false; // Numbers ending with 0 are not palindromic (except for 0 itself)
    
    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    
    return x == reversedHalf || x == reversedHalf / 10; // Handle both even and odd number of digits
}

};


int main(int argc, const char** argv) {
    Solution s;
    cout << s.isPalindrome(121) << endl;
    return 0;
}