#include <iostream>
#include <bits/stdc++.h> 
#include<algorithm>
using namespace std;
void sort(int arr[100], int n){
    int s,m=0;
    int e=n-1;
   
    while(m<=e){
        switch(arr[m]){
            case 0:
            swap(arr[s++],arr[m++]);
            break;
            case 1:
            m++;
            break;
            case 2:
            swap(arr[m],arr[e--]);
            break;
        }}
        
    }
    int main(){
        int n;
        int arr[100];
        int i;
        cin>>n;
    for (int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,n);
        
    for (int i=0;i<n;i++)
	cout<<arr[i];
	return 0;
}