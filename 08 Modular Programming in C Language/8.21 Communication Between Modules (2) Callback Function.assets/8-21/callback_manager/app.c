
/************************************************
*      Filename: app.c
*        Author: litao.wang
*   Description: 
*        Create: 2018-06-14 15:57:35
* Last Modified: 2018-06-14 17:04:11
*************************************************/
#include<stdio.h>

#include"device_manager.h"


int sd_read(void)
{
	printf("sd read data...\n");
	return 10;
}

int udisk_read(void)
{
	printf("udisk read data...\n");
	return 20;
}

struct storage_device sd={
	"sdcard",sd_read
};
struct storage_device udisk={
	"udisk",udisk_read
};

int main(void)
{
	register_device(sd);
	register_device(udisk);

	read_device("udisk");
	read_device("udisk");
	read_device("uk");
	read_device("sdcard");
	read_device("sdcard");
	return 0;
}
