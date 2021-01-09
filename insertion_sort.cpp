#include <iostream>
using namespace std;

void insertion_sort(int n,int *arr){
  int k,c;
  for(int i = 0; i < n-1; i++) { c = arr[i]; k = i;
    for(int j = i+1; j < n; j++) {
      if(c > arr[j]) {
        c = arr[j];
        k = j;
      }
    }
    int temp = arr[i];
    arr[i] = c;
    arr[k] = temp;
  }
  cout << "the sorted array is " << endl;
  for(int i = 0; i < n; i++){
    cout << arr[i] << endl ;
  }
  return;
}


int main(){
  int n;
  cout << "enter the number of elements" << endl;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout << "enter it" << endl;
    cin >> arr[i] ;
  }
  insertion_sort(n,arr);
}
