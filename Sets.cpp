#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // All the elements are in a sorted order
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    // In a set if there are multiple elements then that element is only printed once
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << '\n';

    set<int>::iterator it;

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Element present or not " << s.count(-5) << '\n'; // checks if the element if present

    // find element checks if the element is present or not and if it present then t returns it's iterator

    it = s.find(5);

    cout << (*it) << '\n';
    return 0;
}