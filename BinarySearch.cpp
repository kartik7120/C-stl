#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    cout << "Finding 6 = " << binary_search(v.begin(), v.end(), 6) << '\n';

    cout << "Lower bound = " << lower_bound(v.begin(), v.end(), 6) - v.begin() << '\n';

    cout << "Upper bound = " << upper_bound(v.begin(), v.end(), 6) - v.begin() << '\n';

    //rotating the vector
    rotate(v.begin(),v.begin()+1,v.end());

    int a=3;
    int b=5;

    for(auto i:v)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    sort(v.begin(),v.end());

    for(auto i:v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}
