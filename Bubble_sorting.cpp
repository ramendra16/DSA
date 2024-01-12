#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
} 



int main()
{

    int arr[6]={12, 04, 93, 123, 2, 8};
    cout<<"Before sorting: ";
    printArray(arr, 6);

    bubblesort(arr, 6);

    cout<<"After sorting: ";
    printArray(arr, 6);
    

return 0;
}