#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Love");

    q.push("babber");
    q.push("Kumar");

    cout << "First element  = " << q.front() << '\n';
    q.pop();
    cout << "Second element = " << q.front() << '\n';

    cout << "Size after pop =" << q.size() << '\n';
    return 0;
}