#include <stdio.h>

int main()
{
    unsigned int ip1, ip2, ip3, ip4;
    unsigned long int ip32;

	printf("Input your IP adress: ");
    
    if(scanf("%u %u %u %u", &ip1, &ip2, &ip3, &ip4) !=4)
    {
        printf("Incorrect IP Address\n");
        
        return 1;
    }
    
    if(ip1 < 255 || ip2 < 255 || ip3 < 255 || ip4 < 255)
    {
        ip32 = (ip1 * 256 *256 * 256) + (ip2 * 256 * 256) + (ip3 * 256) + ip4;    
    
        printf("Human-readable IP address is: %u.%u.%u.%u\n", ip1, ip2, ip3, ip4);
        printf("IP address as a 32-bit number: %lu\n", ip32);
    }
    else
    {
        printf("Incorrect IP Adress\n");
        
        return 1;
    }    
	return 0;
}