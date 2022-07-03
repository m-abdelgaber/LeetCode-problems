// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lastGood =0;
        long int start =0;
        long int end = n;
        long int mid = end;
        while (start<end){
            printf("%i, %i, %i, %i \n",start, mid, end, lastGood );
            mid = (start + end)/2;
            if(isBadVersion(mid)){
                end = mid;
            }
            else{
                if(mid>lastGood){
                    lastGood = mid;
                }
                start = mid+1;
            }
        }
        // if(mid>lastGood){
        //             lastGood = mid;
        // }
        return lastGood+1;
    }
};