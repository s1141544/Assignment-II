#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int salary[3];

        cin >> salary[0] >> salary[1] >> salary[2];

        sort(salary, salary + 3);

        cout << "Case " << i << ": " << salary[1] << endl;
    }

    return 0;
}
