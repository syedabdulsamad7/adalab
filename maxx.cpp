#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{ 
	int n;
	cout<<"enter the number of integers";
	cin>>n;
	int a[n];
	cout<<"enter the numbers";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	    }
		int max=a[0];
		for(int i=0;i<n;i++)
			if(a[i]>max)
				max=a[i];
	cout<<"Max :"<<max;
	return 0;
	}
