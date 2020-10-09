#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int option,num,amount,password,soperator,zakirul=12345;
   printf("\n\n                   *****welcome to your profile*****\nEnter your choise....\n\n\n1.Send money\n2.Buy airtime\n3.Payment\n4.Cash out\n5.My bkash\n6.Help line\n");
    scanf("%d",&option);

    if(option==1){
printf("enter wallet number:");
scanf("%d",&num);
printf("enter an amount:");
scanf("%d",&amount);
printf("enter your password:");
scanf("%d",&password);
if(password==zakirul){
    printf("\ndone!!!\n\nwait for confirmation sms......\n");}
else
   {
       printf("\nwrong input!!!\n\nplease try again...\n");
   }

}
else if(option==2){
        int soperator,selection;
    printf("\nselect sim operator:\n1.grameenphone\n2.robi\n3.airtel\n4.banglalink\n5.teletalk\n");
    scanf("%d",&soperator);
    if(soperator==1){
       selection="grameenphone";
     }else if(soperator==2){
           selection="robi";
     }else if(soperator==3){
           selection="airtel";
     }else if(soperator==4){
           selection="banglalink";
     }else if(soperator==5){
           selection="teletalk";
     }else{
     printf("\n!!!your input is wrong!!!\n");
     }
    printf("\n1.prepaid\n2.postpaid\n");
    scanf("%d",&selection);
    printf("\nenter number please:\nenter amount:\n");
    scanf("%d%d",&num);

}
else if(option==3){
        int paymentnum;
        printf("\nplease enter merchant bkash wallet number:\n");
        scanf("%d",&paymentnum);
         printf("enter amount:");
        scanf("%d",&amount);

       printf("enter your password:");

       scanf("%d",&password);
    if(password==zakirul){
       printf("\ndone!!!\n\nwait for confirmation sms......\n");}
    else
       {
          printf("\nwrong input!!!\n\nplease try again...\n");
       }

}
else if(option==4){
    int cashout,agentnum,amount,password;
    printf("\n1.from Agent\n2.from ATM\n");
    scanf("%d",&cashout);
    if(cashout==1){
        printf("enter agent number:");
        scanf("%d",&agentnum);
        printf("enter amount:");
        scanf("%d",&amount);

       printf("enter your password:");

       scanf("%d",&password);
        if(password==zakirul){
           printf("\ndone!!!\n\nwait for confirmation sms......\n");}
        else
         {
            printf("\nwrong input!!!\n\nplease try again...\n");
          }
        }
     else
        printf("go to nearest bkash atm booth");
}

   else if(option==5){
    int  mybkash;
    printf("select what you want to do:\n1.check balance\n2.change password\n");
    scanf("%d",&mybkash);
    if(mybkash==1){
    printf("enter your password:");
       scanf("%d",&password);
        if(password==zakirul){
           printf("your account balance is: *******");
        }
    }
    else
    {
      printf("enter your old password:");
       scanf("%d",&password);
       printf("enter a new password:");

    }
   }
   else if(option==6){
    printf("processing to call 16247 for help\nplease wait....");
   }



 return 0;
}
