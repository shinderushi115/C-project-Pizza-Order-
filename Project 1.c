/* WAP to input Pizza Size and qtys. Define a Menu which contains Pizza size and Price.
   Read number of qtys and display invoice details to customer 
   1.Chocolate Pizza (Rs.250)
   2.Extra Cheesy Pizza (Rs.350)  
   3.Tomato Salsa Pizza (Rs.150)  
   4.Extra Spicy Pizza (Rs.400)  
   5.Olive and Herby Pizza (Rs.550)
   */  

#include<stdio.h>
void main()
{
	int choice,qty,total;
	char size[20],name[20],address[30];
	long no;
	
	printf("\n***********************************************************************************************");
	printf("\n                                        PIZZA MENU");
	printf("\n***********************************************************************************************");
	printf("\n Sr.No.       Pizza                                Price");
	printf("\n                                         Small     Medium    Large");
	printf("\n  1.          Chocolate Pizza             250       300       350 ");
	printf("\n  2.          Extra Cheesy Pizza          350       400       450 ");
	printf("\n  3.          Tomato Salsa Pizza          150       200       250 ");
	printf("\n  4.          Extra Spicy Pizza           400       450       500 ");
	printf("\n  5.          Olive and Herby Pizza       550       600       650 ");
	printf("\n***********************************************************************************************");
	printf("\nEnter Your Favirote Pizza :");
	scanf("%d", &choice);
	
    switch(choice)
    {
    	case 1:
    		printf("Chocolate Pizza");
    		printf("\nEnter Size : ");
    		scanf("%s",&size);
    		printf("Quantity :");
			scanf("%d",&qty);
			if(strcmp(size,"Small")==0)
			{
				printf("Size : Small");
				total=qty*250;
			}
			else if(strcmp(size,"Medium")==0)
			{
				printf("Size : Medium");
				total=qty*300;
			}
			else if(strcmp(size,"Large")==0)
			{
				printf("Size : Large");
				total=qty*350;
			}
		    else
			{
				printf("Enter Correct Size");
			}
			break;
		case 2:
    		printf("Extra Cheesy Pizza");
    		printf("\nEnter Size : ");
    		scanf("%s",&size);
    		printf("Quantity :");
			scanf("%d",&qty);
			if(strcmp(size,"Small")==0)
			{
				printf("Size : Small");
				total=qty*350;
			}
			else if(strcmp(size,"Medium")==0)
			{
				printf("Size : Medium");
				total=qty*400;
			}
			else if(strcmp(size,"Large")==0)
			{
				printf("Size : Large");
				total=qty*450;
			}
		    else
			{
				printf("Enter Correct Size");
			}
			break;	
	    case 3:
    		printf("Tomato Salsa Pizza");
    		printf("\nEnter Size : ");
    		scanf("%s",&size);
    		printf("Quantity :");
			scanf("%d",&qty);
			if(strcmp(size,"Small")==0)
			{
				printf("Size : Small");
				total=qty*150;
			}
			else if(strcmp(size,"Medium")==0)
			{
				printf("Size : Medium");
				total=qty*200;
			}
			else if(strcmp(size,"Large")==0)
			{
				printf("Size : Large");
				total=qty*250;
			}
		    else
			{
				printf("Enter Correct Size");
			}
			break;
		case 4:
    		printf("Extra Spicy Pizza");
    		printf("\nEnter Size : ");
    		scanf("%s",&size);
    		printf("Quantity :");
			scanf("%d",&qty);
			if(strcmp(size,"Small")==0)
			{
				printf("Size : Small");
				total=qty*400;
			}
			else if(strcmp(size,"Medium")==0)
			{
				printf("Size : Medium");
				total=qty*450;
			}
			else if(strcmp(size,"Large")==0)
			{
				printf("Size : Large");
				total=qty*500;
			}
		    else
			{
				printf("Enter Correct Size");
			}
			break;
		case 5:
    		printf("Olive and Herby Pizza");
    		printf("\nEnter Size : ");
    		scanf("%s",&size);
    		printf("Quantity :");
			scanf("%d",&qty);
			if(strcmp(size,"Small")==0)
			{
				printf("Size : Small");
				total=qty*500;
			}
			else if(strcmp(size,"Medium")==0)
			{
				printf("Size : Medium");
				total=qty*550;
			}
			else if(strcmp(size,"Large")==0)
			{
				printf("Size : Large");
				total=qty*600;
			}
		    else
			{
				printf("Enter Correct Size");
			}
			break;
		default:
			printf("\n Please Select Again...!!!");
	}
	printf("\n***********************************************************************************************");
	printf("\nCustomer Details :");
    printf("\nEnter Name :");
    scanf("%s",&name);
    printf("Enter Phone No : ");
    scanf("%lli",&no);
    printf("Enter Address :");
    scanf("%s",&address);
    printf("***********************************************************************************************");
    
    printf("\n Creating Invoice..!!");
	Sleep(4000);
	
	system("cls");   
    
    printf("\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Invoice ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n Name          : %s", name);
	printf("\n Phone No.     : %lli", no);
	printf("\n Address       : %s ", address);
	printf("\n Size          : %s",size);
	printf("\n Quantity      : %d", qty);
	printf("\n Total Amount  : %d .Rs",total);
	printf("\n -----------------------!!! THANK YOU VISIT AGAIN !!!----------------------");
}
