class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int mindiff = 100000;
        int len = nums.size();
        
        for(int i=0;i<len-2;i++){
            int temsum = nums[i];
            int l = i+1, r = len-1;
            int cursum;
            
            while(l!=r){
                cursum = temsum + nums[l] + nums[r];
                if(mindiff > abs(cursum-target)){mindiff = abs(cursum-target); ans = cursum;}
                if(cursum > target){r--;}
                else{l++;}
            }
        }
        
        return ans;
    }
};
