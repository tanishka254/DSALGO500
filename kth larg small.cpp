#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n ,arr[10],k;
    cin>>n;
    cin>>k;
     for(int i=0;i<n;i++)
     cin>>arr[i];
     sort(arr,arr+n);
     cout<<"smallest kth : "<<arr[k-1];
     cout<<endl;
     reverse(arr,arr+n);
     cout<<"largest k th : "<<arr[k-1];
    
	
	return 0;
}