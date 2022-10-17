#include "node.h"
#include <limits>

class list
{
private:
    node *head;
public:
    list();
    list(int A[],int size);
    ~list();
    bool isEmpty();
    void addFront(int data);
    void addEnd(int data);
    int search(int item);
    void deleteFront();
    void deleteEnd();
    void addAtPosition(int position,int newItem);
    void deletePosition(int position);
    int getItem(int position);
    void printItems();

};
