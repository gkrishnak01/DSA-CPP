// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1

#include<iostream>

using namespace std;

int findGap(int n)
{
    if(n == 1)
        return 0;
    return n/2 + n% 2;
}

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

void merge(int arr1[],int size1,int arr2[],int size2,int gap)
{   
    int i,j;
    for(gap; gap > 0; gap = findGap(gap))
    {

        for(i = 0; i < size1 - gap; i++)
        {
            if(arr1[i] > arr1[i + gap])
            {
                swap(&arr1[i],&arr1[i + gap]);
            }
        }

        for(j = gap -  (size1 - i); i < size1 &&j < size2; i++,j++)
        { 
            if(arr1[i] > arr2[j])
            {   
                swap(&arr1[i],&arr2[j]);
            }
        }

        
        for(j = 0;j < size2 - gap; j++)
        {   
            if(arr2[j] > arr2[j + gap])
            {   
                swap(&arr2[j],&arr2[j + gap]);
            }
        }

    }
}



int main()
{
    int arr1[] = {7, 9, 9, 10, 11, 11, 13, 14, 17, 19};
    int arr2[] = {1, 1, 4, 5, 8, 11, 13, 16, 19, 19};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr1,size1,arr2,size2,findGap(size1 + size2));
    printArray(arr1,size1);
    printArray(arr2,size2);
    return 0;
}
