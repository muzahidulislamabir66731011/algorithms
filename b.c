int searchInsert(int* nums, int n, int target) {
    int i=0; 
    while (i<n){
        // printf("%d ",nums[i]);
        if(target == nums[i])
        return i;
        if (nums[i]> target)
        return i;
        i=i+1;
    }
    return i;
}
//nunms = {nums[0], nums[1], nums[2]...}
//i=1
