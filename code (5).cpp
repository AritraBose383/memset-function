//memset()
#include <iostream>
#include<cstring>
using namespace std;

int main() { 
    cout<<"Input 1:";
    int k; cin>>k;
	int n[k]={0};
	for(int i=0;i<k;i++)// variable ssize object may not be initialized
	{
	cout<<n[i]<<" ";
	
	}
	cout<<endl;
// soltion of this problem: memset()	
int a;cin>>a;
cout<<"Input 2:";
int arr[a];
memset(arr,0,sizeof(arr));
for(int i=0;i<a;i++)
{
    cout<<arr[i]<<" ";
}
	return 0;
}