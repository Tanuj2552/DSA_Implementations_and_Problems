#include <iostream>
using namespace std;

void binary_search(int n, int* arr, int s ){
int left = 0;
int right = n-1;
int m = (left+right)/2;
int c = 0;

if((arr[0]>s)||(arr[n-1]<s)){cout << "not there" << endl; return;}
while((m!=left)||(m!=right)){
  if(arr[m] < s){
    left = m+1;
    m = (left+right)/2;
  }
  else if(arr[m] > s){
    right = m-1;
    m = (left+right)/2;
  }
  else{
    c=1;
    break;
  }
}
  if(c==1){cout << "found" << endl;return;}
  else{cout << "not there" << endl;return;}
}

int main(){
  int n;
  cout << "Enter the number of elements of the sorted array " << endl;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout << "enter it" << endl;
    cin >> arr[i];
  }
  int s;
  cout << "Enter the number to be searched " << endl;
  cin >> s;
  binary_search(n,arr,s);
  return 0;
}
