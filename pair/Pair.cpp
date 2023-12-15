#include<iostream>
using namespace std;

int main()
{
    cout<<"Simple Pair Example 1"<<endl;
    pair<int, int> p = {1,3};
    
    cout<<p.first<<" "<<p.second<<endl;

    cout<<"Nested Pair Example 2"<<endl;

    pair<int, pair<int, int> >a = {1, {2,3}};

    cout<<a.first<<" "<<a.second.first<<" "<<a.second.second<<endl;

    cout<<"Storing Array in pair Example 3"<<endl;

    pair<int ,  int> arr[] = { {1,2}, {3,4}, {5,6}};
    int n = sizeof(arr)/sizeof(arr[0]);
     for(int i =0;i<n;i++ )
     {
         cout<<arr[i].first<<" "<<arr[i].second<<endl;
     }
}