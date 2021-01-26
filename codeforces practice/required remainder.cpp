#include <iostream>
using namespace std;
 
int main(){
    int  n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long a,b,c;
        cin >> a >> b >> c;
        int k = c/a;
        int l = a*k + b;
        if(l<=c){cout << l << endl;}
        else {cout << l-a << endl;}
 
    }
}
