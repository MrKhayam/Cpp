#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int size)
{
    int counts[100] = {0}; // Array to store counts (assuming numbers between 0-99 for simplicity)

    // Step 1: Count occurrences
    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        counts[num]++; // Increase count for each number in arr
    }

    // Step 2: Check for unique counts
    for (int i = 0; i < 100; i++)
    {
        if (counts[i] > 0)
        { // Only check numbers that appeared
            for (int j = i + 1; j < 100; j++)
            {
                if (counts[i] == counts[j] && counts[j] > 0)
                { // If two counts are the same
                    return false;
                }
            }
        }
    }

    return true; // All counts are unique
}

int main()
{
    int arr[] = {1, 2, 2, 1, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (uniqueOccurrences(arr, size))
    {
        cout << "True" << endl; // Unique occurrences
    }
    else
    {
        cout << "False" << endl; // Not unique
    }

    return 0;
}
