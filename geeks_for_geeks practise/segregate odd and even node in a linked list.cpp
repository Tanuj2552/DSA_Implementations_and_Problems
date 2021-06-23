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
	    int arr1[n],arr[n],e = 0,o = 0;
	    for(int i=0;i<n;i++){
	        int t;
	        cin >> t;
	        if(t%2==0){arr[e] = t;e++;}
	        else{arr1[o] = t;o++;}
	    }
	    
	    for(int i = 0;i<e;i++){cout << arr[i] << " ";}
	    for(int i = 0;i<o;i++){cout << arr1[i] << " ";}
	    cout << endl;
	}
	return 0;
}
