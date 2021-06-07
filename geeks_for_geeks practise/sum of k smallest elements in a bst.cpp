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
	int t; cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    set <int> s;
	    int temp;
	    for(int i=0;i<n;i++){cin >> temp; s.insert(temp);}
	    int k; cin >> k;
	    int ans = 0;
	    for(int i=0;i<k;i++){int te = *s.begin(); ans += te; s.erase(te);}
	    cout << ans << endl;
	}
	return 0;
}
