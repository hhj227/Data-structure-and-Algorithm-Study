#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

//대부분은 dfs로 품
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    bool visited[200];
    memset(visited, false, sizeof(visited));
    queue<int> q;
    for(int i=0;i<n;i++){
        if(visited[i]) continue;
        q.push(i);
        answer++;
        while(!q.empty()){
            int idx = q.front();
            visited[idx] = true;
            q.pop();
            for(int j=0;j<n;j++){
                if(computers[idx][j]==1&&!visited[j]){
                    q.push(j);
                }
            }
        }
    }
    
    
    return answer;
}
