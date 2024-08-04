import sys
from typing import List
"""
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
"""



class Solution:
    def isGood(self, nums: List[int]) -> bool:
        n = len(nums)
        count = [0] * (n + 1)

        # Count the occurrences of each element in the array
        for num in nums:
            count[num] += 1

        # Check if the maximum element of the array is n and it appears exactly twice
        if count[n] != 2:
            return False

        # Check if the array contains elements from 1 to n-1 and each appears exactly once
        for i in range(1, n):
            if count[i] != 1:
                return False

        return True
    
    
    
    
    

if __name__ == "__main__":
    sol = Solution()

    nums1 = [1, 3, 3, 2]
    print("Output 1:", sol.isGood(nums1))

    nums2 = [3, 4, 4, 1, 2, 1]
    print("Output 2:", sol.isGood(nums2))
        