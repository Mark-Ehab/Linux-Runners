#include <stdio.h>
#include <string.h>
#include "read_wrapper.h"
#include "print_wrapper.h"

int main()
{
    char commandBuffer[1024]="";
    char exitComm[5]="exit";
   while (1) {
	read_string(commandBuffer);
/*	printf("%zu\n",strlen(commandBuffer));
	printf("%zu\n",strlen(exitComm)); */
	commandBuffer[strcspn(commandBuffer,"\n")]= 0 ;
	if (!strcmp(commandBuffer, exitComm)) {
	    break;
	} else {
            commandBuffer[strcspn(commandBuffer,"\n")]= '\n' ;
	    print_string(commandBuffer);
	}
    }

    print_string("Good Bye :)\n");
    return 0;
}
