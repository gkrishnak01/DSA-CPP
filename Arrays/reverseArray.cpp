#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[],int size)
{
    int i = 0, j = size - 1;
    while(i < j)
    {
        swap(arr[i],arr[j]);
        i++;j--;
    }

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
    int arr[] = {23,56,12,67,23,78};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr,size);
    printArray(arr,size);
    return 0;
}