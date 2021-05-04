
Question Link: https://leetcode.com/problems/sort-colors/

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
Example 3:

Input: nums = [0]
Output: [0]
Example 4:

Input: nums = [1]
Output: [1]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is 0, 1, or 2.
  
  
  Solution:



  class Solution {
public:
    void sortColors(vector<int>& nums) {
            
            
            int i=0;
            int mid=0;
            int end=nums.size()-1;
            while(mid<=end)
            {
                    switch(nums[mid])
                    {
                            case 0: 
                               swap(nums[mid++],nums[i++]);
                                    break;
                            case 1:
                                    mid++;
                                    break;
                            case 2:
                                    swap(nums[mid],nums[end--]);
                                    break;
                    }
            }
            
            
          //  return nums;
            
        
    }
};
