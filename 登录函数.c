/*
用户输入密码 
如果成功， 返回1
如果3次，不成功，返回0
*/
#include <stdio.h>
int login();
int login(int password)
{

}
int main()
{
    int passWord = 0;
    scanf("%d",&passWord);
    if(login())
    {
        printf("password correct!\n");
    }
    else
    {
        printf("password wrong\n");
    }
    return 0;
}
