#include <iostream>
using namespace std;

int main()
{
    int size, c = 1;

    cout << "Enter size: ";
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        for(int n = 1; n <= size-i; n++)
            cout <<" ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c*(i-j+1)/j;

            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
