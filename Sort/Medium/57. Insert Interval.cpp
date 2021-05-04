
Question Link:https://leetcode.com/problems/insert-interval/


Example 1:

Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
Output: [[1,5],[6,9]]
Example 2:

Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
Output: [[1,2],[3,10],[12,16]]
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].
Example 3:

Input: intervals = [], newInterval = [5,7]
Output: [[5,7]]
Example 4:

Input: intervals = [[1,5]], newInterval = [2,3]
Output: [[1,5]]
Example 5:

Input: intervals = [[1,5]], newInterval = [2,7]
Output: [[1,7]]
 

Solution:

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        
            sort(a.begin(),a.end());
            vector<vector<int>> ans;
            
            int i=0;
            int s=b[0];
            int e=b[1];
            while(i<a.size() && a[i][1]<b[0])
            {
                    ans.push_back(a[i]);
                    i++;
            }
            
            while(i<a.size() && a[i][0]<=e)
            {
                    s = min(s,a[i][0]);
                    e = max(e,a[i][1]);
                    i++;
                
            }
            
            ans.push_back({s,e});
            
            
            while(i<a.size())
            {
                    ans.push_back(a[i]);
                    i++;
            }
            
            return ans;
                 
            
    }
};
