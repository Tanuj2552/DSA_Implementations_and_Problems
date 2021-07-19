using namespace std;

int main() {
	//code
	int n;
	cin >> n;
	for (int j=0;j<n;j++){
	    int x,y,z;
	    cin >> x >> y >> z ;
	    int a =0, b=0;
	    for(int k =z;k>1;k--){
	        if(x%k==0){a++;x--;k++;}
	        if(y%k==0){b++;y--;k++;}
	    }
	    cout << a << " " << b << endl;
	    
	}
	
	return 0;
}
