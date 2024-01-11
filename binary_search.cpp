#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid= start + (end - start)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else 
        {
            end = mid - 1;
            
        }

        mid= start + (end - start)/2;

    }

    return -1;
}

int main()
{

    int abc[8]={1,2,3,4,5,22,27,28};

    int abcIndex = BinarySearch(abc, 8, 22);
    cout<<abcIndex;


return 0;
}