#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0; // 할당시에 0으로 알아서 초기화
    vector<int> student(n); //// 먼저 학생 수 만큼 벡터를 할당
    
    for(int i = 0; i < lost.size(); i++){ // 해당 벡터에  lost에 해당되는 학생들을 -1 씩 더하기
        student[ lost[i]-1 ] += -1;
    }
    
    for(int i = 0; i < reserve.size(); i++){ // 또 여분의 체육복을 가지고 있는 학생들에게 +1 씩 더하기
        student[ reserve[i]-1 ] += 1;
    }
    
    for(int i=0; i < student.size(); i++){ // 그 다음 앞에서부터 여분의 체육복을 가지고 있는 경우 앞뒤로 학생들이 체육복을 도난 당했는지 확인
        if( student[i] == 1){
            if( i - 1 > -1){
                if( student[i-1] == -1 ){ // 도난 당한 경우 +1을 더해주고 빌려준 학생은 -1을 더하기 
                    student[i-1] += 1;
                    student[i] += -1;
                }
            }
        }
        
        if( student[i] == 1){ // 최종적으로 벡터에 0과 1을 가지고 있는 학생들을 체육 수업에 참여할 수 있으므로 카운트
            if( i + 1 < student.size()){if( student[i+1] == -1 ){
                    student[i+1] += 1;
                    student[i] += -1;
                }
            }
        }
    }
    
    for(int i = 0; i< student.size(); i++){
        if( student[i] == 0 || student[i] == 1)
            ++answer;
    }
    
    return answer;
}




// 해당 코드는 여분의 체육복을 하나씩만 가지고 있는다는 가정하에 동작합니다. 
// 여분의 체육복을 2벌 이상 가지고 있는 경우의 수 가 있다면 이 알고리즘은 유효하지 않으며 수정해야 할 부분이 있습니다. 