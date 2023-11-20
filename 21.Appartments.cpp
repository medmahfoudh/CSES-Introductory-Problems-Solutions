#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    for (int i = 0; i < n; ++i) {
        cin >> applicants[i];
    }

    vector<int> apartments(m);
    for (int i = 0; i < m; ++i) {
        cin >> apartments[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int ans = 0;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (abs(applicants[i] - apartments[j]) <= k) {
            // Applicant i can get apartment j
            ++ans;
            ++i;
            ++j;
        } else if (applicants[i] < apartments[j]) {
            // Move to the next applicant
            ++i;
        } else {
            // Move to the next apartment
            ++j;
        }
    }

    cout << ans << endl;

    return 0;
}
