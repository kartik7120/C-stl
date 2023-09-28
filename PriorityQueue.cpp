#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> maxi; //max heap;

    priority_queue<int, vector<int>, greater<int>> mini; // min heap

    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);
    cout << "Size ->" << maxi.size() << endl;

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(1);
    mini.push(3);
    mini.push(0);
    mini.push(2);

    n = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout<<"Is mini empty = "<<mini.empty()<<'\n';
    return 0;
}