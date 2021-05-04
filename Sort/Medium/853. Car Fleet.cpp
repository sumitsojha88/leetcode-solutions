



Question Link: https://leetcode.com/problems/car-fleet/

Solution: 

class Solution {
public:
    int carFleet(int target, vector<int>& p, vector<int>& s) {
        
          
            int n=p.size();
            
            if(n<=1)
                    return n;
              vector<pair<int,double>> t(n);
            for(int i=0;i<p.size();i++)
            {
                    double tt = ((double)target-(double)p[i])/(double)s[i];
                    t[i] = make_pair(p[i],tt);
            }
            
            sort(t.begin(),t.end());
            
            pair<int,double> pr=t[n-1];
            int ans=n;
            for(int i=n-2;i>=0;i--)
            {
                  if(t[i].second<=pr.second)
                  {
                          ans--;
                  }
                    else
                    {
                            pr = t[i];
                    }
            }
            
            
            return ans;
    }
};
