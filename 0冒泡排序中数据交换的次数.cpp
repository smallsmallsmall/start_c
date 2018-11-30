/*
冒泡排序中数据交换的次数（一维数组）
时间限制: 1 Sec  内存限制: 128 MB
提交: 1  解决: 1
[提交] [状态] [讨论版] [命题人:外部导入]
题目描述

听说过冒泡排序么？一种很暴力的排序方法。今天我们不希望你用它来排序，而是希望你能算出从小到大冒泡排序的过程中一共进行了多少次数据交换。

输入

输入数据的第一行为一个正整数 T ，表示有 T 组测试数据。
接下来T行，每行第一个整数N, 然后有N个整数，无序。0<N <= 100

输出

输出共 T 行。
每行一个整数，代表本行数据从小到大冒泡排序所进行的交换次数。

样例输入

3
5 1 2 3 4 5
4 5 3 7 1
2 2 1

样例输出

0
4
1
*/
#include "stdio.h"
int main() {
  int _,i,j, a[100],times=0,line;
  scanf("%d", &line);
  for (size_t i = 0; i < line; i++) {
    for ( i = 0; i < 100; i++) {
      if(scanf("%d", &a[i]) == '\n'){
        break;
      }
    }
    for (i = 0; i < 99; i++) {
      for (j = 0; j < 100-i; j++) {
        if (a[j]<a[j+1]) {
          _ = a[j];a[j] = a[j+1];a[j+1] =_;
          times += 1;
        }
      }
    }
    for ( i = 0; i < 5; i++) {
      printf("%d ", a[i]);
    }
  }
  return 0;
}
