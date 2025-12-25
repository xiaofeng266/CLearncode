#include<vector>

void quickSort(int left, int right, std::vector<int>& nums){
    if(left > right){
        return;
    }
    int temp = nums[left];  // 基准值
    int i = left;
    int j = right;
    int t;
    while(i != j){
        while(i < j && nums[j] >= temp){
            j--;
        }
        while (i < j && nums[i] <= temp)
        {
            i++;
        }
        // 没有相遇，需要交换两个元素位置
        if(i<j){
            t = nums[j];
            nums[j] = nums[i];
            nums[i] = t;
        }
    }
    // 基准交换位置
    nums[left] = nums[j];
    nums[j] = temp;
    quickSort(left,j-1,nums);
    quickSort(j+1,right,nums);
}

/*
注意的点：为什么先动右边的哨兵，因为右边的哨兵是找小于基准值的，找到了就会停下来，如果左边的哨兵找到了比基准值大的值，两者交换位置，如果左边的哨兵没找到，
就会移动到和右边哨兵相同的位置，此时算法停止，基准交换位置。右边哨兵先动可以保证每次换过去的值小于基准值。

有两次换位，一次是没有相遇，两个元素交换位置，一次是相遇了，基准交换位置，需要注意不要漏写了
数组传过来的是引用
*/