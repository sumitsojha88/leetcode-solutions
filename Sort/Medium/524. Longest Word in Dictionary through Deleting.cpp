

Question Link: https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/

Solution: 


class Solution {
public:
        static bool check(string &a,string &b)
        {
                int i=0;
                int k=0;
                int n=b.size();
                int j=a.size();
                int count=0;
                while(i<n && k<j)
                {
                   if(b[i]==a[k])
                   {
                           i++;
                   }
                            k++;
                
                }
                
                
                if(i==n)
                        return true;
                else
                        return false;
        }
    string findLongestWord(string s, vector<string>& d) {
            
         //  sort(d.begin(),d.end());
            int n=d.size();
            string ans="";
            for(int i=n-1;i>=0;i--)
            {
                    if(check(s,d[i]))
                    {
                            if(ans.size()<d[i].size() || ans.size()==d[i].size() && d[i]<ans)
                            ans = d[i];
                        //    break;
                    }
            }
            
            return ans;
        
    }
};
