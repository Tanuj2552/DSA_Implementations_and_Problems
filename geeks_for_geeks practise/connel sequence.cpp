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
	    int i = 1;
	    int l = 1;
	    int nl = 1;
	    int call = 0;
	    while(true){
	       int j,c;
	       for(j = i,c=0; c < l;c++,j+=2){
	           cout << j << " ";
	           if(nl == n){call = -1;break;}
	           nl++;
	       }
	       if(call == -1){cout << endl;break;}
	       i = j-1;
	       l++;
	    }
	}
	return 0;
}



