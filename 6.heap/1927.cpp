#include<cstdio>
#include<queue>
#include<vector>
 
using namespace std;
 
 //가장 작은 수 출력
int main(void){
    int n;
    scanf("%d",&n); //전체 개수 개입
    priority_queue<int, vector<int>, greater<int> > q;
    //배열에 자연수 x를 넣을 때마다, top의 위치가 바뀌는 우선순위 큐.
    
    while(n--){
        int tmp;
        scanf("%d",&tmp); 
        if(tmp == 0){ //0이라면 배열에서 가장 큰 값을 출력한다.
            if(q.empty()) //배열이 비어있다면 0 출력
                printf("0\n");
            else{ //가장 작은 값을 출력하고, 그 값을 배열에서 제거한다.
                printf("%d\n",q.top());
                q.pop();        
            }
        }
        else{
            q.push(tmp); //자연수라면 배열에 자연수 x를 넣는다.
        }
    }
    return 0;
}

