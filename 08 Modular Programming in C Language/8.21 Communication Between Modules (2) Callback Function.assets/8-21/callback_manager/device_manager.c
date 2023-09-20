
/************************************************
*      Filename: device_manager.c
*        Author: litao.wang
*   Description: 
*        Create: 2018-06-14 15:59:06
* Last Modified: 2018-06-14 17:20:01
*************************************************/
#include<stdio.h>
#include<string.h>
#include"device_manager.h"

struct storage_device device_list[100]={0};
unsigned char num;

int register_device(struct storage_device dev)
{
	device_list[num++] = dev;
	return 0;
}

int read_device(char *device_name)
{
	int i;
	for(i=0;i<100;i++)
	{
		if (!strcmp(device_name,device_list[i].name))
			break;
	}
	if(i==100)
	{
		printf("read error! can't find device: %s\n",device_name);
		return -1;
	}
	return device_list[i].read();
}
