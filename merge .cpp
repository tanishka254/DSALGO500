#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int arr[100],brr[100],n,m,i;
	vector<int> v(100);  
	vector<int>::iterator it;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<m;i++)
	cin>>brr[i];
	sort(arr,arr+n);
	sort(brr,brr+n);
	it =merge(arr,arr+n,brr,brr+m,v.begin());
	v.resize(it-v.begin());
	cout<<"merge"<<endl;
	for (it=v.begin(); it!=v.end(); it++)
	
    cout << ' ' << *it;
	return 0;
}