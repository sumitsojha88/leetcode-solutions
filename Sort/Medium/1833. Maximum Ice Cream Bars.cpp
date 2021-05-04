


Question Link: https://leetcode.com/problems/maximum-ice-cream-bars/

Solution: 


class Solution {
public:
    int maxIceCream(vector<int>& a, int coins) {
            
            sort(a.begin(),a.end());
            int sum=0;
            int n=a.size();
           if(a[0]>coins) return 0;
            for(int i=0;i<n-1;i++)
            {
                     sum += a[i];
                    if(sum>=coins || sum+a[i+1]>coins)
                    {
                            return i+1;
                    }
            }
            
            return n;
        
    }
};
