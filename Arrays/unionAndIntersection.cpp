// Find union and intersection of two sorted arrays. 

#include<iostream>

using namespace std;

int findIntersection(int leftArray[],int rightArray[],int leftSize,int rightSize)
{

    int i = 0;
    int j = 0;
    int count = 0;

    while(i < leftSize && j < rightSize)
    {
        while(leftArray[i] == leftArray[i + 1]) i++; // To avoid repeating elements
        while(rightArray[j] == rightArray[j + 1]) j++;

        if(leftArray[i] == rightArray[j])
        {
            cout<<leftArray[i]<<" ";
            i++;
            j++;
            count++;
        }
            
        else if(leftArray[i] < rightArray[j])
            i++;

        else
            j++;
    }

    while(i < leftSize)
    {
        if(leftArray[i] == rightArray[rightSize])
        {
            cout<<leftArray[i]<<" ";
            count++;
        }
            
        i++;   
    }

    while (j < rightSize)
    {
       if(rightArray[j] == leftArray[leftSize])
       {
           cout<<rightArray[j]<<" ";
           count++;
       }
            
        j++;
    }
    return count; 
}

int findUnion(int leftArray[],int rightArray[],int leftSize,int rightSize)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while(i < leftSize && j < rightSize)
    {
        while(leftArray[i] == leftArray[i + 1] && i < leftSize - 1) i++; // To avoid repeating elements
        while(rightArray[j] == rightArray[j + 1] && j < rightSize - 1) j++;

        if(leftArray[i] < rightArray[j])
        {
            cout<<leftArray[i]<<" ";
            count++;
            i++;
        }
            
        else if(leftArray[i] > rightArray[j])
        {
            cout<<rightArray[j]<<" ";
            count++;
            j++;
        }
        else
        {
            cout<<leftArray[i]<<" ";
            count++;
            j++;
            i++;
        }
    }

    while(i < leftSize)
    {
        while(leftArray[i] == leftArray[i + 1] && i < leftSize - 1) i++; // To avoid repeating elements
        cout<<leftArray[i]<<" ";
        i++; 
        count++;  
    }

    while (j < rightSize)
    {
        while(rightArray[j] == rightArray[j + 1] && j < rightSize - 1) j++; // To avoid repeating elements
        cout<<rightArray[j]<<" ";
        j++;
        count++;
    }
    
    return count;
}

int main()
{
    int arr1[] = {4,4,5,7,8};
    int arr2[] = {1,2,3,4,4,5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int unionCount = findUnion(arr1,arr2,size1,size2);
    cout<<endl;
    int intersectionCount = findIntersection(arr1,arr2,size1,size2);
    return 0;
}