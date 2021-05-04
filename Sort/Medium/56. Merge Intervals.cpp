
Question Link:https://leetcode.com/problems/merge-intervals/


Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
  
  
  
  
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
            
            sort(a.begin(),a.end());
            int n=a.size();
            vector<vector<int>> ans;
            vector<int> t;
            if(n==0) return a;
           ans.push_back(a[0]);
            for(int i=1;i<n;i++)
            {
                   if(ans.back()[1]<a[i][0] || ans.empty())
                   {
                          //  vector<int> t;
                         //  t.push_back(a[i][0]);
                         //  t.push_back(a[i][1]);
                           ans.push_back(a[i]);
                   }
                    else
                    {
                         ans.back()[1] = max(ans.back()[1],a[i][1]);   
                    }
            }    
                 
            
            return ans;
        
    }
};
