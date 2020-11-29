void qsort(vector<int>& v, int s, int e) {
    int pivot = v[s];
    int bs = s, be = e;
    while (s<e) {
        while( pivot <= v[e] && s<e) e--;
        if (s<e) break;
        while( pivot >= v[s] && s<e) s++;
        if (s>e) break;
        std::swap(v[s], v[e]);
    }
    std::swap(v[bs],v[s]);
    if(bs<s)
        qsort(v,bs,s-1);
    if(be>e)
        qsort(v,s+1,be);
}