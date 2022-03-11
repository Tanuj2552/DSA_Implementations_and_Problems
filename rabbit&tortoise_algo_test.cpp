// Some of you may be wondering (like me :} ), why does the Floyd's Algorithm work. And precisely, how does it find the loop in O(n) time, and not more than that.
// So I wrote a simple simulation code to check how many steps does it take to find the loop.
// I created a linked list of length 1000, and created every loop possible in the list and measured the steps taken to find the loop in each case.

#include <iostream>
#include <math.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  Node(){
    next = NULL;
  }
  Node(int x){
      data = x;
      next = NULL;
  }
};


int main(){
  int n = 1000;
  Node* head = new Node(0);
  Node* temp = head; Node* last = NULL;
  int max_dis = 0;
  for(int i=1;i<=n;i++){
      temp->next = new Node(i);
      temp = temp->next;
      last = temp;
  }

  for(int i=0;i<n;i++){
      temp = head;
      int j = i;
      while(j--){
          temp = temp->next;
      }
      last->next = temp;
      Node* slow = head;
      Node* fast = head->next;
      int count = 0;
      while(slow != fast){
          count++;
          slow = slow->next;
          fast = fast->next->next;
      }
      max_dis = max(count, max_dis);
      cout << "for i = " << i << " steps taken is " << count << endl;
      last->next = NULL;
  }

  cout << "Maximum Steps taken to find the loop is " << max_dis;

  return 0;
}

// Intrestingly, the max steps taken to find the loop was only 1000, exactly justifying the O(n) time.
