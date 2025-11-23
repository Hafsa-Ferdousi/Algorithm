#include <bits/stdc++.h>
using namespace std;

struct Job {
    char id;
    int deadline;
    int profit;
};

bool compare(Job a, Job b) {

    return a.profit > b.profit;
}

void JobScheduling(vector<Job> &jobs) {


    sort(jobs.begin(), jobs.end(), compare);


    int maxDeadline = 0;

    for (auto &job : jobs) {
        maxDeadline = max(maxDeadline, job.deadline);
    }


    vector<char> slot(maxDeadline + 1, '-');

    int totalProfit = 0;
    vector<char> result;


    for (auto &job : jobs) {


        for (int t = job.deadline; t >= 1; t--) {

            if (slot[t] == '-') {

                slot[t] = job.id;

                totalProfit += job.profit;
                result.push_back(job.id);
                break;
            }
        }
    }

    cout << "Selected Jobs: ";
    for (char x : result) cout << x << " ";
    cout << endl;

    cout << "Total Profit: " << totalProfit << endl;
}

int main() {
    vector<Job> jobs = {
        {'A', 2, 100},
        {'B', 1, 19},
        {'C', 2, 27},
        {'D', 1, 25},
        {'E', 3, 15}
    };

    JobScheduling(jobs);

    return 0;
}
