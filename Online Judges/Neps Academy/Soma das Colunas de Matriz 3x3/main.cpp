#include <iostream>

using namespace std;

int main()
{
    int a[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Coluna " << i << ": ";
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum+=a[j][i];
        }
        cout << sum << endl;
    }
    return 0;
}
