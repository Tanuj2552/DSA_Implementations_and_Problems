#include <iostream>
 
using namespace std;
 
int main()
{   int m;
    cin >> m;
    for (int i =0;i<m;i++) {
        int n;
        cin >> n;
        int arr[n];
 
        for (int j=0;j<n;j++){
            cin >> arr[j];
        }
 
        if(arr[0] + arr[1] > arr[n-1]){
            cout << -1 << endl;
        }
        else{
            cout << 1 << " " << 2 << " " << n << endl;
        }
    }
    return 0;
}
