## C++学习第一天2025/12/12



## 1.函数的定义

函数的定义包括四部分：函数返回值类型（return type）、函数名（function name）、参数列表（parameter list）和函数体（function body）

```c
int main(){
	return 0;
}
```

主函数的返回值类型必须是int型，一般返回值为0表示成功

## 2.输入输出函数

```c
#include<iostream>
int main(){
    std::cout << "Hello, World!" << std::endl;
    // int a,b;
    // std::cin>>a>>b;
    // std::cout<<a+b<<std::endl;
    return 0;
}
// >>是输出运算符，左侧对象是ostream对象 右侧是一个表达式，会把右侧表达值赋值给左侧对象，返回值为左侧对象
```

## 3.while语句

`while` 循环的执行流程如下：

1. **条件判断**：首先，`while` 循环会判断条件表达式是否为 `true`。
2. **执行函数体**：如果条件为 `true`，则进入循环体并执行其中的代码。
3. **条件再判断**：每次执行完循环体的代码后，`while` 会再次判断条件表达式。如果条件依然为 `true`，则再次执行循环体。
4. **退出循环**：当条件表达式评估为 `false` 时，`while` 循环会跳出，结束循环。

## 4.注释

```c
// 这是第一种注释方法
/* 这是第二种注释方法*/
```

## 5.自增运算符

++i 先自增，再使用i

i++ 先使用i，再自增

```c
    int i = 2, j = 0;
    j = i++ ;
    std::cout<<"j=i++"<<j<<std::endl;
    i = 2,j = 0;
    j = ++i;
    std::cout<<"j=++i"<<j<<std::endl;

// 打印输出
j=i++2
j=++i3
```























