#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

void moveNegetive(int arr[],int size)
{
    int j = size - 1;
    
    while(arr[j] < 0)
        j--;
    
    for(int i = 0; i < j; i++)
    {
        if(arr[i] < 0)
        {
            swap(&arr[i],&arr[j]);
            j--;
        }
            
    }
}

void printArray(int arr[],int size)
{
    for(int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,4,3,-1,-5,7,9,-2,4,1,-99};
    int size = sizeof(arr) / sizeof(arr[0]);
    moveNegetive(arr,size);
    printArray(arr,size);
    return 0;
}