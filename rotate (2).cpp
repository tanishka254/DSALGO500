#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100],n;
    cin>>n;
    for (int i=0;i<n;i++)
    cin>>arr[i];
    
    rotate(arr,arr+(n-1),arr+n);
    for (int i=0;i<n;i++)
    
	cout<<arr[i];
	return 0;
}