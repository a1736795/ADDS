#include<iostream>
#include<limits>
#include<string>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

bool list::isEmpty()
{
    return head==NULL;
}

void list::addFront(int data)
{
    node *temp;
    node *N=new node(data);
    N->setNext(head);
    head=N;
}

void list::addEnd(int data)
{
    if(isEmpty())
    {
        addFront(data);
        return;
    }
    node *temp;
    node *N=new node(data);
    N->setNext(NULL);
    for(temp=head;temp->getNext()!=NULL;temp=temp->getNext())
    {
        ;
    }
    temp->setNext(N);
}

int list::search(int item)
{
    int index=1;
    for(node *temp=head;temp!=NULL;temp=temp->getNext())
    {
        if(item==temp->getData())
        {
            cout<<index<<" ";
            return index;
        }
    index++;
    }
    cout<<"0 ";
    return 0;
}

void list::deleteFront()
{
    if(isEmpty())
    return;
    node *temp=head;
    head=temp->getNext();
    delete(temp);
}

void list::deleteEnd()
{
    if(isEmpty())
    return;
    if(head->getNext()==NULL)
    {
        delete(head);
        head=NULL;
        return;
    }
    node *temp;
    for(temp=head;temp->getNext()->getNext()!=NULL;temp=temp->getNext())
    {
        ;
    }
    delete(temp->getNext());
    temp->setNext(NULL);
}

void list::addAtPosition(int position, int newItem)
{
    if(position<1 || position==1)
    {
        addFront(newItem);
        return;
    }
    node *temp;
    node *N=new node(newItem);
    int p=1;
    for(temp=head;temp!=NULL;temp=temp->getNext())
    {
        if((p+1)==position)
        {
            N->setNext(temp->getNext());
            temp->setNext(N);
            return;
        }
        p++;
    }
    addEnd(newItem);
}

void list::deletePosition(int position)
{
    if(isEmpty())
    return;
    if(position<1)
    {
        cout<<"outside range";
        return;
    }
    if(position==1)
    {
        node *temp=head;
        head=head->getNext();
        delete(temp);
        return;
    }

    int p=1;
    for(node *temp=head;temp!=NULL;temp=temp->getNext())
    {
        if((p+1)==position)
        {
            node *t=temp->getNext();
            if(t==NULL)
            {
                cout<<"outside range";
                return;
            }
            temp->setNext(t->getNext());
            delete(t);
            return;
        }
        p++;
    }
    cout<<"outside range";
}

int list::getItem(int position)
{
    int p=1;
    for(node *temp=head;temp!=NULL;temp=temp->getNext())
    {
        if(p==position)
        {
            cout<<temp->getData()<<" ";
            return temp->getData();
        }
        p++;
    }
    cout<<numeric_limits < int >::max()<<" ";
    return numeric_limits < int >::max();
}

void list::printItems()
{
    for(node *temp=head;temp!=NULL;temp=temp->getNext())
    {
        cout<<temp->getData()<<" ";
    }    
}