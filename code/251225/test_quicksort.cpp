#include <vector>
#include <iostream>
using namespace std;

void quickSort(int left, int right, std::vector<int>& nums){
    if(left > right){
        return;
    }
    int temp = nums[left];  // 哨兵
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

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    cout << "排序前: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    quickSort(0, arr.size()-1, arr);
    
    cout << "排序后: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    
    return 0;
}

