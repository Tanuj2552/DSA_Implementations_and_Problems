#include <iostream>
using namespace std;

class Stack{
  public:
    int arr[1000];
    int top;

  Stack(){
    top = -1;
  }

  void push(int k){
    top++;
    arr[top] = k;
  }

  int pop(){
    if(top==-1){cout << "Empty Stack" << endl;}
    int a = arr[top];
    top--;
    return a;
  }

  int up(){
    return arr[top];
  }

  void print(){
    for(int i=0; i<=top; i++){
      cout <<"Elements are: " << endl;
      cout << arr[i] << endl;
    }
  }

};

int main(){
  Stack s;
  s.push(2);
  s.push(3);
  int k = s.pop(); cout << k << endl;
  k = s.up(); cout << k << endl;
  s.print();

}
