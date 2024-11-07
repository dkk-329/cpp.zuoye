#include <iostream>
#include <cmath> // 为了使用sqrt函数

class Vector {
private:
    double x;
    double y;

public:
    // 构造函数，用于初始化成员变量x和y
    Vector(double x_val, double y_val) : x(x_val), y(y_val) {}

    // add方法，接受另一个Vector对象作为参数，返回一个新的Vector对象，表示两个向量的和
    Vector add(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
     }

    // print方法，用于打印向量的分量
    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    // dir方法，求取向量的模长并打印
    void dir() const {
        double magnitude = std::sqrt(x * x + y * y);
        std::cout << "Magnitude: " << magnitude << std::endl;
    }
};

int main() {
    // 创建两个Vector对象
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);

    // 打印v1和v2
    std::cout << "v1: ";
    v1.print();
    std::cout << "v2: ";
    v2.print();

    // 计算v1和v2的和，并打印结果
    Vector v3 = v1.add(v2);
    std::cout << "v1 + v2: ";
    v3.print();

    // 打印v1和v2的模长
    std::cout << "Direction of v1: ";
    v1.dir();
    std::cout << "Direction of v2: ";
    v2.dir();

    return 0;
}