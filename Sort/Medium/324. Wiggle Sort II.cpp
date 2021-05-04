


Question Link:  https://leetcode.com/problems/wiggle-sort-ii/

Solution: 


class Solution {
public:
    void wiggleSort(vector<int>& nums) {
            
            vector<int> a=nums;
            sort(a.begin(),a.end());
            int n=nums.size();
            int i=1;
            int j=n-1;
           
            int k=1;
            
            int x=n/2;
            int y=n-n/2 ;
            
            while(x--)
            {
                    
                            nums[k] = a[j--];
                    k+=2;
                    
            }
            
            k=0;
            while(y--)
            {
                    nums[k] = a[j--];
                    k += 2;
            }
            
            
            
        
    }
};
