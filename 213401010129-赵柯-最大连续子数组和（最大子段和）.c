#include <stdio.h>  
  
// 函数用于返回给定数组的最大子段和  
int maxSubArraySum(int a[], int size) {  
    int max_so_far = a[0]; // 初始化最大子段和为数组的第一个元素  
    int curr_max = a[0];   // 初始化当前子段和为数组的第一个元素  
  
    for (int i = 1; i < size; i++) {  
        // 如果当前元素加上之前的子段和比当前元素本身大，则更新当前子段和  
        curr_max = (a[i] > curr_max + a[i]) ? a[i] : curr_max + a[i];  
  
        // 更新最大子段和  
        if (curr_max > max_so_far)  
            max_so_far = curr_max;  
    }  
  
    // 如果所有数都是负数，返回0  
    return (max_so_far > 0) ? max_so_far : 0;  
}  
  
int main() {  
    int n;  
    printf("请输入数组的长度n: ");  
    scanf("%d", &n);  
  
    int a[n];  
    printf("请输入%d个整数:\n", n);  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &a[i]);  
    }  
  
    int max_sum = maxSubArraySum(a, n);  
    printf("最大子段和为: %d\n", max_sum);  
  
    return 0;  
}