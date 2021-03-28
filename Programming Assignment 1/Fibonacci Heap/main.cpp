#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "fibonacciheap.cpp"
using namespace std;

int main()
{
    int m, l;
    FibonacciHeap<int> fh;
    while (true) {
        cout << "1 Insert          ";
        cout << "2 Extract Min" << endl;
        cout << "3 Decrease key    ";
        cout << "4 Delete" << endl;
        cout << "5 Display Heap    ";
        cout << "6 Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> l;
        switch(l) {
        case 1:
            cout << "Enter the element to be inserted: ";
            cin >> m;
            fh.Insert(m);
            break;
        case 2:
            fh.Extract_Min();
            break;
        case 3:
            cout << "Enter the key to be decreased: ";
            cin >> m;
            cout << "Enter new key value: ";
            cin >> l;
            fh.Decrease_key(m, l);
            break;
        case 4:
            cout << "Enter the key to be deleted: ";
            cin >> m;
            fh.Delete_key(m);
            break;
        case 5:
            cout << "The Heap is: "<<endl;
            fh.Display();
            break;
        case 6:
            exit(1);
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}