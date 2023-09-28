#include <iostream>
#include <map>
using namespace std;
//map is data structure in which that value is stored along it's key and each key in it unique
int main()
{
    map<int, string> m;

    m[1] = "babber";
    m[2] = "love";
    m[3] = "kumar"; // here 3 is the key and "kumar" is the value

    for (auto i : m)
    {
        cout << i.first << " " << i.second << '\n'; // prints the key and it is sorted in the map and unordered map it is random and it is not sorted
    }
    cout << endl;
    m.insert({5, "kaartik"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << '\n'; // prints the key and it is sorted in the map and unordered map it is random and it is not sorted
    }
    cout << '\n';
    cout << "before erase" << endl;
    cout << "Finding 5 in the map = " << m.count(5) << '\n';

    cout << "after erase" << endl;
    m.erase(5);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << '\n'; // prints the key and it is sorted in the map and unordered map it is random and it is not sorted
    }
    cout << '\n';

    auto it = m.find(2);

    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<'\n';
    }
    return 0;
}