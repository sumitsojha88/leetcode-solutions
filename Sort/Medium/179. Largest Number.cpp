

Question Link: https://leetcode.com/problems/largest-number/

Solution: 

class Solution {
public:
        static bool compare(int &n,int &m)
        {
                return (to_string(n)+to_string(m)) > (to_string(m)+to_string(n));
        }
    string largestNumber(vector<int>& nums) {
            
            vector<string> s;
            int n=nums.size();
        //    for(int i=0;i<nums.size();i++)
        //    {
       //             s.push_back(to_string(nums[i]));
     //       }
            
            
          //  if (s[0] == 0) return "0";
           
            sort(nums.begin(),nums.end(),compare);
            
           
           
           string res="";
         string ans ="";
        for(int i=0;i<n;i++)
            ans+= to_string(nums[i]);
            
            
            
            if (ans[0] =='0') return "0";
            
            
        return  ans;
    }
};
