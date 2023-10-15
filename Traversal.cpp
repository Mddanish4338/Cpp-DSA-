
#include <bits/stdc++.h>
using namespace std;

void printArray(int* arr, int n)
{
	int i;

	cout << "Array: ";
	for (i = 0; i < n; i++) 
	{
		cout << arr[i] << " ";
	}
}


int main()
{
	 int arr[] = {90,50,60,-20,10,-10};
    
	int n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);
	return 0;
}
