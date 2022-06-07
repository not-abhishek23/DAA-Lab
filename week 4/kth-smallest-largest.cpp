#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t != 0)
    {
        int size = 0;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        int k = 0;
        cin >> k;
        sort(array, array + size);
        int i = 0, count = 0;
        while (count != k - 1)
        {
            if (array[i] != array[i + 1])
                count++;
            i++;
        }
        cout << array[i] << "\n";
    }
}