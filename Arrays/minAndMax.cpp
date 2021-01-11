#include<iostream>

using namespace std;

int minAndMax(int arr[],int size,int *min,int *max)
{
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < *min)
            *min = arr[i];
        else if(arr[i] > *max)
            *max = arr[i];
    }
}

int main()
{
    int arr[] = {23,56,12,67,23,78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min,max;
    max = arr[0];
    min = arr[0];
    minAndMax(arr,size,&min,&max);
    cout<<"Max: "<<max<<endl<<"Min: "<<min;
    return 0;
}
