#include<bits/stdc++.h>
using namespace std;
/*
	Count Sort Algorithm
	**Time Complexity: O(n)
	**Space Complexity: O(max_number-min_number) //no additional space is required
*/

//a function that will print the vector passed to it, elements seprated by space
void printVector(vector<int>A)
{
	//traverse all the element and print them
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}

//the vector A will be sorted inplace and that's why passed with refrence
void sort(vector<int>&A)
{
    vector<int>B(100);
    for(int a:A)
    {
        B[a]++;
    }
	int k=0;
	for(int i=0;i<B.size();i++)
	{
	    for(int j=0;j<B[i];j++)
	    {
	        A[k]=i;
	        k++;
	    }
	}
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);

	
	return 0;
}
