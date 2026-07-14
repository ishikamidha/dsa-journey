// Problem: Remove Duplicates from Sorted Array (LeetCode 26)

/*
  My Notes:
  - Brute: Put everything in a Set. Since sets only keep unique elements, we can just copy 
    them back to the array. Works, but takes O(N log N) time and O(N) extra space.
  
  - Optimal (Below): Two-pointer approach (i and j). 
    Since the array is sorted, duplicates are always adjacent.
    1. 'i' tracks the position of the last-known unique element.
    2. 'j' is our explorer. It runs ahead looking for a number different from nums[i].
    3. When we find a new number, we increment 'i' and copy the new value there.
    This modifies the array in-place.

  - Complexity:
    Time: O(N) (single loop scan)
    Space: O(1) (zero extra memory used)
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
       for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
       }
       return i+1; 
    }
};