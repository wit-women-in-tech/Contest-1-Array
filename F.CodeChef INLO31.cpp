#include<iostream>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
	int n,j,count=0;
	n=5,j=0;
	int arr[5];
	unordered_map<int,int>m;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	while(n)
	{  
        int x;
		for(int i=1;i<=arr[j];i++)
		{
            cin>>x;
            m[x]++;
		}
        n--;
        j++;	
	}
	for(int i=1;i<=m.size();i++)
	{
        if(m[i]>2)
        {
            count++;
        }
	}
	cout<<count;	
	return 0;
}