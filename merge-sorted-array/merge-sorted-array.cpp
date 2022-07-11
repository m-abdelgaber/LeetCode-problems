#include <queue>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        queue< int > q;
        int j=0;
        for(int i=0; i<m; i++){
            if(j<n){
                if(q.empty()){
                    if(nums1[i]>nums2[j]){
                        q.push(nums1[i]);
                        nums1[i] = nums2[j++];
                    }
                }
                else{
                    if(nums1[i]>nums2[j]){
                        
                        if(nums2[j]>q.front()){
                            q.push(nums1[i]);
                            nums1[i] = q.front();
                            q.pop();
                        }
                        else{
                            q.push(nums1[i]);
                            nums1[i] = nums2[j++];
                        }
                    }
                    else{
                        if(nums1[i]>q.front()){
                            q.push(nums1[i]);
                            nums1[i] = q.front();
                            q.pop();
                        }
                    }
                }
            }
            else{
                if(!q.empty()){
                    if(q.front()<=nums1[i]){
                        q.push(nums1[i]);
                        nums1[i] = q.front();
                        q.pop();
                    }
                }
            }
        }
        
        for(int i=m; i<m+n; i++){
            if(j<n){
                if(q.empty()){
                    nums1[i] = nums2[j++];
                }
                else{    
                    if(nums2[j]>q.front()){
                        nums1[i] = q.front();
                        q.pop();
                    }
                    else{
                        nums1[i] = nums2[j++];
                    }
                    
                }
            }
            else{
                if(!q.empty()){
                    nums1[i] = q.front();
                    q.pop();

                }
            }
        }
        
        
    }
};