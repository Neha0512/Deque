#include<bits/stdc++.h>
using namespace std;

struct dq{
	int size, capacity;
	int *arr;
	dq(int c){
		capacity=c;
		size=0;
		arr=new int[cap];
	}
	bool isFull()
	{
		return size==capacity;
	}
	booln isEmpty(){
		return size==0;	
	}
	
	// REAR
	void insertRear()
	{
		if isFull()
		{
			return;
		}
		arr[size]=k;
		size++;
	}
	void deletRear()
	{
		if isEmpty()
		{
			return;
		}
		size--;
	}
	
	
	
	
	
	
	
	
	// FRONT
	void insertFront{
		if isFull(){
			return;
		}
		for(int i=size-1; i>=0; i--)
		{
			arr[i+1]=arr[i];
		}
		arr[0]=x;
		size++;
	}
	
	void deleteFront()
	{
		if isEmpty(){
			return;
		}
	}
	
};
