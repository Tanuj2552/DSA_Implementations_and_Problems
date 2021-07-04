using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    if(n==1){cout << 0 << endl; continue;}
	    int i=2;
	    while (true){
	        if(i==n){cout << i << endl; break;}
	        if(i>n){cout << i/2 << endl; break;}
	        i *= 2;
	    }
	}
	return 0;
}
