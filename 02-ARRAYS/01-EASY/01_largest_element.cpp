// Problem: Largest Element in an Array

/*
  My Notes:
  - Brute Force: Sort the entire array in ascending order, then return the very last element.
    It works, but sorting is overkill just to find one number.
    Time Complexity: O(N log N) 
    Space Complexity: O(1)

  - Optimal (Below): Maintain a 'largest' tracker. Initialize it with the first element,
    loop through the array once, and update 'largest' whenever we find a larger number.
    Time Complexity: O(N) (we only scan the array once)
    Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
       int largest= nums[0];
       for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
       }
       return largest;
    }
};