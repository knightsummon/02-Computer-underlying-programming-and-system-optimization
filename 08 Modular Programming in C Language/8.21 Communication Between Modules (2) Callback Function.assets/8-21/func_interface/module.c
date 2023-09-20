
/************************************************
*      Filename: module.c
*        Author: litao.wang
*   Description: 
*        Create: 2018-01-12 00:07:13
* Last Modified: 2018-06-14 21:24:58
*************************************************/
#include<stdio.h>

int send_data(char *buf,int len)
{
	char data[100];
	int i;
	for(i=0;i<len;i++)
		data[i] = buf[i];
	for(i=0;i<len;i++)
		printf("received data[%d] = %d\n",i,data[i]);
	return len;
}

