// Problem: Check if Array Is Sorted and Rotated (LeetCode 1752)

/*
  My Notes:
  - Key Idea: If a sorted array is rotated, it basically gets cut into two sorted halves.
    This means if we check it circularly (connecting the end back to the start), there can 
    be at most ONE "drop" where an element is greater than the next one.
  
  - Implementation:
    1. Loop through the array comparing nums[i] to the next element.
    2. Use '% n' (modulo) to safely loop the last element back to index 0 without crashing.
    3. Count the drops. If drops <= 1, it's valid. If drops >= 2, it's unsorted.

  - Complexity:
    Time: O(N) (one pass is all we need)
    Space: O(1) (in-place check)
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                count++;
            }
        }
        return count<=1;
    }
};