// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    ll l = q.size();
    ll arr[l];
    queue<ll> qq;
    for(ll i=0;i<k;i++){
        arr[k-i-1] = q.front();
        q.pop();
    }
    for(ll i=k;i<l;i++){
        arr[i] = q.front();
        q.pop();
    }
    for(ll i=0;i<l;i++){
        qq.push(arr[i]);
    }
    //add code here.
    return qq;
}
