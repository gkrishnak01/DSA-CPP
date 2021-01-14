// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

#include<iostream>

using namespace std;

void rotate(int arr[],int size)
{
    int temp = arr[size - 1];
    for(int i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr [i];
    }
    arr[0] = temp;
}

void printArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotate(arr,size);
    printArray(arr,size);
    return 0;
}