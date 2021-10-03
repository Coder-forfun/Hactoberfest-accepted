#include <bits/stdc++.h>
using namespace std;
#include "input restricted deque.h"

// Driver program to test above
int main()
{
    int flag;
    cout<<"enter 1 for input restricted deque"<<endl;
    cout<<"enter 0 for output restricted deque"<<endl;
    cin>>flag;
    switch(flag){
        case  0: {

            inputResDeque<int> dq;
            cout << "Insert element '5' at front \n";
            dq.insertFront(5);
        
            cout << "Insert element '10' at front\n";
            dq.insertFront(10);
        
            cout << "Rear end element: "
                << dq.getRear() << endl;
        
            dq.deleteRear();
            cout << "After deleting rear element new rear"
                << " is: " << dq.getRear() << endl;
        
            cout << "Inserting element '15' at front end \n";
            dq.insertFront(15);
        
            cout << "Front end element: "
                << dq.getFront() << endl;
        
            cout << "Number of elements in Deque: "
                << dq.size() << endl;
        
            dq.deleteFront();
            cout << "After deleting front element new "
                << "front is: " << dq.getFront() << endl;
            break;
        }
        case  1: {

            outputResDeque<int> dq;
            cout << "Insert element '5' at front \n";
            dq.insertFront(5);
        
            cout << "Insert element '10' at front\n";
            dq.insertRear(10);
        
            cout << "Rear end element: "
                << dq.getRear() << endl;
        
            cout << "Inserting element '15' at front end \n";
            dq.insertFront(15);
        
            cout << "Front end element: "
                << dq.getFront() << endl;
        
            cout << "Number of elements in Deque: "
                << dq.size() << endl;
        
            dq.deleteFront();
            cout << "After deleting front element new "
                << "front is: " << dq.getFront() << endl;
            break;
        }
    }
	
}
