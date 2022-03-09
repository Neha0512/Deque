// inserting an element in deque take O(n) time
// front index should always be at 0 and rear index is size-1

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
};
