#include<stdio.h>
#include<windows.h>
main()
{
	system("color 3f");
	char name[20];
	char password[50];
	char c;
	int a=0,b=0;
	int money=1000;
	printf("\t\t\t\t\t\t\t\tWelcome to IME Food center\n");
	printf("Enter Username:");
	gets(name);
	printf("Enter Password:");
	gets(password);
	printf("Your account money:Rs.1,000/");
	printf("\n\n");
	
	
	puts(name);printf("Welcome to IME food center.");
	printf("\nInstruction:\n1)Press 'Y' for yes\n2)Press 'N' for No\n");
	printf("Do you want to Order food?:");
	scanf(" %c",& c);
	if(c=='Y'||c=='y')
	{
		printf("\nThis is our menu:\n");
		printf("Type the code of food category you want to see list of.\n");
		printf("1)Biryani\t\tCode:1\n");
		printf("2)Pulao\t\t\tCode:2\n");
		printf("3)White biryani\t\tCode:3\n");
		printf("4)Haleem\t\tCode:4\n");
		printf("5)Daal chawal\t\tCode:5\n");
		printf("6)Crispy broast\t\tCode:6\n");
		printf("7)Burger\t\tCode:7\n");
		printf("8)Sandwich\t\tCode:8\n");
		printf("9)Fish\t\t\tCode:9\n");
		printf("10)Rolls\t\tCode:10\n");
		printf("11)BBQ\t\t\tCode:11\n");
		printf("12)Extras\t\tCode:12\n");
		printf("\n\nEnter your code here:");	
		scanf("%d",& a);
		if(a==1)
		{
		printf("\nBIRYANI:\n");
		printf("1.Chicken Biryani\t\tPrice:Rs.180/\t\tCode:001\n");
		printf("2.Beef Biryani\t\t\tPrice:Rs.210/\t\tCode:002\n");
		printf("3.Chicken Tikka Biryani\t\tPrice:Rs.190/\t\tCode:003\n");
		printf("4.Chicken Behari Boti Biryani\tPrice.Rs.210/\t\tCode:004\n");
		printf("5.Fish Biryani\t\t\tPrice:Rs.210/\t\tCode:005\n");
		printf("\nInstuction:You have to enter code of your order below.\n");
		
		printf("Enter your code here:");
			scanf("%d",& b);
		
		if(b==001)
		{
			printf("Okay your order of Chicken Biryani is done thanks for using our program!");
			money=money-180;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of Beef Biryani is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==003)
		{
			printf("Okay your order of Chicken Tikka Biryani is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==004)
		{
			printf("Okay your order of Chicken Behari Boti Biryani is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==005)
		{
			printf("Okay your order of Fish Biryani is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}	
		
		}
		
		if(a==2)
		{
		printf("\nPulao:\n");
		printf("1.Chicken Pulao\t\t\tPrice:Rs.180/\t\tCode:001\n");
		printf("2.Chicken Seekh KAbab Pulao\tPrice:Rs.210/\t\tCode:002\n");
		printf("3.Chicken Tikka Pulao\t\tPrice:Rs.190/\t\tCode:003\n");
		printf("4.Chicken Behari Boti Pulao\tPrice.Rs.210/\t\tCode:004\n");
		printf("5.Fish Pulao\t\t\tPrice:Rs.210/\t\tCode:005\n");
		printf("\nInstuction:You have to enter code of your order below.\n");
		printf("Enter your code here:");
		scanf("%d",& b);
		if(b==001)
		{
			printf("Okay your order of Chicken Pulao is done thanks for using our program!");
			money=money-180;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of Chicken Seekh KAbab Pulao is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==003)
		{
			printf("Okay your order of Chicken Tikka Pulao is done thanks for using our program!");
			money=money-190;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==004)
		{
			printf("Okay your order of Chicken Behari Boti Pulao is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==005)
		{
			printf("Okay your order of Fish Pulao is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}	
			
		}
		
		if(a==3)
		{
		printf("\nWhite Biryani:\n");
		printf("1.Chicken White Biryani\t\t\tPrice:Rs.180/\t\tCode:001\n");
		printf("2.Seekh KAbab White Biryani\t\tPrice:Rs.210/\t\tCode:002\n");
		printf("3.Chicken Tikka White Biryani\t\tPrice:Rs.190/\t\tCode:003\n");
		printf("4.Behari Boti White Biryani\t\tPrice.Rs.210/\t\tCode:004\n");
		printf("5.Fish White Biryani\t\t\tPrice:Rs.210/\t\tCode:005\n");
		printf("\nInstuction:You have to enter code of your order below.\n");
		printf("Enter your code here:");
		scanf("%d",& b);
		if(b==001)
		{
			printf("Okay your order of Chicken White Biryani is done thanks for using our program!");
			money=money-180;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of Seekh Kabab White Biryani is done thanks for using our program!");
			money=money-190;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==003)
		{
			printf("Okay your order of Chicken Tikka White Biryani is done thanks for using our program!");
			money=money-190;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==004)
		{
			printf("Okay your order of Behari Boti White Biryani is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==005)
		{
			printf("Okay your order of Fish White Biryani is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
			
		}
		if(a==4)
		{
		printf("\nHaleem:\n");
		printf("1.Chicken Haleem\t\tPrice.Rs.220/\t\tCode:001\n");
		printf("2.Beef Haleem\t\t\tPrice:Rs.220/\t\tCode:002\n");
		printf("\nInstuction:You have to enter code of your order below.\n");
		printf("Enter your code here:");
		scanf("%d",& b);
		if(b==001)
		{
			printf("Okay your order of Chicken Haleem is done thanks for using our program!");
			money=money-220;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of Beef Haleem is done thanks for using our program!");
			money=money-220;
			printf("\nMoney left in your account=%d\n",money);
		}
		
		}
		if(a==5)
		{
			printf("\nDaal chawal:\n");
			printf("Daal chawal\t\tPrice:Rs.170/\t\tCode:001\n");
			printf("\nInstuction:You have to enter code of your order below.\n");
			printf("Enter your code here:");
			scanf("%d",& b);
			if(b==001)
			{
				printf("Okay your order of Daal chawal is done thanks for using our program!");
				money=money-170;
				printf("\nMoney left in your account=%d\n",money);
			}
			
			
			
		}
		if(a==6)
		{
			printf("\nCrispy Broast:\n(Serve with Fries,Coleslaw,Bun & Raita)\n");
			printf("Quarter(2pcs)\t\t\tPrice:Rs.230/\t\tCode:001\n");
			printf("Boneless Broast(2pcs)\t\tPrice:Rs.250/\t\tCode:002\n");
			printf("\nInstuction:You have to enter code of your order below.\n");
			printf("Enter your code here:");
			scanf("%d",& b);
			if(b==001)
			{
				printf("Okay your order of Quarter(2pcs) is done thanks for using our program!");
				money=money-230;
			printf("\nMoney left in your account=%d\n",money);
			}
			if(b==002)
			{
				printf("Okay your order of Boneless Broast(2pcs) is done thanks for using our program!");
				money=money-250;
			printf("\nMoney left in your account=%d\n",money);
			}
			
			
		}
		if(a==7)
		{
		printf("\nBurger:\n(Serve with Fries & Coleslaw)\n");
		printf("1.Chicken Burger\t\tPrice:Rs.180/\t\tCode:001\n");
		printf("2.Beef Burger\t\t\tPrice:Rs.180/\t\tCode:002\n");
		printf("3.Zinger Burger\t\t\tPrice:Rs.200/\t\tCode:003\n");
		printf("4.Fish Burger\t\t\tPrice.Rs.200/\t\tCode:004\n");
		
		printf("\nInstuction:You have to enter code of your order below.\n");
		
		printf("Enter your code here:");
		scanf("%d",& b);
	
		if(b==001)
		{
			printf("Okay your order of Chicken Burger is done thanks for using our program!");
			money=money-180;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of Beef Burger is done thanks for using our program!");
			money=money-180;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==003)
		{
			printf("Okay your order of Zinger Burger is done thanks for using our program!");
			money=money-200;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==004)
		{
			printf("Okay your order of Fish Burger is done thanks for using our program!");
			money=money-200;
			printf("\nMoney left in your account=%d\n",money);
		}	
		
		}
		if(a==8)
		{
		printf("\nSandwich:\n(Serve with Fries & Coleslaw)\n");
		printf("1.Chicken Sandwich\t\tPrice:Rs.180/\t\tCode:001\n");
		printf("2.Chicken Club Sandwich\t\tPrice:Rs.210/\t\tCode:002\n");
		printf("3.BBQ Club Sandwich\t\tPrice:Rs.230/\t\tCode:003\n");
		
		printf("\nInstuction:You have to enter code of your order below.\n");
		
		printf("Enter your code here:");
		scanf("%d",& b);
	
		if(b==001)
		{
			printf("Okay your order of Chicken Sandwich is done thanks for using our program!");
			money=money-180;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of Chicken Club Sandwich is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==003)
		{
			printf("Okay your order of BBQ Club Sandwich is done thanks for using our program!");
			money=money-230;
			printf("\nMoney left in your account=%d\n",money);
		}
		
		
		}
		if(a==9)
		{
			printf("\nFish:\n");
			printf("Fried Fish 1pc\t\t\tPrice:Rs.150/\t\tCode:001\n");
			printf("Fish n Chips(2pcs)\t\tPrice:Rs.250/\t\tCode:002\n");
			printf("\nInstuction:You have to enter code of your order below.\n");
			printf("Enter your code here:");
			scanf("%d",& b);
			if(b==001)
			{
				printf("Okay your order of Fried Fish 1pc is done thanks for using our program!");
				money=money-150;
			printf("\nMoney left in your account=%d\n",money);
			}
			if(b==002)
			{
				printf("Okay your order of Fish n Chips(2pcs) is done thanks for using our program!");
				money=money-250;
			printf("\nMoney left in your account=%d\n",money);
			}
			
			
		}
		if(a==10)
		{
		printf("\nRolls\n");
		printf("1.Chicken Chatni Roll\t\tPrice:Rs.120/\t\tCode:001\n");
		printf("2.Chicken Seekh Kabab Roll\tPrice:Rs.120/\t\tCode:002\n");
		printf("3.Chicken Mayo Roll\t\tPrice:Rs.130/\t\tCode:003\n");
		printf("4.Chicken Cheese Roll\t\tPrice.Rs.150/\t\tCode:004\n");
		printf("5.Crispy Chicken Roll\t\tPrice:Rs.150/\t\tCode:005\n");
		printf("Crispy Chicken Cheese Roll\tPrice:Rs.180/\t\tCode:006\n");
		printf("\nInstuction:You have to enter code of your order below.\n");
		
		printf("Enter your code here:");
		scanf("%d",& b);
		if(b==001)
		{
			printf("Okay your order of Chicken Chatni Roll is done thanks for using our program!");
			money=money-120;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of Chicken Seekh Kabab Roll is done thanks for using our program!");
			money=money-120;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==003)
		{
			printf("Okay your order of Chicken Mayo Roll is done thanks for using our program!");
			money=money-130;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==004)
		{
			printf("Okay your order of Chicken Cheese Roll is done thanks for using our program!");
			money=money-150;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==005)
		{
			printf("Okay your order of Crispy Chicken Roll is done thanks for using our program!");
			money=money-150;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==006)
		{
			printf("Okay your order of Crispy Chicken Cheese Roll is done thanks for using our program!");	
			money=money-180;
			printf("\nMoney left in your account=%d\n",money);
		}	
		
		}
		if(a==11)
		{
		printf("\nBBQ:\n(Serve with Paratha & Chatni)\n");
		printf("1.Chicken Tikka\t\t\t\tPrice:Rs.190/\t\tCode:001\n");
		printf("2.Chicken Bihari Boti\t\t\tPrice:Rs.210/\t\tCode:002\n");
		printf("3.Chicken Seekh Kabab\t\t\tPrice:Rs.190/\t\tCode:003\n");
		printf("4.Fish Tikka(2pcs)\t\t\tPrice.Rs.250/\t\tCode:004\n");
		
		printf("\nInstuction:You have to enter code of your order below.\n");
		
		printf("Enter your code here:");
		scanf("%d",& b);
	
		if(b==001)
		{
			printf("Okay your order of Chicken Tikka is done thanks for using our program!");
			money=money-190;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of Chicken Bihari Boti is done thanks for using our program!");
			money=money-210;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==003)
		{
			printf("Okay your order of Chicken Seekh Kabab is done thanks for using our program!");
			money=money-190;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==004)
		{
			printf("Okay your order of Fish Tikka(2pcs) is done thanks for using our program!");
			money=money-250;
			printf("\nMoney left in your account=%d\n",money);
		}	
			
		}
		if(a==12)
		{
		printf("\nExtras\n");
		printf("1.Raita\t\t\tPrice:Rs.30/\t\tCode:001\n");
		printf("2.Shami Kabab (1pc)\tPrice:Rs.40/\t\tCode:002\n");
		printf("3.Seekh Kabab (1pc)\tPrice:Rs.50/\t\tCode:003\n");
		printf("4.Fries\t\t\tPrice.Rs.100/\t\tCode:004\n");
		printf("5.Mayo\t\t\tPrice:Rs.20/\t\tCode:005\n");
		printf("6.Cheese\t\tPrice:Rs.40/\t\tCode:006\n");
		printf("6.Salad\t\t\tPrice:Rs.20/\t\tCode:007\n");
		printf("6.Water\t\t\tPrice:Rs.40/\t\tCode:8\n");
		printf("\nInstuction:You have to enter code of your order below.\n");
		
		printf("Enter your code here:");
		scanf("%d",& b);
		if(b==001)
		{
			printf("Okay your order of Raita is done thanks for using our program!");
			money=money-30;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==002)
		{
			printf("Okay your order of  Shami Kabab(1pc) is done thanks for using our program!");
			money=money-40;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==003)
		{
			printf("Okay your order of Seekh Kabab(1pc) is done thanks for using our program!");
			money=money-50;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==004)
		{
			printf("Okay your order of Fries is done thanks for using our program!");
			money=money-100;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==005)
		{
			printf("Okay your order of Mayo is done thanks for using our program!");
			money=money-20;
			printf("\nMoney left in your account=%d\n",money);
		}
		if(b==006)
		{
			printf("Okay your order of Cheese is done thanks for using our program!");
			money=money-40;
			printf("\nMoney left in your account=%d\n",money);	
		}	
		if(b==007)
		{
			printf("Okay your order of Salad is done thanks for using our program!");
			money=money-20;
			printf("\nMoney left in your account=%d\n",money);	
		}
		if(b==8)
		{
			printf("Okay your order of Water is done thanks for using our program!");
			money=money-40;
			printf("\nMoney left in your account=%d\n",money);	
		}
		
		}
		
	}
	if(c=='N'||c=='n')
	{
		printf("Okay have a good day bye!");
	}
	int rating;
	printf("\nInstruction:\n1 for Very bad\n2 for Unsatisfied\n3 for Neutral\n4 for Satisfied\n5 for Very Satisfied\n");
	printf("\n\nKindly give rating to our program from 1 to 5:");
	scanf("%d",& rating);
	switch(rating)
	{
		case 1:
			printf("\nWill try to do good next time");
			break;
			
		case 2:
			printf("\nOh we feel bad to see that you are not satisfied");
			break;
			
		case 3:
			printf("\nOkay got it will try to satisfy you next time.");
			break;
			
		case 4:
			printf("\nThanks for 4 star rating");
			break;
			
		case 5:
			printf("\nThanks for 5 star rating.");
			break;
			
		default:
			printf("\nWrong input!");
			break;
	}
	
	
}	

