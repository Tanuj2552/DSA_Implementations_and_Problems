#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
 
    int n,x;
    cin >> n >> x;
    if(n<=2){
        cout << 1 << endl;
    }
    else{
        n -= 2;
        if(n%x == 0){
            cout << n/x +1 << endl;
        }
        else{
        int k = (int)n/x;
        cout << k+2 << endl;
        }
    }
 
 
    }
    return 0;
}
