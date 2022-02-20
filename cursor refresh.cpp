#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")    

int main()  
{     
    SystemParametersInfo(SPI_SETMOUSETRAILS,0,NULL,SPIF_SENDCHANGE);                             
    SystemParametersInfo(SPI_SETMOUSETRAILS,2,NULL,SPIF_SENDCHANGE);
	return 0; 
}
