#include<iostream>
#include<climits>

using namespace std;

int stock(int arr[],int size)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < minPrice)
        {
            minPrice = arr[i];
        }
        else if(arr[i] - minPrice > maxProfit)
        {
            maxProfit = arr[i] - minPrice;
            
        }
    }
    return maxProfit;

}

int main()
{
    int prices[] = {7,1,5,3,6,4};
    int size = 6;
    cout<<stock(prices,size);
    return 0;
}