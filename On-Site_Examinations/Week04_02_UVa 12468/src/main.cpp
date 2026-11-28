#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        if (a == -1 && b == -1) {
            break;
        }

        int diff = abs(a - b);

        cout << min(diff, 100 - diff) << endl;
    }

    return 0;
}
