#include<cstdio>
#include<queue>
#pragma warning(disable :4996)
using namespace std;
 
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int testcase = 0; testcase < t; testcase++)
    {
        int N, M,cnt = 0;
        queue <pair<int, int>> q;
        priority_queue <int> pq; //우선순위 큐
 
        scanf("%d %d",&N,&M);
        for (int i = 0; i < N; i++)
        {
            int a;
            scanf("%d", &a);
            q.push({i,a}); // 책 번호와 우선순위 큐에 넣기
            pq.push(a); // 우선순위를 우선순위 큐에 넣기
        }
 
        while (!q.empty())
        {
            //현재 배열의 인덱스와 중요도
            int nowidx = q.front().first;
            int nowval = q.front().second;
            q.pop();
 
            if (pq.top() == nowval) // 우선순위 정렬과 현재 문서 중요도 일치하면 빼기
            {
                pq.pop();
                cnt++;
                if (nowidx == M)
                {
                    printf("%d\n", cnt);
                    break;
                }
            }
            else { //아니면 다음으로 넘기기
                q.push({ nowidx,nowval });
            }
        }
    }
    return 0;
}