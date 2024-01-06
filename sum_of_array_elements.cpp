#include<iostream>
using namespace std;

int main()
{
    int size;
    int sum=0;
    cin>>size;
    int arr[size];

    for(int i = 0 ; i<size; i++ )
    {
        cin>>arr[i];
    }

    for(int i = 0 ; i<size; i++ )
    {
        sum = sum+arr[i];
    }
        cout<<sum;5





return 0;
}