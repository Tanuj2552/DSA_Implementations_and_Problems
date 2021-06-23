class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set <int> s;
        int n = nums.size();
        if(target%2==0){
            int k1=-1,k2=-1, c=0;
        for(int i=0;i<n;i++) {
            if(nums[i] == target/2){
                if(k1!=-1){
                k2 =  i;}
                else{
                    k1 = i;
                }
                c++;
            }
           
        }  
             if(c>=2){vector<int> ans={k1,k2}; return ans;}
        }
        
        for(int i=0;i<n;i++){s.insert(nums[i]);}
        int c1=-1;
        vector<int> ans ;
        for(int i=0;i<n;i++){
            if((s.find(target - nums[i]) != s.end()) && (nums[i] != target/2)){
                ans.push_back(i);
                c1 = target-nums[i];
                break;
            }
        }
        
        for(int i=0;i<n;i++){
            if(nums[i] == c1){
                ans.push_back(i);
            }
            
            }
        
        return ans;
        
    }
        
        
};
