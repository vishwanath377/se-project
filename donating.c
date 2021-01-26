#include<stdio.h>
void main()
{
  int orphan,oldage,disaster,choice;
  while(choice!=4)
  {
       printf("\n press 1 for donating to orphan");
       printf("\n press 2 for donating to oldage");
       printf("\n press 3 for donating to natural disaster victims");
       printf("\n enter your choice");
       scanf("%d",&choice);
       switch(choice)
       {
        case 1:
              int others;
              printf("enter amount u want to donate for orphan");
              scanf("%d",&orphan);
              if(orphan<=1000)
                others=orphan*10/100;
              printf("%d" is been cut for others",tax);
              printf("\n Thanks for donating");
              else
                     printf("\n Thanks for donating %d amount",orphan);
              break;
        case 2:
              printf("\n enter amount u want to donate for oldage");
              scanf("%d",&oldage);
              printf("\n Thanks for donating %d amount");
              break;
        case 3:
              printf("\n enter amount u want to donate for natural disaster victims");
              scanf("%d",&disaster);
              printf("\n Thanks for donating %d amount");
              break;
        default:
              ("Sorry u have entered wrong one");
       }
   }
}   
