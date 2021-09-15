#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 struct Bank{
        int Accountno,balance;
        char name[300];

    }customers[10];
    void checkbalance(struct Bank customers[10])
{

 int i=0;
 for (i=0;i<10;i++)
 {
     if ((customers[i].balance)<100)
     {
         printf("Account no: %d Name : %s\n",customers[i].Accountno,customers[i].name);
     }
 }
}
int main()
{
   struct Bank customers[10];

  int i,j,choice,accountnu,transaction;
  for(i=0;i<10;i++)
  {
      printf("Enter bank number %d\n",i+1);
      scanf("%d",&customers[i].Accountno);
      printf("Enter name of %d person\n",i+1);
      scanf("%s",customers[i].name);
      printf("Enter bank balance of %d person\n",i+1);
      scanf("%d",&customers[i].balance);

  }
  checkbalance(customers);
  printf("You have to perform transaction\n");
  printf("Enter 1 For deposit and 0 For withdrawal\n");
  scanf("%d",&choice);
  if (choice==1)
  {
      printf("Enter Account number for deposit\n");
      scanf("%d",&accountnu);
      printf("Enter Amount\n");
      scanf("%d",&transaction);
      for (i=0;i<9;i++)
      { 
          if( customers[i].Accountno==accountnu )
          {   
              printf("Transaction Successful\n ");
              printf("You have deposited %d Rs \n",transaction);
              printf("Your Current balance is %d",customers[i].balance+transaction);
          }
      }
  }
  else{
      printf("Enter Account number");
      scanf("%d",&accountnu);
      printf("Enter Withdrawl amount");
      scanf("%d",&transaction);
      for (i=0;i<10;i++)
      {
          if ((customers[i].Accountno==accountnu) &&((customers[i].balance)<transaction))
          {
              printf("The balance is insufficient for the specified withdrawal");
              break;
          }
          else if(customers[i].Accountno==accountnu)
          {
              printf("Withdrawl Successful");
              printf("Your Current balance is %d After withdrawl of %d",customers[i].balance-transaction,transaction);
          }
      }
  }
  
}