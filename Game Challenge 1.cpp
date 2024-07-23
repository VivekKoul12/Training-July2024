#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> player1_scores(N);
    vector<int> player2_scores(N);

    for (int i = 0; i < N; ++i) {
        cin >> player1_scores[i] >> player2_scores[i];
    }

    int cumulative_score1 = 0;
    int cumulative_score2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < N; ++i) {
        cumulative_score1 += player1_scores[i];
        cumulative_score2 += player2_scores[i];

        int current_lead = abs(cumulative_score1 - cumulative_score2);
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = (cumulative_score1 > cumulative_score2) ? 1 : 2;
        }
    }

    cout << winner << " " << max_lead << endl;
    return 0;
}
