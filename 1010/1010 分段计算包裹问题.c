#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int wei;

	scanf("%d",&wei);
	
	if (wei>30) {
		printf("Fail");
	}
	else if (wei<=10 && wei>0)
		printf("%.2f",wei*0.8+0.2);	
	else if (wei<=20 && wei>10)
		printf("%.2f",(wei-10)*0.75+10*0.8+0.2);	
	else if (wei<=30 && wei>20)
		printf("%.2f",(wei-20)*0.7+10*0.75+10*0.8+0.2);	
	
	return 0;
}

