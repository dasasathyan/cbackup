#include<stdio.h>
#include<string.h>
int main()
{
	int i,h,d,ch,qty,amt,rate;
	while (1)
	{
	printf("\nAvailable medicines\n ");
	printf("1.headache\n");
		printf("2.fever\n");
			printf("3.pain\n");
				printf("4.EXIT\n");
					printf("enter your choice\n");
					scanf("%d",&ch);
					switch(ch)

					{
						    case 1:
						    printf("\nHeadache are chosen\n");
					printf("\n1.saridon\n");
					printf("\n2.headset\n");
					printf("\n3.vasograine\n");
					printf("\n4.migranil\n");
					printf("\nenter your choice in headache tab\n");
					scanf("%d",&h);

							if(h==1)
							{

							printf("\nEnter the Quantity\n");
							scanf("%d",&qty);
							printf("\nenter the rate\n");
							scanf("%d",&rate);
							amt=qty*rate;
							printf("\nThe total amount is %d\n",amt);
							break;
						}
							if(h==2){

								printf("\nEnter the Quantity\n");
								scanf("%d",&qty);
								printf("\nenter the rate\n");
								scanf("%d",&rate);
								amt=qty*rate;
								printf("\nThe total amount is %d\n",amt);
							break;
						}


					        if(h==3){

										printf("\nEnter the Quantity\n");
										scanf("%d",&qty);
										printf("\nenter the rate\n");
										scanf("%d",&rate);
										amt=qty*rate;
										printf("\nThe total amount is %d\n",amt);
							break;
						}
							if(h==4){

								printf("\nEnter the Quantity\n");
								scanf("%d",&qty);
								printf("\nenter the rate\n");
								scanf("%d",&rate);
								amt=qty*rate;
								printf("\nThe total amount is %d\n",amt);

						}
							break;

								case 2:
								printf("\nFever tabs\n");
								printf("\n1.dolo650\n");
					            printf("\n2.anacin\n");

					printf("\nenter your choice in fever tab\n");
					scanf("%d",&d);
							if(d==1){

								printf("\nEnter the Quantity\n");
								scanf("%d",&qty);
								printf("\nenter the rate\n");
								scanf("%d",&rate);
								amt=qty*rate;
								printf("\nThe total amount is %d\n",amt);
							break;
						}
								if(d==2)
								{

									printf("\nEnter the Quantity\n");
									scanf("%d",&qty);
									printf("\nenter the rate\n");
									scanf("%d",&rate);
									amt=qty*rate;
									printf("\nThe total amount is %d\n",amt);
							break;
						}
					        break;

							      case 3:
							      printf(" \nPain tabs\n");
					printf("\n1.paracetamol\n");
					printf("\n2.Amrutanjan\n");
					printf("\n3.Fast relief\n");
					printf("\nenter your choice in pain tab\n");
					scanf("%d",&i);
							if(i==1){

								printf("\nEnter the Quantity\n");
								scanf("%d",&qty);
								printf("\nenter the rate\n");
								scanf("%d",&rate);
								amt=qty*rate;
								printf("\nThe total amount is %d\n",amt);
							break;
						}
								if(i==2){

									printf("\nEnter the Quantity\n");
									scanf("%d",&qty);
									printf("\nenter the rate\n");
									scanf("%d",&rate);
									amt=qty*rate;
									printf("\nThe total amount is %d\n",amt);
							break;
						}
						 if(i==3)
						{

							printf("\nEnter the Quantity\n");
							scanf("%d",&qty);
							printf("\nenter the rate\n");
							scanf("%d",&rate);
							amt=qty*rate;
							printf("\nThe total amount is %d\n",amt);
							break;
						}
						     break;

						            case 4:
						        	return(0);
						        	break;
					}
    }
getch();
return(1);
}
