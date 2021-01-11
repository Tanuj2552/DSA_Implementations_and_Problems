#include <iostream>
using namespace std;

// This is the naive approach for sorting an array
void bubble_sort(int n,int *arr){
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(arr[i] > arr[j]){
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }

    cout << "the sorted array is " << endl;
    for(int i=0;i<n;i++){
      cout << arr[i] << endl ;
    }
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
  bubble_sort(n,arr);
}
