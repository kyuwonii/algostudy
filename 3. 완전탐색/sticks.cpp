#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
    int X;
    int len = 64;
    int cnt = 0;
    
    cin >> X;
    while(X > 0){
        if(len > X)
            len = len / 2;
        else{
            X -= len;
            cnt++;
        }
    }
    
    cout << cnt << '\n';
    return 0;
}
 