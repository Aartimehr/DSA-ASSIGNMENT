#include <iostream>
using namespace std;
int A[10000];
int last=0;
int start=0;
void push(int value)
{
	A[last]= value;
	last++;
}
void front()
{
cout<<A[start]<<endl;
}
int pop(int value)
{
	start=start+1;
	return start;
}

int main()
{
int value;
cin>>value;
push(value);
cin>>value;
push(value);
front();
pop(value);

return 0;
}
