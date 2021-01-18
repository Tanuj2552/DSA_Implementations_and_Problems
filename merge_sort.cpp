#include <iostream>
using namespace std;

void print(int* ar,int j,int n){
    cout << "the array is " ;
    for(int i=j;i<n;i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int l, int r, int n1){
    cout << "l is " << l << " r is " << r << " n1 is " << n1 << endl;
    int a = 0, b = 0;
    int arr1[n1-l],arr2[r-n1];
    for(int i=0;i<n1-l;i++){
        arr1[i] = arr[i+l];
    }
    for(int j=0;j<r-n1;j++){
        arr2[j] = arr[j+n1];
    }
    cout << "arr1 is ";
    print(arr1,0,n1-l);

    cout << "arr2 is ";
    print(arr2,0,r-n1);

    while (true){
        if(arr1[a] < arr2[b]){
            arr[l] = arr1[a];
            l++;
            a++;
        }
        else if(arr2[b] <= arr1[a]){
            arr[l] = arr2[b];
            l++;
            b++;
        }
        if((a == n1-l)||(b == r-n1)){
            break;
        }
        cout << "a is " << a << " b is " << b << endl;
    }

    for(int i = a;i<n1-l;i++){
        arr[l] = arr1[i];
        l++;
    }

    for(int i = b;i<r-n1;i++){
        arr[l] = arr2[i];
        l++;
    }


    
}

void merge_sort(int arr[],int i, int n){
    if(n-i==1){
        return ;
    }
    else if(n-i==2){
        if(arr[i] > arr[i+1]){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
        return;
    }

    merge_sort(arr,i,(i+n)/2);
    print(arr,i,(n+i)/2);

    merge_sort(arr,(i+n)/2,n);
    print(arr,(n+i)/2,n);
    
    merge(arr,i,n,(n+i)/2);
    print(arr,i,n);
    cout << "done once " << endl;
    
}

int main(){
    int n ;
    cout << "Enter the number of elements in the array " << endl;
    cin >> n;

    int* arr;

    int arr2[n];
    for(int i=0;i<n;i++){
        cout << "enter it " << endl;
        cin >> arr2[i];
    }

    arr = arr2;
    print(arr,0,n);
    merge_sort(arr,0,n);
    //cout << arr[0] << " " << arr[1];
    print(arr,0,n);
}
