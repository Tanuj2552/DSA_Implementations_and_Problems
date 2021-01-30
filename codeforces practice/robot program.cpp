#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if (a==b){cout << a+b << endl;}
        else{
        int m;
        if(a>b){m = a-b;}
        else{m = b-a;}
        cout << a+b+m-1 << endl;}
    }
}
