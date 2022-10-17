#ifndef NODE_H
#define NODE_H
using namespace std;

class node
{
private:
    int data;
    node *next;
public:
    node(int data);
    void setData(int data);
    void setNext(node *next);
    int getData();
    node * getNext()
    {
        return next;
    }

};
#endif