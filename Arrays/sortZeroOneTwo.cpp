// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

#include<iostream>

using namespace std;


void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[], int size)
{
    int i =0 ;
    int j = size -1;
    int n = size;
    
    while(arr[i] == 0)
    {
        i++;
    }
            
        
    while(arr[j] == 2)
    {
        j--;
    }

    for(int k = i; k <= j;k++)
    {
        if(arr[k] == 0)
        {
            swap(&arr[i],&arr[k]);
            i++;
        }
        else if(arr[k] == 2)
        {
            swap(&arr[k],&arr[j]);
            j--;
            k--;
        } 
         
    }
}


int main()
{
    int arr[] = {0,1,2,1,0,1,2,1,0,2,1,0,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,size);
    printArray(arr,size);
    return 0;
}