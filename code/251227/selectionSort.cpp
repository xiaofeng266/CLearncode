#include<iostream>
#include<vector>

void selectionSort(std::vector<int> &nums){
    int n = nums.size();
    for(int i = 0; i < n-1; i++){
        int m_min = i;  // 每轮开始时，假设当前位置就是最小值
        for(int j = i+1; j < n; j++){
            if(nums[m_min] > nums[j]){
                m_min = j;
            }
        }
        std::swap(nums[i],nums[m_min]);
    }
}

/*
选择排序：
1.两层for循环，时间复杂度是O（n2），
2.外层for循环是n-1，因为最后一个n个元素只需要遍历n-1论，最后一个元素自然有序
3.最小值在第一层for循环内部，因为每一轮的最小值都要重置

*/