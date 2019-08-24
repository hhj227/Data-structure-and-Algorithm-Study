#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> p1 {1,2,3,4,5};
    vector<int> p2 {2,1,2,3,2,4,2,5};
    vector<int> p3 {3,3,1,1,2,2,4,4,5,5};
    int c[3] = {0,};
    for (int i=0; i<answers.size(); i++) {
        if(answers[i]==p1[i%p1.size()]) c[0]++;
        if(answers[i]==p2[i%p2.size()]) c[1]++;
        if(answers[i]==p3[i%p3.size()]) c[2]++;
    }
    int maxCount = 0;
    int maxNum = 0;
    for (int i=0; i<3; i++) {
        if(maxCount<c[i]) maxCount = c[i];
    }
    for (int i=0; i<3; i++) {
        if(maxCount==c[i]) answer.push_back(i+1);
    }
    return answer;
}
