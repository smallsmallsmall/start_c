#include "stdio.h"
/*
保留字母
时间限制: 1 Sec  内存限制: 12 MB
提交: 1  解决: 1
[提交] [状态] [讨论版] [命题人:外部导入]
题目描述

编一个程序，输入一个字符串，将组成字符串的所有非英文字母的字符删除后输出。

输入

一个字符串，长度不超过80个字符。

输出

删掉非英文字母后的字符串。

样例输入

abc123+xyz.5

样例输出

abcxyz
*/
int main() {
  char a;
  while((a = getchar()) != EOF){
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))putchar(a);
  }

  return 0;
}
