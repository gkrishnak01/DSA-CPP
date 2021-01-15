// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

#include<iostream> 
#include<climits> 

using namespace std;

int jumps(int arr[],int size)
{
    int jumps = 0;
    int i = 0;

    while(i < size - 1)
    {   
        if(arr[i] == 0) return INT_MAX;
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