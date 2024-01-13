#include<iostream>
using namespace std;

void swapArr(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


void selsort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for(int j = i; j < n; j++)
        {
            if(arr[j] < arr[minIndex] )
            {
                minIndex = j;
            }
        }

        swapArr(arr[i], arr[minIndex]);
    }
}


void printArr(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
    cout<< arr[i]<<" ";
   } cout<<endl;
}


int main()
{
    int arr[6]={12, 31, 42, 2, 16, 9};

    cout<<"Before sorting: ";
    printArr(arr, 6);

    selsort(arr, 6);

    cout<<"After sorting: ";
    printArr(arr, 6);

    return 0;
}