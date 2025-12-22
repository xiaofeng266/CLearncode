// std::cin>> 内部实现原理演示
// 这是简化版本，帮助理解实际实现

#include <iostream>
#include <cstdio>

// 简化版的 istream 类（实际 std::istream 更复杂）
class SimpleIStream {
private:
    // 内部缓冲区
    char buffer[1024];
    int pos;
    
public:
    SimpleIStream() : pos(0) {}
    
    // >> 操作符重载 - 针对 int 类型
    SimpleIStream& operator>>(int& value) {
        // 1. 跳过空白字符（空格、制表符、换行等）
        while (buffer[pos] == ' ' || buffer[pos] == '\t' || buffer[pos] == '\n') {
            pos++;
        }
        
        // 2. 读取数字字符并转换为整数
        value = 0;
        bool negative = false;
        
        if (buffer[pos] == '-') {
            negative = true;
            pos++;
        }
        
        while (buffer[pos] >= '0' && buffer[pos] <= '9') {
            value = value * 10 + (buffer[pos] - '0');
            pos++;
        }
        
        if (negative) {
            value = -value;
        }
        
        // 3. 返回自身引用，支持链式调用
        return *this;
    }
    
    // >> 操作符重载 - 针对 double 类型
    SimpleIStream& operator>>(double& value) {
        // 类似实现，但处理小数点和科学计数法
        // ...
        return *this;
    }
    
    // 从标准输入读取数据到缓冲区
    void readInput() {
        std::fgets(buffer, sizeof(buffer), stdin);
        pos = 0;
    }
};

// 实际 std::cin>> 的底层实现（简化说明）
void explain_std_cin() {
    /*
     * std::cin>>a 的实际执行流程：
     * 
     * 1. std::cin 是 std::istream 类型的全局对象
     * 2. 当执行 std::cin>>a 时，调用 istream::operator>>(int&)
     * 3. 内部实现大致如下：
     *    - 检查输入缓冲区是否有数据
     *    - 如果没有，从标准输入（stdin）读取数据
     *    - 跳过前导空白字符
     *    - 根据目标类型解析数据（int/double/string等）
     *    - 将解析结果赋值给变量
     *    - 返回 istream& 引用，支持链式调用
     * 
     * 4. 链式调用 std::cin>>a>>b 的原理：
     *    - std::cin>>a 返回 std::cin 的引用
     *    - 然后继续调用 std::cin>>b
     *    - 等价于 (std::cin>>a)>>b
     */
}

int main() {
    int a, b;
    
    // std::cin>>a>>b 的执行过程：
    // 1. 调用 std::cin.operator>>(a)
    // 2. 返回 std::cin 的引用
    // 3. 继续调用返回的 std::cin.operator>>(b)
    
    std::cout << "请输入两个整数: ";
    std::cin >> a >> b;  // 链式调用
    
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    return 0;
}

