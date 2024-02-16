#include <bits/stdc++.h>
using namespace std;

void quickSort(int* arr, int s, int e);
int binarySearch(int arr[], int low, int high, int x);

bool isSubset(int arr1[], int arr2[], int m, int n)
{
	int i = 0;

	quickSort(arr1, 0, m - 1);
	for (i = 0; i < n; i++) {
		if (binarySearch(arr1, 0, m - 1, arr2[i]) == -1)
			return 0;
	}
	return 1;
}

int binarySearch(int arr[], int low, int high, int x)
{
	if (high >= low) {

		int mid = (low + high) / 2;

		if ((mid == 0 || x > arr[mid - 1])
			&& (arr[mid] == x))
			return mid;
		else if (x > arr[mid])
			return binarySearch(arr, (mid + 1), high, x);
		else
			return binarySearch(arr, low, (mid - 1), x);
	}
	return -1;
}

void Swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partitions(int A[], int s, int e)
{
	int x = A[e];
	int i = (s - 1);
	int j;

	for (j = s; j <= e - 1; j++) {
		if (A[j] <= x) {
			i++;
			Swap(&A[i], &A[j]);
		}
	}
	Swap(&A[i + 1], &A[e]);
	return (i + 1);
}

void quickSort(int A[], int s, int e)
{
	int p;
	if (s < e) {
		p = partitions(A, s, e);
		quickSort(A, s, p - 1);
		quickSort(A, p + 1, e);
	}
}

int main()
{
    int m;
	int n;
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
	cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
	if (isSubset(arr2, arr1, n, m))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
