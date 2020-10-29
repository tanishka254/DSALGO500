#include <iostream>
using namespace std;

void rotate(int arr[100],int n)
{
    int x,i;
    x=arr[n-1];
    for(i=n-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=x;
}

int main() {
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    rotate(arr,n);
     for (int i=0;i<n;i++)
     cout<<arr[i];
	
	return 0;
}
