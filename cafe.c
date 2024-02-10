/*
CAFE BILLING SYSTEM
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <string.h>
int main ()
{
      int name[100];
      char no[100];
      int n,quantity=0; char ch;
      float price,amt,cgst,sgst,total=0;
      
      printf("\nWelcome to K - CAFE");
      
      printf("\nCustomer's Name : ");
      scanf("%[^\n]s", &name);
      while (1)
      {
          printf("\nCustomer's Mobile Number : ");
          scanf("%s", &no);
          int len = strlen(no);
     
            if(len==10)
         {
         	system("cls");
           printf("\nWelcome %s to K - CAFE",name);
            printf("\nWhat would you like to have ?\n\n\n"); break;
          } 
          if(len!=10)
          {
            printf("\nEnter valid mobile number ");continue;
          }
           
      }
      char item[20][100]={"Veg.Burger     ","Garlic Bread   ","Cheesy Fries   ","Peri-Peri Fries","Curly Fries    ","Panini         ","Vadapav        ","Dabeli         ","Hot Coffee     ","Cold Coffee    ","Hot Chocolate  ","Fanta          ","Pepsi          ","Mineral Water  "};
      int qty[14]={0};
      float priceA[]={55,80,50,50,50,85,50,55,80,100,120,40,40,25};
      float amtA[14]={0};
      while (no)
      {
            printf("\n  OUR MENU:");
            printf("\n\tSr.No.\t\tItems\t\t\t\tAmount");
            printf("\n\t1\t\tVeg.Burger\t\t\t55/-");
            printf("\n\t2\t\tGarlic Bread\t\t\t80/-");
            printf("\n\t3\t\tCheesy Fries\t\t\t50/-");
            printf("\n\t4\t\tPeri Peri Fries\t\t\t50/-");
            printf("\n\t5\t\tCurly Fries\t\t\t50/-");
            printf("\n\t6\t\tPanini\t\t\t\t85/-");
            printf("\n\t7\t\tMumbai Sp. Vadapav\t\t50/-");
            printf("\n\t8\t\tDabeli\t\t\t\t55/-");
            printf("\n\t9\t\tHot Coffee\t\t\t80/-");
            printf("\n\t10\t\tCold Coffee\t\t\t100/-");
            printf("\n\t11\t\tHot Chocolate\t\t\t120/-");
            printf("\n\t12\t\tFanta - 300ml\t\t\t40/-");
            printf("\n\t13\t\tPepsi - 300ml\t\t\t40/-");
            printf("\n\t14\t\tMineral Water - 500ml\t\t25/-");
            printf("\n\nFor selection of items:");
            printf("\nSTEP 1 : Enter the number allocated to each item to add it in your order list");
            printf("\nSTEP 2 : Enter 0/n to generate Invoice");
            break;
      }
      
     while(1)
      {
            printf("\n");
            printf("\nEnter the item number : ");
            scanf("%d", &n);
            switch(n)
            {
                  case 0 : goto end;break;
                  case 1 : printf("\nVeg. Burger");
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 55;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 55*quantity;
                           amtA[n-1]=price*quantity;break;
                          
                          
                  case 2 : printf("\nGarlic Bread") ;
                            printf("\nEnter the quantity :");
                            scanf("%d", &quantity);price = 80;
                            priceA[n-1]=price;
                            qty[n-1]=quantity;
                            amt += 80*quantity;
                            amtA[n-1]=price*quantity; break;
                            

                  case 3 : printf("\nCheesy Fries");
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 50;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 50*quantity; 
                           amtA[n-1]=price*quantity;break;
                           

                  case 4 : printf("\nPeri Peri Fries");
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 50;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 50*quantity;
                           amtA[n-1]=price*quantity; break;
                           

                  case 5 : printf("\nCurly Fries");
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 50;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 50*quantity;
                           amtA[n-1]=price*quantity; break;
                           
                  case 6 : printf("\nPanini"); 
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 85;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 85*quantity; 
                           amtA[n-1]=price*quantity;break;
                           

                  case 7 : printf("\nMumbai Sp. Vadapav");
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 50;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 50*quantity; 
                           amtA[n-1]=price*quantity;break;
                            

                  case 8 : printf("\nDabeli");          
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 55;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 55*quantity;
                           amtA[n-1]=price*quantity; break;
                           
                  case 9 : printf("\nHot Coffee");
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 80;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 80*quantity;
                           amtA[n-1]=price*quantity; break;
                          

                  case 10 :printf("\nCold Coffee");                  
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 100;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 100*quantity;
                           amtA[n-1]=price*quantity; break;
                          
                  case 11 :printf("\nHot Chocolate");                  
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 120;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 120*quantity; 
                           amtA[n-1]=price*quantity;break;

                  case 12 :printf("\nFanta - 300ml");                  
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 40;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 40*quantity; 
                           amtA[n-1]=price*quantity;break;

                  case 13 :printf("\nPepsi - 300ml");                  
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 40;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 40*quantity;
                           amtA[n-1]=price*quantity; break;

                  case 14 :printf("\nMineral Water - 500ml");                  
                           printf("\nEnter the quantity :");
                           scanf("%d", &quantity);price = 25;
                           priceA[n-1]=price;
                           qty[n-1]=quantity;
                           amt += 25*quantity; 
                           amtA[n-1]=price*quantity;break;                           
                  default : printf("\nEnter Valid Number");break;
                            
            }
            printf("\nWant to order more good food ?? (y/n) : ");
            while(1)
            {
              scanf("%c", &ch);
              if(ch=='y')
              break;
              if(ch=='n')
              goto end;
            }
            
            
      }
      
      
      end:
        printf("\n\n\n");
        printf("\nINVOICE:");
        printf("\n\t\t\t\t\t K-CAFE");
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nCustomer's Name : %s",name);
        printf("\nCustomer's Mobile Number : %s", no);
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\n\t\tItems");
        printf("\t\t\t\t\tQuantity");
        printf("\t\tAmount");
        for(int i=0;i<14;i++)
        {
            if(qty[i]!=0)
            {
                printf("\n\t\t%s\t\t\t\t%d\t\t\t%9.2f",item[i], qty[i], amtA[i]);
            }
        }
        
        printf("\n---------------------------------------------------------------------------------------------------");
        printf("\nBill Amount : \t\t\t\t\t\t\t\t\t %9.2f",amt);
        cgst = (amt*2.5)/100;
        sgst = (amt*2.5)/100;
        printf("\nCGST 2.5 percent  \t\t\t\t\t\t\t\t %9.2f", cgst);
        printf("\nSGST 2.5 percent  \t\t\t\t\t\t\t\t %9.2f", sgst);
        if(amt<400){
        printf("\nDiscount : 2 percent \t\t\t\t\t\t\t\t-%9.2f",amt*0.02);
        total = amt + (amt*5)/100 - (amt*0.02);
        }
        else if (amt >=400 && amt <= 1200)
        {
          printf("\nDiscount : 4 percent \t\t\t\t\t\t\t\t-%9.2f",amt*0.04);
          total = amt + (amt*5)/100 - (amt*0.04);
        }
        else 
        {
           printf("\nDiscount : 8 percent \t\t\t\t\t\t\t\t-%9.2f",amt*0.08);
          total = amt + (amt*5)/100 - (amt*0.08);
        }
        printf("\nTOTAL : \t\t\t\t\t\t\t\t\t %9.2f",total);
        printf("\n\t\t\t\t\t THANK YOU !!!");
      
}