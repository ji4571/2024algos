#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int cnt = 0;
    bool check[MAX + 1];
    fill(check + 2, check + N + 1, true);
    for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
            check[i] = false;
            cnt++;

            if (cnt == K) {
                cout << i;
                return 0;
            }
            for (int j = i * 2; j <= N; j += i) {
                if (check[j] == true) {
                    check[j] = false;
                    cnt++;
                }
                if (cnt == K) {
                    cout << j;
                    return 0;
                }
            }
        }
    }
}
