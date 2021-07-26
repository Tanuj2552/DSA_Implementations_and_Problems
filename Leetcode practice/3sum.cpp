class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        unordered_map <int,int> s;
        
        int n = nums.size();
        for(int i=0;i<n;i++){s[nums[i]] = i;}
        
        for(int i=0;i<n-2;i++){
            
            for(int j=i+1;j<n-1;j++){
                
                if( s[-(nums[i] + nums[j])] > j ){
                    ans.push_back({nums[i],nums[j],-(nums[i]+nums[j])});
                }
                
                j = s[nums[j]];
            }
            
            i = s[nums[i]];
        }
        
        return ans;
        
    }
};
