#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    // int start = 0;
    // int end = size - 1;
    // int mid = (start + end) / 2;

    for (int i = 0; i < size; i++)
    {
        int mid = (arr[i] + arr[size - 1]) / 2;

        if (key == arr[mid])
        {
            return i;
        }
        else
        {
            if (key > mid)
            {
                arr[mid] = ((mid + 1) + arr[size - 1]) / 2;
            }
            else
            {
                arr[mid] = (arr[i] + mid - 1) / 2;
            }
        }
    }

    return -1;
}

int main()
{
    int even[6] = {2, 5, 6, 8, 12, 18};
    // int odd[5] = {3, 8, 11, 13, 16};

    // int key;
    // cout << "Input the key of the array: ";
    // cin >> key;

    int result = binarySearch(even, 6, 8);

    // int oddResult = binarySearch(odd, 5, 13);

    cout << "Index of the key is " << result << endl;

    return 0;
}