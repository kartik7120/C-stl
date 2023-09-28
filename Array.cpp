#include<iostream>
#include<array>
using namespace std;

int main()
{
    int arr[]={1,2,3};

    array<int,4> arr2={1,2,3,4};

    int size=arr2.size();

    for(int i=0;i<size;i++)
    {
        cout<<arr2[i]<<" ";
    }

    cout<<"Element at 2nd index ="<<arr2.at(2)<<'\n';

    cout<<"Empty or not ="<<arr2.empty()<<'\n';

    cout<<"First element = "<<arr2.front()<<'\n';
    
    cout<<"Last element = "<<arr2.back()<<'\n';
    return 0;
}