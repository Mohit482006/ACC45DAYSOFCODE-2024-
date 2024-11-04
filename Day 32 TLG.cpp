#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cumulativeScore1 = 0, cumulativeScore2 = 0;
    int maxLead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int score1, score2;
        cin >> score1 >> score2;

        // Update cumulative scores
        cumulativeScore1 += score1;
        cumulativeScore2 += score2;

        // Calculate lead and determine current leader
        int currentLead = abs(cumulativeScore1 - cumulativeScore2);
        int currentLeader = (cumulativeScore1 > cumulativeScore2) ? 1 : 2;

        // Check if this is the maximum lead
        if (currentLead > maxLead) {
            maxLead = currentLead;
            winner = currentLeader;
        }
    }

    // Output the winner and maximum lead
    cout << winner << " " << maxLead << endl;

    return 0;
}
