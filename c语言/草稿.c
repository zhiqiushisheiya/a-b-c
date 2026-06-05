#include <stdio.h>
#include <string.h>
// 1. 定义枚举类型：菜单功能选项
typedef enum {
    AVG,   // 计算平均分
	SCORE, // 按成绩排序
    STU, // 查找学生
    SYSTEM // 退出系统
} MenuOption;
// 2. 定义登录用户结构体
typedef struct {
    char id[20];     // 用户ID
    char pwd[20];    // 用户密码
} Login;

// 3. 定义学生信息结构体
typedef struct {
    char idNumber[20]; // 学生学号
    char name[20];     // 学生姓名
    float score;       // 学生成绩
} Student;
// 登录函数
int login(Login user) {
    char inputId[20], inputPwd[20];
    printf("===== 系统登录 =====\n");
    printf("请输入用户ID：");
    scanf("%s", inputId);
    printf("请输入用户密码：");
    scanf("%s", inputPwd);
    // 对比输入的账号密码与初始值
    if (strcmp(inputId, user.id) == 0 && strcmp(inputPwd, user.pwd) == 0) {
        printf("登录成功！\n");
        return 1;
    } else {
        printf("账号或密码错误，登录失败！\n");
        return 0;
    }
}
// 计算平均分函数
void calculateAverage(Student stuArr[], int n) {
    if (n == 0) {
        printf("暂无学生数据！\n");
        return;
    }
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += stuArr[i].score;
    }
    printf("学生成绩平均分：%.2f\n", sum / n);
}

// 按成绩降序排序函数
void sortByScore(Student stuArr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (stuArr[j].score < stuArr[j + 1].score) {
                // 交换两个学生信息
                Student temp = stuArr[j];
                stuArr[j] = stuArr[j + 1];
                stuArr[j + 1] = temp;
            }
        }
    }
    printf("已按成绩降序排序完成！\n");
}
// 查找学生函数：支持按学号或姓名查找
void searchStudent(Student stuArr[], int n) {
    int choice;
    char key[20];
    printf("请选择查找方式：1-按学号  2-按姓名：");
    scanf("%d", &choice);
    printf("请输入查找关键字：");
    scanf("%s", key);
    int found = 0; // 0表示未找到，1表示找到
    printf("===== 查找结果 =====\n");
    printf("学号\t\t姓名\t\t成绩\n");
    for (int i = 0; i < n; i++) {
        if ((choice == 1 && strcmp(stuArr[i].idNumber, key) == 0) ||
            (choice == 2 && strcmp(stuArr[i].name, key) == 0)) {
            printf("%s\t\t%s\t\t%.2f\n", stuArr[i].idNumber, stuArr[i].name, stuArr[i].score);
            found = 1;
            break; // 假设学号唯一、姓名不重复
        }
    }
    if (!found) { // !0 等价于真，即未找到
        printf("未找到该学生！\n");
    }
}
// 显示菜单函数
void showMenu() {
    printf("\n 学生成绩管理菜单 \n");
    printf("1. 计算学生成绩平均分\n");
    printf("2. 按成绩降序排序\n");
    printf("3. 查找学生\n");
    printf("4. 退出系统\n");
    printf("请输入功能选项(1-4)：");
}
int main() {
    // 初始化登录用户
    Login admin = {"hdjt2025", "73552266700"};
    // 初始化学生数组
    Student students[] = {
        {"2025001", "张三", 87},
        {"2025002", "李四", 92},
        {"2025003", "王五", 78},
        {"2025004", "赵六", 95}
    };
    int stuNum = sizeof(students) / sizeof(students[0]);
    // 登录验证，失败则退出程序
    if (login(admin) == 0) {
        return 0;
    }
    // 功能选择循环
    int input;
    while (1) { // 无限循环，直到选择退出
        showMenu();
        scanf("%d", &input);
        // 将输入的整数转换为枚举类型
        MenuOption option = (MenuOption)(input - 1);

        switch (option) {
            case  AVG:
                calculateAverage(students, stuNum);
                break;
            case SCORE:
                sortByScore(students, stuNum);
                break;
            case STU:
                searchStudent(students, stuNum);
                break;
            case SYSTEM:
                printf("退出系统，程序结束！\n");
                return 0;
            default:
                printf("输入无效，请重新选择！\n");
        }
    }
    return 0;
}
