#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Love");
    s.push("Babber");
    s.push("Kumar");
    cout<<s.top()<<'\n';
    s.pop();
    cout<<s.top()<<'\n';

    cout<<s.size()<<'\n';

    cout<<"Empty or not = "<<s.empty()<<'\n';
    return 0;
}