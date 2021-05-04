
Question link: https://leetcode.com/problems/h-index/



Example 1:

Input: citations = [3,0,6,1,5]
Output: 3
Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.
Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.
Example 2:

Input: citations = [1,3,1]
Output: 1
  
  
  Solution:
  
  class Solution {
public:
    int hIndex(vector<int>& a) {
            
            sort(a.begin(),a.end());
            int n=a.size();
            for(int i=0;i<a.size();i++)
            {
                 if(a[i]>=n-i)
                 {
                         return n-i;
                 }
            }
            
            
            return 0;
        
    }
};
