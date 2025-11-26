#include <iostream>
#include <algorithm> // for swap
using namespace std;

int main() {
    int n;
    double capacity;

    cout << "Enter number of items: ";
    cin >> n;

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    double value[100], weight[100], ratio[100];
    double taken[100] = {0}; // to store how much of each item is taken (0 to 1)

    // Input values and weights
    for (int i = 0; i < n; i++) {
        cout << "Enter value and weight of item " << i + 1 << ": ";
        cin >> value[i] >> weight[i];
        ratio[i] = value[i] / weight[i];
    }

    // Sort items by value/weight ratio in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                swap(ratio[i], ratio[j]);
                swap(value[i], value[j]);
                swap(weight[i], weight[j]);
            }
        }
    }

    double totalValue = 0.0;
    double remaining = capacity;

    // Pick items
    for (int i = 0; i < n; i++) {
        if (remaining == 0)
            break;

        if (weight[i] <= remaining) {
            // Take full item
            taken[i] = 1.0;
            remaining -= weight[i];
            totalValue += value[i];
        } else {
            // Take fractional part
            taken[i] = remaining / weight[i];
            totalValue += value[i] * taken[i];
            remaining = 0;
        }
    }

    cout << "\nItems taken in the knapsack:\n";
    cout << "--------------------------------\n";
    cout << "Item\tWeight\tValue\tTaken(%)\n";
    for (int i = 0; i < n; i++) {
        if (taken[i] > 0) {
            cout << i + 1 << "\t" << weight[i] << "\t" << value[i]
                 << "\t" << taken[i] * 100 << "%\n";
        }
    }

    cout << "\nMaximum value in Knapsack = " << totalValue << endl;

    return 0;
}
