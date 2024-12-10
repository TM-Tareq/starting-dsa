#include <iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size)
{
    cout << "printing the array" << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing DONE" << endl;
}

int main()
{

    // declare
    int number[15];

    cout << "Value at 0 index" << number[0] << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;

    cout << "printing the array" << endl;
    // print the array
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "printing DONE" << endl;

    cout << endl << "Everything is Fine" << endl << endl;

    int third[15] = {5, 7, 12};
    int n = 15;
    printArray(third, n);

    // int thirdSize = sizeof(third);
    // cout<< "Size of Third is " << thirdSize << endl;

    int thirdSize = sizeof(third) / sizeof(int);
    cout<< "Size of Third is " << thirdSize << endl;

    if(1) {
        return 1;
    }

}