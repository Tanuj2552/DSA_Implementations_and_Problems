/ { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void QueueStack :: push(int x)
{
     q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
      if(q1.empty()){return -1;}
      int a;
      int len = 0;
      while(!q1.empty()){
           a = q1.front();
          q1.pop();
          q2.push(a);
          len++;
      }
      int b = a;
      int i = 0;
      while(!q2.empty()){
          if(i==len-1){break;}
          a = q2.front();
          q2.pop();
          q1.push(a);
          i++;
      }
      q2.pop();
      return b;
}
