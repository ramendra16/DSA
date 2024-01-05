#include<iostream>
using namespace std;

int main()
{
    

    int arr[8]={2,1,4,3,6,5,7,8};
    for(int i = 0; i<8; i+=2)
    {
        if(i+1<8)
        {
            swap(arr[i], arr[i+1]);
            cout<<arr[i+1]<<arr[i];
        }
    }

   
    



return 0;
}