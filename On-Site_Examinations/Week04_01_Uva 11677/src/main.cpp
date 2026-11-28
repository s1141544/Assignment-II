#include <iostream>
using namespace std;

int main() {
    int H1, M1, H2, M2;

    while (cin >> H1 >> M1 >> H2 >> M2) {
        if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) {
            break;
        }

        int start = H1 * 60 + M1;
        int alarm = H2 * 60 + M2;

        int duration = alarm - start;

        if (duration < 0) {
            duration += 1440;
        }

        cout << duration << endl;
    }

    return 0;
}
