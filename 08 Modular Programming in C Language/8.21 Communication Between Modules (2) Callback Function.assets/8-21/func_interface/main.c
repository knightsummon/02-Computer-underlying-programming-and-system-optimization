
/************************************************
*      Filename: main.c
*        Author: litao.wang
*   Description: 
*        Create: 2018-01-12 00:05:46
* Last Modified: 2018-06-14 21:25:24
*************************************************/
#include<stdio.h>

int send_data(char *buf,int len);

int main(void)
{
	char buffer[10]={1,2,3,4,5,6,7,8,9,0};
	int return_data;

	return_data = send_data(buffer,10);
	printf("send data len:%d\n",return_data);

	return 0;
}
