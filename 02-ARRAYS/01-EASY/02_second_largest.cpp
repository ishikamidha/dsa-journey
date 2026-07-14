// Problem: Second Largest Element in an Array

/*
  My Notes:
  - Brute Force: Sort the array in ascending order. Start from the second-to-last element 
    and go backward until we find a number smaller than the largest (to handle duplicates).
    Time Complexity: O(N log N) (due to sorting)
    Space Complexity: O(1)

  - Better Approach: Do two separate passes. 
    1. First pass: Find the largest element.
    2. Second pass: Find the largest element that is strictly smaller than the first largest.
    Time Complexity: O(2N) (but we have to loop through the array twice)
    Space Complexity: O(1)

  - Optimal Approach (Below): Single-pass. Keep track of 'largest' and 'secondLargest' at the same time.
    As we loop, if we find a number bigger than 'largest', the old 'largest' becomes our 'secondLargest'.
    If it's not bigger than 'largest' but bigger than 'secondLargest', we just update 'secondLargest'.
    Time Complexity: O(N) (only one loop)
    Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest=nums[0];
        int s_largest=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                s_largest=largest;
                largest=nums[i];
            }
            else if(nums[i]<largest && nums[i]>s_largest){
                s_largest=nums[i];
            }
        }
        return s_largest;
      
    }
};