#include <string>
#include <vector>

using namespace std;
int answer;
void dfs(int idx, int ans, vector<int> &numbers, int &target){
    if(idx==numbers.size()){
        if(ans==target){
            answer+=1;
        }
        return;
    }
    dfs(idx+1, ans+numbers[idx], numbers, target);
    dfs(idx+1, ans-numbers[idx],numbers,target);
}

int solution(vector<int> numbers, int target) {
    answer = 0;
    
    dfs(0,0,numbers,target);
    
    return answer;
}