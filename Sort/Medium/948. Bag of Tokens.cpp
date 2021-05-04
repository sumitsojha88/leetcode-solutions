


Question Link: https://leetcode.com/problems/bag-of-tokens/

Solution: 

class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int P) {
            
            sort(t.begin(),t.end());
            int n=t.size();
            int i=0;
            if(n<1) return 0;
            int j=n-1;
            
            
            if(t[0]>P)
                    return 0;
            
            int ans=0;
            while(i<=j)
            {
                 if(t[i]<=P)
                 {
                         P -= t[i];
                         i++;
                         ans++;
                 }
                    else
                    {
                            if(ans>0 && i!=j)
                            {
                                    P += t[j];
                                    j--;
                                    ans--;
                            }
                            else
                            {
                                    break;
                            }
                    }
            }
            
            
            return ans;
        
    }
};
