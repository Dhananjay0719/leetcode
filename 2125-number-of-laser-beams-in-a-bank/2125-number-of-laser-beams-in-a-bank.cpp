class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>devices;

        for(int i=0;i<bank.size();i++){
            int count=0;
            for(char ch:bank[i]){
                if(ch=='1'){count++;}
            }
            devices.push_back(count);
        }

        int total=0;
        int curr=0;
        for(int i=0;i<devices.size();i++){
            if(devices[i]==0){
                continue;
            }
            else{
                total+=curr*devices[i];
                curr=devices[i];
            }
        }
        return total;
    }
};