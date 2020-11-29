void selectionSort(vector<int> v){
    for(int i=0; i<v.size()-1; i++){
        int tmp = i;
        for(int j=i+1; j<v.size(); j++){
            if(v[tmp]>=v[j]) tmp = j;
        }
        swap(v[i], v[tmp]);
    }
}