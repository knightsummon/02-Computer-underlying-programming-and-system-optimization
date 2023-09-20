
/************************************************
*      Filename: module.c
*        Author: litao.wang
*   Description: 
*        Create: 2018-06-14 15:44:48
* Last Modified: 2018-06-14 15:45:49
*************************************************/

void runcallback(void (*fp)(void))
{
	fp();
}
