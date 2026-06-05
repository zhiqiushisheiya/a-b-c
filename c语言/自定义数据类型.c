#include <stdio.h>
#include <string.h>
enum{
	AVG,SCORE,STU
}menuoption;
struct{
	char user[20];
	char passward[20];
}Login;
struct{
	char name[20];
	char idnumber[20];
	float score;
}Student;
int login() {
	int n=0;
	char user[20]="2025123";
	char password[20]="73552266700";
	char inuser[20] ,inpassword[20];
	printf("-登陆验证-\n");
	while(n<5){	
	    printf("请输入用户名:");
	    scanf("%s",inuser);
	    printf("请输入密码:");
	    scanf("%s",inpassword);
	    if(strcmp(inuser,user)==0&&strcmp(inpassword,password)==0){
		    printf("登陆成功！\n");break;
      	}
	    else{
		printf("用户名或密码错误，登录失败！\n");n++;
    	}
	}
	if(n==5)printf("错误次数过多，账号已锁定！");
	return 0;
}
void menu(){
	int choice;
	printf("请选择你的功能\n");
	printf("1.按成绩高低排序\n");
	printf("2.计算平均值\n");
	printf("3.查找学生\n");
	return 0;
}
int main(){
	login();
	int input;
	while(1){
		menu();
		scanf("%d",&input);
		menuoption option=(menuoption)(input-1);
		switch(option){
			case AVG:
		}
	}
	return 0;
}
