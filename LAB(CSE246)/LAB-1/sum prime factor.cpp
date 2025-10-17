#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    if (n % 2 == 0) {
        sum += 2;
        while (n % 2 == 0)
            n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            sum += i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 2)
        sum += n;

    cout << sum << endl;
    return 0;
}
