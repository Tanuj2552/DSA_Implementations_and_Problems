#include <iostream>
using namespace std;

class Queue{
  public:
    int arr[1000];
    int top,rear,len;

  Queue(){
    top = -1;
    rear = -1;
    len = -1;
  }

  void enque(int x){
    if(len == -1){ top++;}
    rear ++;
    arr[rear] = x;
    len ++;
  }

  void deque(){
    if(len==-1){cout << "Not possible as lenght of queue = 0" << endl; return;}
    top ++;
    len --;
  }

  int lens(){
    cout << "the length of queue is " << len+1 << endl;
    return len+1;
  }

  int front(){
    if(len==-1){cout << "empty queue " << endl; return NULL;}
    cout << "the front element of the queue is " << arr[rear] << endl;
    return arr[rear];
  }

  void print(){
    if(len==-1){cout << "empty queue " << endl; return;}
    cout << "the left element is the first element of the queue" << endl;
    for(int i=top;i<=rear;i++){
      cout << arr[i] << endl;
    }
  }
};

int main(){
  int n;
  cout << "enter the number of elements of Queue" << endl;
  cin >> n;
  Queue q;
  for(int i=0;i<n;i++){
    cout << "enter it" << endl;
    int k;
    cin >> k ;
    q.enque(k);
  }
  q.front();
  q.print();
  q.lens();
  q.deque();
  q.print();
  q.lens();
  q.deque();
  q.deque();
  q.deque();
  q.deque();
  q.print();
  q.lens();
  q.deque();
}
