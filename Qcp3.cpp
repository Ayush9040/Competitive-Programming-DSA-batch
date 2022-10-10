#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0,4,8,12,16,2};
    int start = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    int end = len-1;
    int mid= (start + end)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[mid+1])
        {
            if(arr[mid]>arr[mid-1])
            {
                break;
            }
            end=mid;
        }
        else
        {
            start=mid;
        }
        mid=(start+end)/2;
    }
    cout<<mid<<endl;
    return 0;
}
