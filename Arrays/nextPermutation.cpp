#include<iostream>

using namespace std;

int swap(int *a,int *b)
{
    int temp = *a;
    *a  = *b;
    *b = temp;
}

void printArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rev(int arr[],int i,int j)
{
    while(i < j)
    {
        swap(&arr[i],&arr[j]);
        i++; j--;
    }
}


void nextPermutation(int arr[],int size)
{
    int i = size -1;
    
    while(i > 0 && arr[i] <= arr[i - 1]) 
        i--;
    --i;
    
    int j = size -1;
    if(i >= 0)
    {
        while(j > 0 && arr[j] <= arr[i]) j--; 
    }
    swap(&arr[i],&arr[j]);
    rev(arr,i + 1,size -1);
}

int main()
{
    int arr[] = {1,2,3};
    int size = 3;
    nextPermutation(arr,size);
    printArray(arr,size);
    return 0;
}