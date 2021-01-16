#include<iostream>
#include<climits>

using namespace std;

int maxSubArray(int arr[],int size)
{
    int maxTillNow = INT_MIN;
    int maxNow = 0;

   for(int i = 0; i < size; i++)
    {
        maxNow += arr[i];

        if(maxNow > maxTillNow)
            maxTillNow = maxNow;

        if(maxNow < 0) // if its a first neg no its already in maxtillnow, adding any more neg will only reduce the value.
            maxNow = 0;
    }

    return maxTillNow;

}

int main()
{
    int arr[] = {-2, -3, -4, -1, -2, -1, -5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    maxSubArray(arr,size);
    return 0;

}