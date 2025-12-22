#include<iostream>

/*
连续注释 haha
*/
int main(){
    std::cout << "Hello, World!" << std::endl;
    // int a,b;
    // std::cin>>a>>b;
    // std::cout<<a+b<<std::endl;
    // 打印1到10的和
    // int sum = 0;
    // int i = 1;
    // while(i<=10){
    //     sum += i;
    //     i++;
    // }
    // std::cout<<sum<<std::endl;
    // int i = 2, j = 0;
    // j = i++ ;
    // std::cout<<"j=i++"<<j<<std::endl;
    // i = 2,j = 0;
    // j = ++i;
    // std::cout<<"j=++i"<<j<<std::endl;

    // 使用while循环将50到100的整数相加
    // int i = 50;
    // int sum = 0;
    // while(i<=100){
    //     sum += i;
    //     ++i;
    // }
    // std::cout<<sum<<std::endl;
    // 提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
    int a = 0,b = 0;
    std::cout<<"输入两个整数，打印这两个整数所指定的范围内的所有整数："<<std::endl;
    std::cin>>a>>b;
    int min_val = std::min(a,b);
    int max_val = std::max(a,b);
    while(min_val<=max_val){
        std::cout<<min_val<<std::endl;
        min_val++;
    }
    return 0;
}