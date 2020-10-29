#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

void arrange(int n,int arr[100]) {
    int i,j=0;
    for(int i=0;i<n;i++){
    
    if (arr[i]>0){
        if (i!=j)
            swap(arr[i],arr[j]);
            j++;
    } }
    
    for(int i=0;i<n;i++)
	cout <<arr[i];
	
}
int main(){
    int n,arr[100];
    cin>>n;
     for(int i=0;i<n;i++)
    cin>>arr[i];
    arrange(n,arr);
    return 0;
}