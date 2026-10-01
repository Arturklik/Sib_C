#include <stdio.h>

int main(void)
{
	char name[] = "Артур";
	char group[] = "ИС-642";
	char device_name[] = "MacBook";

	int len_name = sizeof(name)/2;
	int len_group_device_name = (sizeof(group)/2)+sizeof(device_name)+2;
	
	printf("%s\t{%d}\n%s\t%s\t{%d}\n",
	name, len_name, group, device_name, len_group_device_name);
	return 0;
}
