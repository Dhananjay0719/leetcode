class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans;
        int i=0;
        int j=0;
        if(m==0)
        {
            for(int i=0;i<n;i++)
            {nums1[i]=nums2[i];}
        }
        if(n==0)
        {
            for(int i=0;i<m;i++)
            {nums1[i]=nums1[i];}
        }
        else{
            while(i<m&&j<n)
            {
            if(nums1[i]<=nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if(i==m)
        {
            while(j<n)
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if(j==n)
        {
            while(i<m)
            {
                ans.push_back(nums1[i]);
                i++;
            }
        }
        for(int i=0;i<m+n;i++)
        {
        nums1[i]=ans[i];
        }
    }
    }
};