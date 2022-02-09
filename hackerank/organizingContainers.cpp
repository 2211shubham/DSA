string organizingContainers(vector<vector<int>> container) {
    vector<int> rowS;
    for(int i = 0; i < container.size();i++){
        int rowSum = 0;
        for(int j = 0; j < container[0].size();j++){
            rowSum += container[i][j];
        }
        rowS.push_back(rowSum);
    }
    vector<int> colS;
    for(int i = 0; i < container.size();i++){
        int colSum = 0;
        for(int j = 0; j < container[0].size();j++){
            colSum += container[j][i];
        }
        colS.push_back(colSum);
    }
    sort(rowS.begin(),rowS.end());
    sort(colS.begin(),colS.end());
    
    if(rowS.size() != colS.size()){
        return "Impossible";
    }
    for(int i = 0; i < rowS.size(); i++){
        if(rowS[i] != colS[i]){
            return "Impossible";
        }
    }
    return "Possible";
}
