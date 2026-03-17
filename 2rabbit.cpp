#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    char grid[R][C];
    bool visited[R][C];
    memset(visited, false, sizeof(visited));
    queue<tuple<int,int,int>> q;

    for (int row = 0; row < R; row++) {
        for (int col = 0; col < C; col++) {
            cin >> grid[row][col];
            if (grid[row][col] == 'R'||grid[row][col] == 'r') {
                q.push({row, col, 0});
                visited[row][col] = true;
            }
        }
    }

    int rdiff[] = {-1,-1,-1, 0, 0, 1, 1, 1};
    int cdiff[] = {-1, 0, 1,-1, 1,-1, 0, 1};

    while (!q.empty()) {
        auto [r, c, dist] = q.front();  // q.poll() is q.front() + q.pop()
        q.pop();

        for (int i = 0; i < 8; i++) {
            int ar = r + rdiff[i];
            int ac = c + cdiff[i];

            if (ar >= 0 && ar < R &&
                ac >= 0 && ac < C &&
                !visited[ar][ac] &&
                grid[ar][ac] != 'B') {

                if (grid[ar][ac] == 'C') {
                    cout << dist + 1 << endl;
                    return 0;
                }

                q.push({ar, ac, dist + 1});
                visited[ar][ac] = true;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
