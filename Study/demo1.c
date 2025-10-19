//
//  demo1.c
//  Demo
//
//  Created by vvusu on 10/15/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void study_1(void){
    char a, b;
    int c;
    scanf("%c%c%d", &a, &b, &c);
    printf("'%c','%c',%d\n", a, b, c);
}

void study_2(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a = b != c;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    a = (b=c++*3);
    printf("a=%d, b=%d,c=%d\n", a,b,c); a = b > c > 2;
    printf("a=%d,b=%d,c=%d\n", a,b,c);
}
void study_3(void){
    char a,b;
    int c;
    scanf("%c%*c%c%c*c%d",&a,&b,&c);
    printf("'%c','%c',%d\n",a,b,c);
}
void study_4(void){
    char a,b;
    int c;
    scanf("%c%*c%c%*c%d",&a,&b,&c);
    printf("'%c','%c',%d\n",a,b,c);
}
void study_5(void){
    char a,b;
    int c;
    scanf("%c%*c%c%*c%d",&a,&b,&c);
    printf("'%c','%c',%d\n",a,b,c);
}
void study_6(void){
    char a,b;
    int c;
    scanf("%c%*c%c%*c%d",&a,&b,&c);
    printf("'%c','%c',%d\n",a,b,c);
}
// 演示基础数据类型和变量
void demo_basic_data_types(void) {
    printf("=== 基础数据类型演示 ===\n");
    
    // 整数类型
    int age = 25;
    short shortNum = 100;
    long longNum = 1000000L;
    long long veryLongNum = 1000000000000LL;
    
    printf("整数类型:\n");
    printf("int: %d\n", age);
    printf("short: %hd\n", shortNum);
    printf("long: %ld\n", longNum);
    printf("long long: %lld\n", veryLongNum);
    
    // 浮点类型
    float price = 19.99f;
    double pi = 3.14159265359;
    long double precisePi = 3.141592653589793238L;
    
    printf("\n浮点类型:\n");
    printf("float: %.2f\n", price);
    printf("double: %.10f\n", pi);
    printf("long double: %.15Lf\n", precisePi);
    
    // 字符类型
    char grade = 'A';
    char name[] = "张三";
    
    printf("\n字符类型:\n");
    printf("char: %c\n", grade);
    printf("字符串: %s\n", name);
    
    // 布尔类型（C99标准）
    _Bool isStudent = 1;  // 1表示true，0表示false
    printf("\n布尔类型:\n");
    printf("isStudent: %d\n", isStudent);
    
    printf("\n");
}

// 演示变量作用域
void demo_variable_scope(void) {
    printf("=== 变量作用域演示 ===\n");
    
    int globalVar = 100;  // 函数内局部变量
    
    {
        int blockVar = 200;  // 块作用域变量
        printf("块内变量: %d\n", blockVar);
        printf("函数内变量: %d\n", globalVar);
    }
    
    // printf("块变量: %d\n", blockVar);  // 错误！blockVar在此处不可见
    printf("函数内变量: %d\n", globalVar);
    
    printf("\n");
}

// 演示常量
void demo_constants(void) {
    printf("=== 常量演示 ===\n");
    
    // const常量
    const int MAX_SIZE = 100;
    const double PI = 3.14159;
    
    printf("const常量:\n");
    printf("MAX_SIZE: %d\n", MAX_SIZE);
    printf("PI: %.5f\n", PI);
    
    // #define宏定义
    #define BUFFER_SIZE 256
    #define GREETING "Hello, World!"
    
    printf("\n#define宏定义:\n");
    printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
    printf("GREETING: %s\n", GREETING);
    
    printf("\n");
}

// 演示运算符
void demo_operators(void) {
    printf("=== 运算符演示 ===\n");
    
    int a = 10, b = 3;
    
    // 算术运算符
    printf("算术运算符 (a=%d, b=%d):\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    
    // 关系运算符
    printf("\n关系运算符:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    
    // 逻辑运算符
    int x = 1, y = 0;
    printf("\n逻辑运算符 (x=%d, y=%d):\n", x, y);
    printf("x && y: %d\n", x && y);
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);
    
    // 位运算符
    int m = 5, n = 3;  // 5=101, 3=011
    printf("\n位运算符 (m=%d, n=%d):\n", m, n);
    printf("m & n: %d\n", m & n);  // 按位与
    printf("m | n: %d\n", m | n);  // 按位或
    printf("m ^ n: %d\n", m ^ n);  // 按位异或
    printf("~m: %d\n", ~m);        // 按位取反
    printf("m << 1: %d\n", m << 1); // 左移
    printf("m >> 1: %d\n", m >> 1); // 右移
    
    // 赋值运算符
    int c = 10;
    printf("\n赋值运算符 (c=%d):\n", c);
    c += 5; printf("c += 5: %d\n", c);
    c -= 3; printf("c -= 3: %d\n", c);
    c *= 2; printf("c *= 2: %d\n", c);
    c /= 4; printf("c /= 4: %d\n", c);
    
    printf("\n");
}

// 演示类型转换
void demo_type_conversion(void) {
    printf("=== 类型转换演示 ===\n");
    
    // 隐式类型转换
    int intVal = 10;
    float floatVal = 3.14f;
    double result = intVal + floatVal;  // int自动转换为float
    
    printf("隐式类型转换:\n");
    printf("int(%d) + float(%.2f) = double(%.2f)\n", intVal, floatVal, result);
    
    // 显式类型转换
    double pi = 3.14159;
    int truncatedPi = (int)pi;
    float roundedPi = (float)pi;
    
    printf("\n显式类型转换:\n");
    printf("double(%.5f) -> int: %d\n", pi, truncatedPi);
    printf("double(%.5f) -> float: %.5f\n", pi, roundedPi);
    
    printf("\n");
}

// 主函数
void run_demo1(void) {
    printf("========== Demo1: C语言基础语法 ==========\n\n");
    
//    demo_basic_data_types();
//    demo_variable_scope();
//    demo_constants();
//    demo_operators();
//    demo_type_conversion();
//    study_1();
//    study_2();
//    study_3();
    study_4();
//    study_5;
    study_6;
    printf("========== Demo1 结束 ==========\n\n");
}
