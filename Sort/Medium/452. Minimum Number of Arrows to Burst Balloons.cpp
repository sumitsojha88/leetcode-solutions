


Question Link: https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

Solution:

class Solution {
public:
        static bool compare(vector<int> &b,vector<int> &c)
        {
                return b[1]<c[1];
        }
    int findMinArrowShots(vector<vector<int>>& a) {
            
            sort(a.begin(),a.end(),compare);
            
            
            int p=0;
            int ans=0;
            for(int i=1;i<a.size();i++)
            {
                    if(a[p][1]>=a[i][0])
                    {
                            ans++;
                    }
                    else
                    {
                            p = i;
                    }
            }
            
            return a.size()-ans;
        
    }
};
