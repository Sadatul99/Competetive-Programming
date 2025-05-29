#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int r, c;
vector<pair<int, int>> empty_cells;
unordered_map<int, vector<int>> row_map, col_map;

// Backtracking function to count valid tower placements
int backtrack(vector<pair<int, int>>& towers, int last_x, int last_y) {
    if (towers.size() == 4) return 1; // Found valid placement
    
    int count = 0;
    // Try extending in the same row
    for (int y : row_map[last_x]) {
        if (y != last_y) {
            towers.emplace_back(last_x, y);
            count += backtrack(towers, last_x, y);
            towers.pop_back();
        }
    }
    // Try extending in the same column
    for (int x : col_map[last_y]) {
        if (x != last_x) {
            towers.emplace_back(x, last_y);
            count += backtrack(towers, x, last_y);
            towers.pop_back();
        }
    }
    return count;
}

int count_valid_tower_placements() {
    int total_ways = 0;
    for (auto& cell : empty_cells) {
        vector<pair<int, int>> towers = {cell};
        total_ways += backtrack(towers, cell.first, cell.second);
    }
    return total_ways;
}

int main() {
    cin >> r >> c;
    vector<string> grid(r);
    for (int i = 0; i < r; i++) {
        cin >> grid[i];
        for (int j = 0; j < c; j++) {
            if (grid[i][j] == '.') {
                empty_cells.emplace_back(i, j);
                row_map[i].push_back(j);
                col_map[j].push_back(i);
            }
        }
    }
    
    cout << count_valid_tower_placements() << endl;
    return 0;
}