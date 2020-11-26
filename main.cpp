#include <iostream>

using namespace std;
const int sizee=100;
class Queue
{
    int font,rear,countt,arr[sizee];
public:
    Queue()
    {
        font=0;
        rear=sizee-1;
        countt=0;
    }
    bool isEmpty()
    {
        return countt==0;
    }
    bool isFull()
    {
        return countt==sizee;
    }
    void enqueue(int element)
    {
        if(isFull())
            cout<<"Queue is Full"<<endl;
        else
        {
            rear=(rear+1)%sizee;
            arr[rear]=element;
            countt++;
        }
    }
    int dequeue()
    {
        if(isEmpty())
            cout<<"Queue is empty"<<endl;
        else
        {
            int first=arr[font];
            font=(font+1)%sizee;
            countt--;
            return first;

        }
    }
    int FrontQueue()
    {
        if(isEmpty())
            cout<<"Empty Queue"<<endl;
        else
            return arr[font];
    }
    int rearQueue()
    {
        if(isEmpty())
            cout<<"Empty Queue"<<endl;
        else
            return arr[rear];
    }
    void display()
    {
        for(int i=font;i!=(rear+1);i=(i+1)%sizee)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    bool searchh(int element)
    {
        for(int i=font;i!=(rear+1);i=(i+1)%sizee)
        {
            if(arr[i]==element)
            {
                cout<<i<<endl;
                return true;
            }
        }
          return false;
    }
};

int main()
{
   Queue q1;
   q1.enqueue(20);
   q1.enqueue(50);
   q1.enqueue(70);
   q1.enqueue(80);
   q1.enqueue(90);
   cout<<q1.dequeue()<<endl;

   q1.display();
   cout<<q1.searchh(1800);
    return 0;
}
