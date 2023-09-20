
/************************************************
*      Filename: device_manager.h
*        Author: litao.wang
*   Description: 
*        Create: 2018-06-14 16:02:35
* Last Modified: 2018-06-14 17:44:39
*************************************************/
#ifndef __STORAGE_DEVICE__H
#define __STORAGE_DEVICE__H

typedef int (*read_fp)(void);
struct storage_device{
	char name[20];
//	int (*read)(void);
	read_fp read;
};

extern int register_device(struct storage_device dev);
extern int read_device(char *device_name);

#endif

