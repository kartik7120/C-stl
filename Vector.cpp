#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1); // a vector of size 5 with all elements 1

    for (auto i : a)
    {
        cout << i << " ";
    }

    cout << "Capacity ->" << v.capacity() << '\n'; // for amount of memory allocated

    v.push_back(1);
    cout << "Capacity ->" << v.capacity() << '\n';

    v.push_back(2);

    cout << "Capacity ->" << v.capacity() << '\n';
    v.push_back(3);
    cout << "Capacity ->" << v.capacity() << '\n';
    cout << "Size ->" << v.size() << '\n';

    cout << "Element at 2nd index = " << v.at(2) << '\n';

    cout << "Front element ->" << v.front() << '\n';
    cout << "back Element ->" << v.back() << '\n';

    v.pop_back();

    //Before clear we should that when we clear a vector then the size will be reduced to zero but the memeory allocated to it will NOT be removed

    cout << "Before clear size = " << v.size() << '\n';

    v.clear();
    cout << "After clear size =" << v.size() << '\n';

    // If we want to copy the elements of a vector to another vector

    vector<int> v3(a); //all elements of the vector of a are compied in v3

    
    return 0;
}