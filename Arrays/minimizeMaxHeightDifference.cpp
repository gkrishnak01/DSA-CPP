#include<iostream>

using namespace std;

int swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = low - 1;
    
    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
            swap(&arr[++i],&arr[j]);
    }
    swap(&arr[++i],&arr[high]);
    return i;
}

void sort(int arr[],int low,int high)
{
    if(low >= high)
        return;
    
    int pi = partition(arr,low,high);
    sort(arr,low,pi - 1);
    sort(arr,pi + 1,high);
}

int minimizeHeightDiff(int arr[],int size,int k)
{
    sort(arr,0,size - 1);

    int min = arr[0] + k;
    int max = arr[size - 1] - k;

    if(min > max) 
        swap(&min,&max);

    for(int i = 0; i < size; i++)
    {
        int add = arr[i] + k;
        int sub = arr[i] - k;
        
        if(add <= max || sub > min) // If add less than max add - min wont give the highest minimum diff and vice verca
            continue;


        if(max - sub < add - min)
            min = sub;
        else
            max = add;
    }

    return (max - min);
}



int main()
{
    int arr[] = {1, 5, 15, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout<<minimizeHeightDiff(arr,size,3);
    return 0;
}