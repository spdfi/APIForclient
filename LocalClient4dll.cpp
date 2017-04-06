//#include <stdio.h>
//#include <string>
//#include <stdlib.h>
//#include <sys/time.h>
#include "smxclient.h"

int main()
{
	char *char_cust = "Quake3Context";

	//SPT = Service Start Time
	//SMX_Begin_SST();
	//SMX_End_SST();
	
	// SPT = Service Processing Time
	//SMX_Begin_SPT();
	//SMX_End_SPT();

	// CUT = Context Update Time.
	//SMX_Begin_CUT();
	//SMX_End_CUT();

	//$ CST = Custom Update .
	SMX_Begin_CUS();
	SMX_End_CUS(char_cust);

}