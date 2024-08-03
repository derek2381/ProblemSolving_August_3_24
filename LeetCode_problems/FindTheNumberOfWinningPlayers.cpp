// problem link
// https://leetcode.com/contest/biweekly-contest-136/problems/find-the-number-of-winning-players/



class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<map<int, int>> playerPicks(n);

        // Populate the counts of each color picked by each player
        for(const vector<int>& p : pick) {
            int player = p[0];
            int color = p[1];
            playerPicks[player][color]++;
        }

        int winnersCount = 0;

        // Check if each player meets their winning condition
        for(int i = 0; i < n; ++i) {
            for(const auto& entry : playerPicks[i]) {
                if(entry.second > i) { // entry.second is the number of balls of a color picked
                    winnersCount++;
                    break; // No need to check further, this player is already a winner
                }
            }
        }

        return winnersCount;
    }
};