#include<iostream>
#include<list>
using namespace std;

//This container made with the help of doubly linked list
//Linked List
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(int i:l)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    //cout<<"Size of before erase = "<<'\n';
    l.erase(l.begin());
    cout<<"List after erase = ";

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<'\n';

    cout<<"Size of list = "<<l.size()<<'\n';

    //copy elments of the list

    list<int> m(5,100);

    for(int i:m)
    {
        cout<<i<<" ";
    }
    return 0;
}