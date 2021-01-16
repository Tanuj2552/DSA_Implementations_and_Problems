#include <iostream>
using namespace std;
#include <math.h>
#include <iomanip>

int main(){
  int n;
  cin >> n;
  int d;
  for (int i=0;i<n;i++){
    if(pow(i,2) <= n){d=i;
    }
    else{break;}
  }
  double ch = pow(d,2);
  if(ch == n){cout << d << endl;}
  else{
    int nd;
    int temp = n;
    int len = 0;
    while (temp>=1){temp /= 10;len++;}
    double l = 0;
    double r = 1;
    double i = 1;
    while (i>0.001){
        i = i/2;
        if(pow((d+(l+r)),2) < n){l += i;}
        if(pow((d+(l+r)),2) > n){r -= i;}
    }
    cout <<std::setprecision(len+3) <<d+(l+r) << endl;
  }

}
