#include<iostream>

using namespace std;

void findIntersection(int leftArray[],int rightArray[],int leftSize,int rightSize)
{
    int i = 0;
    int j = 0;

    while(i < leftSize && j < rightSize)
    {
        if(leftArray[i] == rightArray[j])
        {
            cout<<leftArray[i]<<" ";
            i++;
            j++;
        }
            
        else if(leftArray[i] < rightArray[j])
            i++;

        else
            j++;
    }

    while(i < leftSize)
    {
        if(leftArray[i] == rightArray[rightSize])
            cout<<leftArray[i];
        i++;   
    }

    while (j < rightSize)
    {
       if(rightArray[j] == leftArray[leftSize])
            cout<<rightArray[j];
        j++;
    }
    
}

void findUnion(int leftArray[],int rightArray[],int leftSize,int rightSize)
{
    int i = 0;
    int j = 0;

    while(i < leftSize && j < rightSize)
    {
        if(leftArray[i] < rightArray[j])
        {
            cout<<leftArray[i]<<" ";
            i++;
        }
            
        else if(leftArray[i] > rightArray[j])
        {
            cout<<rightArray[j]<<" ";
            j++;
        }
        else
        {
            cout<<leftArray[i]<<" ";
            j++;
            i++;
        }
    }


    while(i < leftSize)
    {
        if(leftArray[i] == rightArray[rightSize])
            cout<<leftArray[i];
        i++;   
    }

    while (j < rightSize)
    {
       if(rightArray[j] == leftArray[leftSize])
            cout<<rightArray[j];
        j++;
    }
    
}

int main()
{
    int arr1[] = {1,12,23,34,55};
    int arr2[] = {1,12,24,55,66,78};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    findUnion(arr1,arr2,size1,size2);
    cout<<endl;
    findIntersection(arr1,arr2,size1,size2);
    return 0;
}