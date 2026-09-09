//Brute force
/*class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.reserve(nums1.size()+nums2.size());
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        double median;

        for(int i=0;i<n;i++){
            if(n%2!=0){
                median=nums1[n/2];
            }
            else{
                median=(nums1[(n-1)/2]+nums1[n/2])/2.0;
            }
        }
        return median;
    }
};*/

//optimal
//Using the merge algorithm logic of merge sort
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int m=nums1.size();
       int n=nums2.size();

       int prev=0,curr=0;
       int i=0,j=0;
       int total=m+n;

       for(int k=0;k<=total/2;k++){
            prev=curr;
            if(i<m && (j>=n || nums1[i]<=nums2[j])){
                curr=nums1[i];
                i++;
            }else{
                curr=nums2[j];
                j++;
            }

       }
       if(total%2==0)
        return (prev+curr)/2.0;
       return curr;
    }
};