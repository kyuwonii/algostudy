void merge(vector<int& v, int s, int e, int m){
    vector<int> ret;
    int i = s, j = m+1, copy = 0;

    // 비교 저장
    while(i <= m && j<=e) {
        if (v[i] < v[j]) ret.pushback(v[i++]);
        else  if (v[i] > v[j]) ret.pushback(v[j++]);
    }

    //남은거 채워주기
    while (i <= m) ret.pushback(v[i++]);
    while (j <= e) ret.pushback(v[j++]);

    //원래 배열에 저장
    for (int k = s; k<=e; k++) {
        v[k] = ret[copy++];
    }

}

void mergeSort(vector<int>& v, int s, int e){
    if(s<e){
        int m = (s+e)/2;
        mergeSort(v,s,m); //분할
        mergeSort(v,m+1,e);

        merge(v,s,e,m;) // 합병
    }
}