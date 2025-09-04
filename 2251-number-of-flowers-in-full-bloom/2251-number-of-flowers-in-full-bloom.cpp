class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        
        int m=flowers.size();
        int n=people.size();
        
        vector<int>starttime,endingtime;
        vector<int>ans;
        for(int i=0;i<m;i++){
            starttime.push_back(flowers[i][0]);
            endingtime.push_back(flowers[i][1]);
        }

        sort(starttime.begin(),starttime.end());
        sort(endingtime.begin(),endingtime.end());

        for(int i=0;i<n;i++){
            int bloomed=upper_bound(starttime.begin(),starttime.end(),people[i])-starttime.begin();
            int dead=lower_bound(endingtime.begin(),endingtime.end(),people[i])-endingtime.begin();

            ans.push_back(bloomed-dead);
        }
        return ans;
    }
};