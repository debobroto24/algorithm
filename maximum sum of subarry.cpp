 #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void kadanesAlgorithm(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxEndHere = nums[0]; 
    int maxSoFar = nums[0]; 

    for(i=1;i<nums.size();i++){
        maxEndHere = max(nums[i], maxEndHere+nums + nums[i] ); 
        maxSoFar = max(maxSoFar,maxEndHere);
    }

    cout<<maxSoFar<<endl;
    return;
}
int main() {
    kadanesAlgorithm();
    return 0;
}