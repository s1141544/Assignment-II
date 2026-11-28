#include <iostream>
using namespace std;

int main() {
    int T, N;
    cin >> T;

    while (T--) {
        cin >> N;

        int count[10] = {0};

        for (int i = 1; i <= N; i++) {
            int num = i;

            while (num > 0) {
                count[num % 10]++;
                num /= 10;
            }
        }

        for (int i = 0; i < 10; i++) {
            if (i > 0) {
                cout << " ";
            }

            cout << count[i];
        }

        cout << endl;
    }

    return 0;
}
