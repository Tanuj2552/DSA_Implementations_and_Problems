#include <iostream>
using namespace std;
 
int main(){
  int tests;
  cin >> tests;
  while(tests--){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){cin >> arr[i];}
 
    int ff = arr[0];
    int cc = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(ff == arr[i]){
          cc++;}}
 
    if(cc == n){cout << 0 << endl;}
    else{
      int num = (sum+1)/2;
      int yes = 0; int nn;
      for(int i=2;i<=num;i++){
        if(sum%i ==0){
          yes = 0;
          int s = 0;
          nn = 0;
          for (int j=0;j<n;j++){
            s += arr[j];
            if(s == i){
              s = 0;
              nn += 1;
            }
            if(s>i){
              yes = -1;
              break;
            }
          }
        if(yes == -1){continue;}
        else{cout <<n-nn << endl;yes = 1;break;}
      }
      }
      if(yes != 1){
        cout << n-1 << endl;
      }
    }
 
  }
}
