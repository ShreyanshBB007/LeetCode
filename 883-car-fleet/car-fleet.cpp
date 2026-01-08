class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
            vector<double> time(speed.size(), 0);
            vector<pair<int,int>> pns;
            stack<float>st;
            for(int i = 0; i<position.size(); i++){
                pns.push_back({position[i],speed[i]});
            }
            sort(pns.begin(),pns.end(),greater());
            for(int i = 0; i<pns.size(); i++){
                time[i]=(float)(target-pns[i].first)/pns[i].second;
                cout<<time[i]<<" ";
            }

            for(int i = 0; i<pns.size(); i++){
                if(!st.empty()&&time[i]>st.top()){
                    st.push(time[i]);
                }
                else if(st.empty()){
                    st.push(time[i]);
                }
            }
            return st.size();
    }
};