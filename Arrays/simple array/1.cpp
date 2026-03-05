#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int findMinimumClicks(int N, vector<vector<int>>& pages, int start_page, int end_page) {
    vector<bool> visited(N + 1, false);
    queue<pair<int, int>> q;
    
    q.push({start_page, 0});
    visited[start_page] = true;
    
    while (!q.empty()) {
        int current_page = q.front().first;
        int clicks = q.front().second;
        q.pop();
        
        if (current_page == end_page) {
            return clicks;
        }
        
        for (int linked_page : pages[current_page]) {
            if (!visited[linked_page]) {
                q.push({linked_page, clicks + 1});
                visited[linked_page] = true;
            }
        }
    }
    
    return -1; // End page is not reachable
}

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> pages(N + 1);
    for (int i = 1; i <= N; i++) {
        int L;
        cin >> L;
        pages[i].resize(L);
        for (int j = 0; j < L; j++) {
            cin >> pages[i][j];
        }
    }
    
    int start_page, end_page;
    cin >> start_page >> end_page;
    
    int min_clicks = findMinimumClicks(N, pages, start_page, end_page);
    
    cout << min_clicks << endl;
    
    return 0;
}
