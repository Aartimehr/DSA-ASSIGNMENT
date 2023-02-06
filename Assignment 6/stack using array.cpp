#include<bits/stdc++.h>
using namespace std;
int A[10000];
	int last=0;
 void push(int value)
 {
 	A[last]=value;
 	last++;
 	// return last;
 }
 void top()
 {
 	cout<<A[last-1]<<endl;
 }
 int pop()
 {
 	last= last-1;
 	return last;
 }
 
int main()
{    
	
	int value;
	cin>>value;
	push(value);
	top();
	cin>>value;
	push(value);
	top();
	pop();
	top();
	return 0;
	
}
