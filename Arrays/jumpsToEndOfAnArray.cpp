#include<iostream>  

using namespace std;

int jumps(int arr[],int size)
{
    int jumps = 0;
    int i = 0;

    while(i < size - 1)
    {   
        jumps++;
        i += arr[i];
    }
    return jumps;
}

int main()
{
    int arr[] = {1,4,3,2,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<jumps(arr,size);
    return 0;
}