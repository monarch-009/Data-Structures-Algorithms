#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Array : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at the beginning of the array
void insertAtBeginning(int *&arr, int &n, int value)
{
    int *newArr = new int[n + 1];

    newArr[0] = value;

    for (int i = 0; i < n; i++)
    {
        newArr[i + 1] = arr[i];
    }
    n++;

    delete[] arr;
    arr = newArr;
    cout << "Inserted " << value << " at Begining." << endl;
}

// Function to insert an element at the end of the array
void insertAtEnd(int *&arr, int &n, int value)
{
    int *newArr = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[n] = value;
    n++;

    delete[] arr;
    arr = newArr;
    cout << "Inserted " << value << " at End.\n";
}

// Function to insert an element at a specific index in the array
void insertAtIndex(int *&arr, int &n, int index, int value)
{
    if (index < 0 || index > n)
    {
        cout << "Invalid index: " << index << ". Valid range: 0 to " << n << "." << endl;
        return;
    }
    int *newArr = new int[n + 1];

    for (int i = 0; i < index; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[index] = value;
    for (int i = index; i < n; i++)
    {
        newArr[i + 1] = arr[i];
    }
    n++;
    delete[] arr;
    arr = newArr;
    cout << "Inserted " << value << " at Index " << index << ".\n";
}

int main()
{
    int n = 4;
    int *arr = new int[n]{10, 20, 30, 50};

    cout << "Initial ";
    printArray(arr, n);
    cout << "--------------------------" << endl;

    // Insert at end
    insertAtEnd(arr, n, 60);
    printArray(arr, n);

    // Insert at beginning
    insertAtBeginning(arr, n, 5);
    printArray(arr, n);

    // Insert at valid index
    insertAtIndex(arr, n, 3, 25);
    printArray(arr, n);

    delete[] arr;
    return 0;
}