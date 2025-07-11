#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring an Array
    // dataType arrayName[arraySize];
    // int numbers[100];

    // Initialization at declaration
    int arr[] = {1, 2, 3, 4, 5}; // The size is automatically determined by the number of elements.
    //Accessing Array Elements
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    
    int arr2[5] = {11, 12, 13, 14, 15};
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;


    int arr3[5];
    // Assigning values later (using index)
    arr3[0] = 100;
    arr3[1] = 200;
    arr3[2] = 300;
    arr3[3] = 400;
    arr3[4] = 500;
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}