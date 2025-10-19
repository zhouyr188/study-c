//
//  demo2.c
//  Demo
//
//  Created by vvusu on 10/15/25.
//

#include <stdio.h>
#include <stdlib.h>

// 演示if-else条件语句
void demo_if_else(void) {
    printf("=== if-else条件语句演示 ===\n");
    
    int score = 85;
    
    // 基本if语句
    if (score >= 90) {
        printf("成绩 %d: 优秀\n", score);
    } else if (score >= 80) {
        printf("成绩 %d: 良好\n", score);
    } else if (score >= 70) {
        printf("成绩 %d: 中等\n", score);
    } else if (score >= 60) {
        printf("成绩 %d: 及格\n", score);
    } else {
        printf("成绩 %d: 不及格\n", score);
    }
    
    // 嵌套if语句
    int age = 20;
    char gender = 'M';
    
    printf("\n嵌套条件判断 (年龄: %d, 性别: %c):\n", age, gender);
    if (age >= 18) {
        if (gender == 'M') {
            printf("成年男性\n");
        } else if (gender == 'F') {
            printf("成年女性\n");
        } else {
            printf("成年其他\n");
        }
    } else {
        printf("未成年\n");
    }
    
    printf("\n");
}

// 演示switch语句
void demo_switch() {
    printf("=== switch语句演示 ===\n");
    
    int day = 3;
    
    printf("今天是星期%d\n", day);
    switch (day) {
        case 1:
            printf("星期一 - 新的一周开始\n");
            break;
        case 2:
            printf("星期二 - 工作第二天\n");
            break;
        case 3:
            printf("星期三 - 周中\n");
            break;
        case 4:
            printf("星期四 - 接近周末\n");
            break;
        case 5:
            printf("星期五 - 最后工作日\n");
            break;
        case 6:
        case 7:
            printf("周末 - 休息时间\n");
            break;
        default:
            printf("无效的日期\n");
            break;
    }
    
    // 字符switch
    char grade = 'B';
    printf("\n等级 %c:\n", grade);
    switch (grade) {
        case 'A':
        case 'a':
            printf("优秀\n");
            break;
        case 'B':
        case 'b':
            printf("良好\n");
            break;
        case 'C':
        case 'c':
            printf("中等\n");
            break;
        case 'D':
        case 'd':
            printf("及格\n");
            break;
        case 'F':
        case 'f':
            printf("不及格\n");
            break;
        default:
            printf("无效等级\n");
            break;
    }
    
    printf("\n");
}

// 演示for循环
void demo_for_loop() {
    printf("=== for循环演示 ===\n");
    
    // 基本for循环
    printf("1到10的数字:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // 倒序循环
    printf("\n10到1的数字:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    
    // 步长循环
    printf("\n偶数 (2到20):\n");
    for (int i = 2; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    // 嵌套for循环 - 乘法表
    printf("\n九九乘法表:\n");
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d×%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }
    
    printf("\n");
}

// 演示while循环
void demo_while_loop() {
    printf("=== while循环演示 ===\n");
    
    // 基本while循环
    int count = 1;
    printf("while循环 - 1到5:\n");
    while (count <= 5) {
        printf("%d ", count);
        count++;
    }
    printf("\n");
    
    // 计算阶乘
    int n = 5;
    int factorial = 1;
    int temp = n;
    printf("\n计算 %d!:\n", n);
    while (temp > 0) {
        factorial *= temp;
        temp--;
    }
    printf("%d! = %d\n", n, factorial);
    
    // 用户输入验证
    printf("\n模拟用户输入验证:\n");
    int input = 0;
    int attempts = 0;
    while (input != 42 && attempts < 3) {
        attempts++;
        printf("尝试 %d: 请输入数字42: ", attempts);
        // 模拟输入，这里直接赋值
        input = (attempts == 2) ? 42 : 10;  // 第二次尝试成功
        printf("%d\n", input);
        if (input != 42) {
            printf("错误！请重试。\n");
        }
    }
    
    if (input == 42) {
        printf("正确！\n");
    } else {
        printf("尝试次数过多！\n");
    }
    
    printf("\n");
}

// 演示do-while循环
void demo_do_while_loop() {
    printf("=== do-while循环演示 ===\n");
    
    // 基本do-while循环
    int num = 1;
    printf("do-while循环 - 1到5:\n");
    do {
        printf("%d ", num);
        num++;
    } while (num <= 5);
    printf("\n");
    
    // 菜单选择模拟
    printf("\n模拟菜单选择:\n");
    int choice = 0;
    int menuCount = 0;
    do {
        menuCount++;
        printf("菜单显示次数: %d\n", menuCount);
        printf("1. 选项1\n");
        printf("2. 选项2\n");
        printf("3. 退出\n");
        printf("请选择 (1-3): ");
        
        // 模拟用户选择，第3次选择退出
        choice = (menuCount == 3) ? 3 : 1;
        printf("%d\n", choice);
        
        if (choice == 1) {
            printf("执行选项1\n");
        } else if (choice == 2) {
            printf("执行选项2\n");
        } else if (choice == 3) {
            printf("退出程序\n");
        } else {
            printf("无效选择，请重试\n");
        }
        
    } while (choice != 3);
    
    printf("\n");
}

// 演示break和continue
void demo_break_continue() {
    printf("=== break和continue演示 ===\n");
    
    // break演示 - 找到第一个偶数
    printf("寻找第一个偶数 (1-10):\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("找到第一个偶数: %d\n", i);
            break;  // 找到后立即退出循环
        }
        printf("检查 %d...\n", i);
    }
    
    // continue演示 - 跳过奇数
    printf("\n打印偶数 (1-10):\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;  // 跳过奇数
        }
        printf("%d ", i);
    }
    printf("\n");
    
    // 嵌套循环中的break
    printf("\n嵌套循环中的break:\n");
    for (int i = 1; i <= 3; i++) {
        printf("外层循环 i=%d:\n", i);
        for (int j = 1; j <= 5; j++) {
            if (j == 3) {
                printf("  内层循环遇到j=3，break\n");
                break;  // 只跳出内层循环
            }
            printf("  j=%d ", j);
        }
        printf("\n");
    }
    
    printf("\n");
}

// 演示goto语句（不推荐使用，但需要了解）
void demo_goto() {
    printf("=== goto语句演示 ===\n");
    printf("注意：goto语句不推荐使用，这里仅作演示\n");
    
    int i = 0;
    
    loop_start:
    if (i < 5) {
        printf("goto循环: %d\n", i);
        i++;
        goto loop_start;
    }
    
    printf("goto循环结束\n");
    
    // 错误处理中的goto使用
    printf("\ngoto在错误处理中的应用:\n");
    int result = 0;
    
    // 模拟一些操作
    result = 10;
    if (result < 0) {
        goto error_handler;
    }
    
    result = 20;
    if (result < 0) {
        goto error_handler;
    }
    
    printf("所有操作成功，结果: %d\n", result);
    goto cleanup;
    
    error_handler:
    printf("发生错误，执行清理\n");
    
    cleanup:
    printf("程序清理完成\n");
    
    printf("\n");
}

// 主函数
void run_demo2() {
    printf("========== Demo2: C语言控制流 ==========\n\n");
    
    demo_if_else();
    demo_switch();
    demo_for_loop();
    demo_while_loop();
    demo_do_while_loop();
    demo_break_continue();
    demo_goto();
    
    printf("========== Demo2 结束 ==========\n\n");
}
