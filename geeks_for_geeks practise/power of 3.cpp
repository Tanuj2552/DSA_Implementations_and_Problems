#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int contint(char s){
    stringstream ss;
    ss <<s;
    int x;
    ss >>x;
    return x;
}

int main()
 {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int ans=0;
	    while(n >= 1){
	        n /= 3;
	        ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}
