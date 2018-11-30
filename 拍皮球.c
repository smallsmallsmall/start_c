#include "stdio.h"
/*
拍皮球
时间限制: 1 Sec  内存限制: 12 MB
提交: 1  解决: 0
[提交] [状态] [讨论版] [命题人:外部导入]
题目描述

小瑜3岁了，很喜欢玩皮球，看来今后喜欢打篮球的^_^。最近她发现球从手中落下时，每次落地后反跳回原高度的一半，再落下，每次球落地时数球跳了几次，数到n次时爸爸在边上喊停，问小瑜现在球到底总共走了多少距离，小瑜故作沉思状，爸爸又问接下来小球能跳多高啊，小瑜摇摇头，心想还没跳我怎么知道啊，难道爸爸是神啊！这时的你在边上出主意想给小瑜写个程序计算一下，因此任务就交给你啦！假设球的初始高度为h，计算第n次落地时球经过的距离，以及落地后反弹能有多高。

输入

输入数据有多组，第一行为数据的组数t，下面t行为t组数据，每行有两个数h和n,分别用空格分隔。

输出

输出第n次反弹时球经过的距离和球最后的高度，保留小数点后2位。

样例输入

2
100 1
100.0 2

样例输出

100.00 50.00
200.00 25.00
*/
float power(float base, float n){//power的参数只对内部有效
//函数圆括号出现的称为形参,调用中出现的为实参
  float i, p;

  p = 1;
  for ( i = 1; i <= n; ++i)
    p = p * base;
  return p;

}
int main() {
  int n,i,j,t;
  float h,h_, s=0.0;
  scanf("%d", &t);
  for (j = 0; j < t; j++) {
    scanf("%f %d",&h,&n);
    for (i = 0; i < n; i++) {
      s += h *power(1/2,i);
      h_ = (power(1.0/2.0,i+1)) * h;
    }

    printf("%.2f %.2f\n",s,h_);
  }

  return 0;
}
