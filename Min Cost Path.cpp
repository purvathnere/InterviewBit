int Solution::solve(int A, int B, vector<string> &C) {
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
                   greater<pair<int, pair<int, int>>>>
        pq;

    vector<vector<int>> dist(A, vector<int>(B, INT_MAX));

    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};
    char dir[4] = {'U', 'R', 'D', 'L'};

    pq.push({0, {0, 0}});
    dist[0][0] = 0;

    while (!pq.empty()) {
        auto node = pq.top();
        pq.pop();

        int cost = node.first;
        int r = node.second.first;
        int c = node.second.second;

        if (r == A - 1 && c == B - 1)
            return cost;

        for (int i = 0; i < 4; i++) {
            int nr = r + delrow[i];
            int nc = c + delcol[i];

            if (nr >= 0 && nr < A && nc >= 0 && nc < B) {
                int extraCost = (C[r][c] != dir[i]); // Check if direction matches
                if (dist[r][c] + extraCost < dist[nr][nc]) {
                    dist[nr][nc] = dist[r][c] + extraCost;
                    pq.push({dist[nr][nc], {nr, nc}});
                }
            }
        }
    }

    return -1; // In case there's no path (shouldn't happen based on problem constraints)
}
