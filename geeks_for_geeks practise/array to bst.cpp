#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

vector<int> preorder(vector<int> &ans, vector<int> &v, int l, int h){
    if(l>=h){return ans;}
    int mid = (l+h)/2;
    if((h-l)%2==0){mid--;}
    ans.push_back(v[mid]);
    ans = preorder(ans, v, l, mid);
    ans = preorder(ans, v, mid+1, h);
    return ans;
    
}

class Solution{
public:
    vector<int> sortedArrayToBST(vector<int> &nums) {
        
        vector<int> ans;
        int l = nums.size(); 
       // cout << l << endl;
        //for(int i = 0; i <l ;i ++){cout << nums[i] << " ";}cout << endl;
        ans = preorder(ans,  nums, 0, l);
        //for(int i = 0; i <l ;i ++){cout << ans[i] << " ";}cout << endl;
        
        return ans;
    }

};



// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
