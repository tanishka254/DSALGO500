#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, arr[10];
    cin>>n;
    
    for(int i=0;i<n;i++)
     cin>>arr[i];
     
    reverse(arr,arr+n);
    cout<<"reverse: ";
    
    for (int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     
     cout<<endl;
     cout<<"max: "<<*max_element(arr,arr+n)<<endl;
     cout<<"min: "<<*min_element(arr,arr+n);
	
	return 0;
}