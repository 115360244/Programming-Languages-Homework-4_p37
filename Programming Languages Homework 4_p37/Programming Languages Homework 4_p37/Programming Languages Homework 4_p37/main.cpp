#include <iostream>
#include <cstdlib>
#define SIZE 100
using namespace std;

int linearSearch(const int array[], int key, int size);

int main()
{
    int a[SIZE];
    int x;
    int searchKey;
    int element;

    for (x = 0; x < SIZE; x++)
    {
        a[x] = 2 * x;
    }

    cout << "Enter integer search key:\n";
    cin >> searchKey;

    element = linearSearch(a, searchKey, SIZE);

    if (element != -1)
    {
        cout << "Found value in element " << element << "\n";
    }
    else
    {
        cout << "Value not found\n";
    }

    system("pause");
    return 0;
}

int linearSearch(const int array[], int key, int size)
{
    int n;
    for (n = 0; n < size; ++n)
    {
        if (array[n] == key)
        {
            return n;
        }
    }
    return -1;
}