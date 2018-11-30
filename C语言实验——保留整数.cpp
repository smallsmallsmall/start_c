// C语言实验——保留整数
// 时间限制: 1 Sec  内存限制: 12 MB
// 提交: 69  解决: 56
// [提交] [状态] [讨论版] [命题人:外部导入]
// 题目描述
//
// 输入一个字符串str1，把其中的连续非数字的字符子串换成一个‘*’，
// 存入字符数组str2 中，所有数字字符也必须依次存入 str2 中。输出str2。
//
// 输入
//
// 输入为一行字符串str1，其中可能包含空格。字符串长度不超过80个字符。
//
// 输出
//
// 输出处理好的字符串str2。
//
// 样例输入
//
// $Ts!47&*s456  a23* +B9k
//
// 样例输出
//
// *47*456*23*9*
#include "stdio.h"

int main(int argc, char const *argv[]) {
  char str1[80],str2[80];
  int i,j=0;

  gets(str1);
  for (i = 0; str1[i] != '\0'; i++) {
    if (str1[i]>='0' && str1[i]<='9') {
      str2[j] = str1[i];
      j++;
    }
    else if (j>0 && str2[j-1] == '*') {
      ;
    }
    else{
      str2[j] = '*';
      j++;
    }
  }
  str2[j] = '\0';
  puts(str2);

  return 0;
}
