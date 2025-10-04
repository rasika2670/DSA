#include<iostream>
using namespace std;

int* insertionSort(int n, int arr[])
{
    int i = 1; // Start from the second element
    // Traverse through 1 to n-1
    while (i<n)
    {
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        i++;
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  
    }
    insertionSort(n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  
    }   
    
    return 0;
}