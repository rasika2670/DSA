#include<iostream>
using namespace std;

int printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int getMax(int size, int arr[])
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int size, int arr[])
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int sumArray(int arr[], int size)
{
    int sum =0 ;
    
    for(int i = 0; i < size; i++)
    {
        sum += arr[i] ;
    }
    return sum;
}

int reversArray(int arr[], int size)
{
    int i = 0, j = size-1;

    while (i<=j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    return arr[size];
}

int swapAlternate(int arr[], int size)
{
    int  i = 1;
    while(i < size)
    {
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        i+=2;
    }
    return arr[size];
}

int main()
{
    int arr[10];
    int size ;

    cout << "Enter size of array : " ;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    /*
    cout << "\nMaximum number is : " << getMax(size, arr) << endl;
    cout << "Minimum number is : " << getMin(size, arr) << endl;
    cout << "Sum of all elements in array = " << sumArray(arr, size) << endl;
    cout << "Reverse array is : " << endl;
        reversArray(arr, size);
        printArr(arr, size);
    */
    cout << "Reverse array is : " << endl;
        swapAlternate(arr, size);
        printArr(arr, size);

    return 0;
}