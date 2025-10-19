//
//  main.c
//  Demo
//
//  Created by vvusu on 10/15/25.
//

#include <stdlib.h>
#include <stdio.h>

// 函数声明
void run_demo1(void);
//void run_demo2(void);
//void run_demo3(void);
//void run_demo4(void);
//void run_demo5(void);

int main(int argc, const char * argv[]) {
    printf("========================================\n");
    printf("        C语言学习Demo程序\n");
    printf("========================================\n\n");
    
    // 运行所有demo
    run_demo1();  // 基础语法
//    run_demo2();  // 控制流
//    run_demo3();  // 函数
//    run_demo4();  // 数组和指针
//    run_demo5();  // 结构体和文件操作
    
    printf("========================================\n");
    printf("        所有Demo演示完成！\n");
    printf("========================================\n");
    
    return EXIT_SUCCESS;
}
