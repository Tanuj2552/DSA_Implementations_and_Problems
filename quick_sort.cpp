#include <iostream>
using namespace std;

void print(int arr[],int j,int n){
    cout << "The elements of the array are :" ;
    for(int i = j;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int partition(int arr[],int l, int r){
    int piv = arr[r];
    int tr = l;

    for(int i=l;i<=r;i++){
        if(arr[i] <= piv){
            int temp = arr[i];
            arr[i] = arr[tr];
            arr[tr] = temp;
            tr++;
        }
    }
    return tr-1;
}  

void quick_sort(int arr[], int l, int r){
    if(l>=r){return;}
    int p = partition(arr, l, r);
    quick_sort(arr,l,p-1);
    quick_sort(arr,p+1,r);
}

int main(){
    int n;
    cout << "Enter the number of elements in the list..??" << endl;
    cin >> n;

    int ar[n];
    for(int i=0;i<n;i++){
        cout << "Enter it: ";
        cin >> ar[i];
    }

    int* arr = ar;
    quick_sort(arr,0,n-1);
    print(arr,0,n);
}
