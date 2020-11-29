#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


int solution(vector<vector<string>> clothes) { //2차원 배열에 대한 정의
    int answer = 1;
    unordered_map <string, int> cloth_num;

    for(int i = 0; i<clothes.size(); i++){
        cloth_num[clothes[i][1]]++;
    }

    for(unordered_map<string, int>::iterator iter = cloth_num.begin(); iter != cloth_num.end(); ++iter){
        answer *= ((iter->second)+1); //A 종류의 옷을 입는 경우의 수 + 모두 입지 않는 경우의 수 , map값 가져오기 위해 second

    }
    return answer-1; // 모두 입지 않는 경우
}