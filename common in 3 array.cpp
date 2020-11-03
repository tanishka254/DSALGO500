#include <iostream>
using namespace std;

int main() {
    int a[100],b[100],c[100],n,m,s;
    cin>>n>>m>>s;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int j=0;j<m;j++)
    cin>>b[j];
    for(int k=0;k<s;k++)
    cin>>c[k];
    int i=0,j=0,k=0;
    while(i<n && j<m && k<s)
    {
        if (a[i]==b[j] && b[j]==c[k])
        {
            cout<<a[i]<<" ";
             i++;j++;k++;
            
        }
        else if(a[i]<b[j])
        i++;
        else if(b[j]<c[k])
        j++;
        else
        k++;
        
    }	return 0;
}