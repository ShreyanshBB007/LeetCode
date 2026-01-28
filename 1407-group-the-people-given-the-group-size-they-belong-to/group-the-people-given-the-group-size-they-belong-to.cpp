class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int maxx = *max_element(groupSizes.begin(), groupSizes.end());
        vector<vector<int>> vec(maxx+maxx);

        for(int i = 0; i<groupSizes.size(); i++){
            vec[groupSizes[i]].push_back(i);
        }
        int i = 0;
        while (i < vec.size()){
            if(vec[i].empty()){
                vec.erase(vec.begin()+i);
                continue;
            }
            while(!vec[i].empty()&&vec[i].size()>groupSizes[vec[i][0]]){
                vector<int> temp1;
                vector<int> temp2;
                for(int j = 0; j<vec[i].size(); j++){
                    if(j<groupSizes[vec[i][0]]){
                        temp1.push_back(vec[i][j]);
                    }
                    else temp2.push_back(vec[i][j]);
                }
                vec.erase(vec.begin()+i);
                vec.insert(vec.begin()+i,temp2);
                vec.insert(vec.begin()+i,temp1);

            }
            i++;
        }
        return vec;
    }
};