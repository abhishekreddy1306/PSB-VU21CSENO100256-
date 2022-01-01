#include<stdio.h>
main()
{
	int a;
	printf("Enter ");
	scanf("%d",&a);
	switch(a>0)
	{
		case 1:
			printf("%d is positive",a);
			case 0:
				switch(a<0)
			{
				case 1:
					printf("negative");
					break;
					case 0:
						printf("zero");
				
			}
				break;
	}

}
