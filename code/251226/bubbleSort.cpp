#include<iostream>
#include<vector>

void BubbleSort(std::vector<int> &nums){
    int n = nums.size();
    int temp;
    // 优化：n个元素只需要n-1轮排序
    for(int i=0; i < n-1; i++){
        for(int j=0; j < n-i-1; j++){
            if(nums[j] > nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

/*
冒泡排序
1.两层for循环，时间复杂度是O（n2）
2.交换的次数很多，是稳定排序
3.外层for循环控制内层训练交换的终止位置，即轮数。
每一轮冒泡排序会把当前未排序部分的最大值“冒泡”到末尾。n 个元素中，n-1 个元素被确定位置后，最后一个元素自然已在正确位置，因此只需 n-1 轮。
4.内层for循环比较相邻元素大小交换位置，j < n-i-1 的含义：
   - n-i 表示当前未排序部分的长度（末尾已确定 i 个最大值）
   - -1 是因为比较 nums[j] 和 nums[j+1]，j 最大为 n-i-2 时，j+1 为 n-i-1，正好是未排序部分的最后一个位置
   这样既防止了数组越界，也避免比较已确定位置的元素
*/