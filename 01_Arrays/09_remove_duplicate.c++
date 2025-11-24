#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {1, 1, 2, 3, 3, 5, 5, 5, 9, 9};

    // By using set
    //  set<int> st(begin(arr), end(arr));
    //  for (int num : st)
    //  {
    //      cout << num << " ";
    //  }

    // Two pointer
    int i = 0;
    for (int j = 1; j < 10; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}