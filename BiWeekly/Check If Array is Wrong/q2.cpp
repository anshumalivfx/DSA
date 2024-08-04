#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
6930. Check if Array is Good
You are given an integer array nums. We consider an array good if it is a permutation of an array base[n].

base[n] = [1, 2, ..., n - 1, n, n] (in other words, it is an array of length n + 1 which contains 1 to n - 1 exactly once, plus two occurrences of n). For example, base[1] = [1, 1] and base[3] = [1, 2, 3, 3].

Return true if the given array is good, otherwise return false.

Note: A permutation of integers represents an arrangement of these numbers.

Example 1:

Input: nums = [1, 3, 3, 2]
Output: true
Explanation: Since the maximum element of the array is 3, the only candidate n for which this array could be a permutation of base[n], is n = 3. It can be seen that nums is a permutation of base[3] = [1, 2, 3, 3] (by swapping the second and fourth elements in nums, we reach base[3]). Therefore, the answer is true.
Example 3:

Input:
[3, 4, 4, 1, 2, 1]
Output:
false

Input:
[2, 1, 3]
Output:
false

Constraints:

1 <= nums.length <= 100
1 <= num[i] <= 200
*/
class Solution {
public:
    bool isGood(vector<int>& nums) {
        
    }
    

};

int main() {
    Solution s;
    vector<int> nums = {2, 1, 3};
    cout << s.isGood(nums) << endl;
    return 0;
}


