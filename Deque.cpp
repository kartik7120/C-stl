#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    //for(int i:d)
    //{
    //    cout<<i<<" ";
    //}
//
    //d.pop_back();
//
    //for(int i:d)
    //{
    //    cout<<i<<" ";
    //}
//
    //d.pop_front();
//
    //for(int i:d)
    //{
    //    cout<<i<<" ";
    //}

    cout<<"Print first index ->"<<d.at(1)<<'\n';

    cout<<"Element at front = "<<d.front()<<'\n';

    cout<<"Element at back = "<<d.back()<<'\n';

    cout<<"Is deque empty = "<<d.empty()<<'\n';

    cout<<"Size of deque before  = "<<d.size()<<'\n';

    d.erase(d.begin(),d.begin()+1);

    cout<<"Size of deque before  = "<<d.size()<<'\n';

    return 0;
}