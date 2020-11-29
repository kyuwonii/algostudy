#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    std::sort(participant.begin(), participant.end());
    std::sort(completion.begin(), completion.end());

    for (int i = 0; i < participant.size(); i++) {
        if (participant[i] != completion[i]){
            return participant[i]
        }
    }
    return participant[participant.size()];//끝까지 돈 이후에는 마지막 값 출력