#include <bits/stdc++.h>
using namespace std;

// Function to print the array
void printArray(int *&arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to delete an element at the end of the array
void deleteAtEnd(int *&arr, int &n)
{
    if (n > 0)
    {
        n--;
        cout << "Element is deleted from end." << endl;
    }
    else
    {
        cout << "Array is empty." << endl;
    }
}

// Function to delete an element at the beginning of the array
void deleteAtBeginning(int *&arr, int &n)
{
    if (n > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "Element is deleted from begining." << endl;
    }
    else
    {
        cout << "Array is empty." << endl;
    }
}

void deleteAtIndex(int *&arr, int &n, int index)
{
    if (index < 0 || index >= n)
    {
        cout << "Invalid index. Can not deleted." << endl;
    }
    if (n > 0)
    {
        for (int i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "Element deleted at index " << index << endl;
    }
    else
    {
        cout << "Array is empty." << endl;
    }
}

// Function to delete the first occurrence of a specific value from the array
void deleteByValue(int *&arr, int &n, int value)
{
    int indexToDelete = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            indexToDelete = i;
            break;
        }
    }
    if (indexToDelete != -1)
    {
        for (int i = indexToDelete; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "First occurrence of value " << value << "deleted." << endl;
    }
    else
    {
        cout << "Value not find in array." << endl;
    }
}

int main()
{
    int *arr = new int[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    cout << "Original Array " << endl;
    printArray(arr, n);

    deleteAtEnd(arr, n);
    cout << "Array after deletion at end " << endl;
    printArray(arr, n);

    deleteAtBeginning(arr, n);
    cout << "Array after deletion at beginning" << endl;
    printArray(arr, n);

    deleteAtIndex(arr, n, 3);
    cout << "Array after delete at index 3" << endl;
    printArray(arr, n);

    deleteByValue(arr, n, 70);
    cout << "Array after delete by value 70." << endl;
    printArray(arr, n);
    delete[] arr;
    return 0;
}
