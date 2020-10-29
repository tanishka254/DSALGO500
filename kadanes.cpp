#include <iostream>
using namespace std;

int  maxsum(int arr[100],int n)
{
    int max=0;int sum=0;
    for (int i=0;i<n;i++)
    {
    max=max+arr[i];//kadanes algo important
    if (sum<max)
        sum=max;

    if (max<0)
        max=0;
    }
    return sum;
}
int main() {
    int arr[100],n;
    cin>>n;
    for ( int i =0;i<n;i++)
    cin>>arr[i];
    
   int sum=maxsum(arr,n);
   cout<<sum;
	
	return 0;
}