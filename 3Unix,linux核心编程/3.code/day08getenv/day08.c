/*
	环境表函数演示
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv,char** env)
{
	extern char** environ;
	printf("验证主函数第3个参数是不是环境变量：%p %p\n",env,environ);
	printf("----------------------------------------------\n");
	char *value = getenv("PWD");
	printf("value=%s\n",value);
	putenv("VAR=ABC");
	printf("VAR环境表变量的值是%s\n",getenv("VAR"));
	putenv("VAR=123");
	printf("VAR环境表变量的值是%s\n",getenv("VAR"));
	setenv("VAR","456",0);
	printf("VAR环境表变量的值是%s\n",getenv("VAR"));
	setenv("VAR","789",1);
	printf("VAR环境表变量的值是%s\n",getenv("VAR"));
	return 0;
}
