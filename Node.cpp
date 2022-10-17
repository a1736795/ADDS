#include<string>
#include "Node.h"

using namespace std;

node::node(int data)
{
    this->data=data;
    next= NULL;
}

void node::setData(int data)
{
    this->data=data;
}

void node::setNext(node *next)
{
    this->next=next;
}

int node::getData()
{
    return data;
}
