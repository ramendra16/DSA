#include<iostream>
using namespace std;

bool search(int arr[], int size, int element)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i] ==  element)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;

    int arr[size];


    cout<<"Enter elements: ";
    for(int i = 0; i<size; i++)
    {
        
        cin>>arr[i];
    }

    cout<<"Enter the element u want to search: ";
    int element;
    cin>> element;

    bool found= search(arr, size, element);

    if(found)
    {
        cout<<"Element is present";
    }
    else
    {
        cout<<"Element is absent";
    }

return 0;
}