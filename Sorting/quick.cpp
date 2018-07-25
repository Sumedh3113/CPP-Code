//quick sort
/* C implementation QuickSort */
#include<iostream>
using namespace std;
 
// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
            //cout<<
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
         //cout<<pi<<endl;
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);/* pi-1=0 then low=0 and high also '0'
		                               recursion fails when value of pi becomes 0 then second
		                               recursion function get called with values changed in upper recursion call so the value 
		                               of high will change from 6 to 4 because first value returned 5 as value of i and we are passing pi-1 so ot became 4
									   same thing applicable to low the value get changed from 0 to 1 as recursion function executes*/
        quickSort(arr, pi + 1, high);//
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    cout<<arr[i]<<" ";
    //printf("n");
}
 
// Driver program to test above functions
int main()
{
   // int arr[] = {10, 7, 8, 9, 1, 5};
    int arr[]={4,6,3,2,1,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    std::cout <<"Sorted array: ";
    printArray(arr, n);
    return 0;
}