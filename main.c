#include<stdio.h>
int main(void){
    int a,b,ans;
    printf("请输入第一个加数：");
    scanf("%d",&a);
    printf("请输入第二个加数：");
    scanf("%d",&b);
    printf("%d+%d=",a,b);
    scanf("%d",&ans);
    
    if(ans==a+b){
        printf("Right!\n");
    }else{
        printf("Not correct!Try again\n");
    }
}

#include<stdio.h>
int main(void){
    int a,b,ans;
    printf("请输入第一个加数：");
    scanf("%d",&a);
    printf("请输入第二个加数：");
    scanf("%d",&b);
    
    while(1){
        printf("%d+%d=",a,b);
        scanf("%d",&ans);
        if(ans==a+b){
            printf("Right!\n");
            break;
        }else{
            printf("Not correct!Try again!\n");
        }
    }
    return 0;
}

#include <stdio.h>

int main(void) {
    int a, b, ans, i;
    printf("请输入第一个加数: ");
    scanf("%d", &a);
    printf("请输入第二个加数: ");
    scanf("%d", &b);
    
    for (i = 0; i < 3; i++) {
        printf("%d + %d = ", a, b);
        scanf("%d", &ans);
        if (ans == a + b) {
            printf("Right!\n");
            break;
        } else {
            printf("Not correct! Try again!\n");
        }
    }
    if (i == 3) {
        printf("Not correct! You have tried three times! Test over!\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, ans, score = 0, wrong_count = 0;
    srand((unsigned int)time(NULL)); // 初始化随机数种子
    
    for (int i = 0; i < 10; i++) {
        a = rand() % 10 + 1; // 生成1~10的随机数
        b = rand() % 10 + 1;
        printf("%d + %d = ", a, b);
        scanf("%d", &ans);
        
        if (ans == a + b) {
            printf("Right!\n");
            score += 10;
        } else {
            printf("Not correct!\n");
            wrong_count++;
        }
    }
    printf("\n总分: %d 分，做错题数: %d 道\n", score, wrong_count);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, ans, correct, score = 0, wrong_count = 0;
    char ops[] = "+-*/"; // 运算类型：加、减、乘、除（这里用/代表整除）
    srand((unsigned int)time(NULL));
    
    for (int i = 0; i < 10; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        char op = ops[rand() % 4]; // 随机选运算符号
        
        // 计算正确答案
        switch (op) {
            case '+': correct = a + b; break;
            case '-': correct = a - b; break;
            case '*': correct = a * b; break;
            case '/': correct = a / b; break; // 整数整除
        }
        
        printf("%d %c %d = ", a, op, b);
        scanf("%d", &ans);
        
        if (ans == correct) {
            printf("Right!\n");
            score += 10;
        } else {
            printf("Not correct!\n");
            wrong_count++;
        }
    }
    printf("\n总分: %d 分，做错题数: %d 道\n", score, wrong_count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 掷两枚骰子，返回点数和
int roll_dice() {
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}

int main() {
    srand((unsigned int)time(NULL));
    int first_sum = roll_dice();
    printf("第一次掷骰子点数和: %d\n", first_sum);
    
    if (first_sum == 7 || first_sum == 11) {
        printf("游戏者获胜！\n");
    } else if (first_sum == 2 || first_sum == 3 || first_sum == 12) {
        printf("游戏者输！\n");
    } else {
        int target = first_sum;
        printf("需要继续掷出点数和 %d 才能获胜，最多掷7次\n", target);
        int win = 0;
        for (int i = 0; i < 7; i++) {
            int current_sum = roll_dice();
            printf("当前掷骰子点数和: %d\n", current_sum);
            if (current_sum == target) {
                win = 1;
                break;
            }
        }
        if (win) {
            printf("游戏者获胜！\n");
        } else {
            printf("投掷7次未掷到目标点数，游戏者输！\n");
        }
    }
    return 0;
}
