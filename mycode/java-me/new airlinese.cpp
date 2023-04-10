#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
// DEFINE STRUCTURE
typedef struct mynode //uese define data type for using linked list  
{
    char name[20];
    char gen[6];
    int age;
    struct mynode* link;
}Node;
Node* start=NULL; //pointer variable globle

void add_node(char nam[30], char gender[8], int b)   //return type fun. with aurgument
{ 
    Node *newptr =NULL, *ptr;//*ptr for using tempory variable
    newptr =(Node*)malloc(sizeof(Node));//dynemic memory allocation using type casting
    strcpy(newptr->name, nam);     //this funtion is use to copy one string to another  ptr string
    strcpy(newptr->gen, gender);
    newptr->age = b;
    newptr->link = NULL; //yht link of the node is null
    if (start == NULL) 
        start = newptr;  //assign the value in start
    else {
        ptr = start;   //
        while (ptr->link != NULL)  //like a train boxes
            ptr = ptr->link;
        ptr->link = newptr;   
    }
}

//functions declaration
void details(int);
int seat(int);
int cal(int, int, int);
void bill(int, int);
void login();
void cancel(int);

// GLOBAL VARIABLES
int a[60],time1,time2;                  //time1&time2=boarding time.
char arr[20],gen[8];                             //a[]=no. of seats,arr=from city,dep=to city-you want to travel,gen=gender,a=age.
char dep[20],cla[15],airport[40];  //cla[]=classes,flight[]=name of flights
char name[30],mail[30],flight[40];

int main()
{
    int n,y,t,j,i,a,z;            //z=choice,i=choice ,n=to select one way or round trip,t=travel in classes,j=passengers
    int b,c,a1,a2,x=0,d,e,r;
    long int m;      //m=contact no.
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t*#########*WELCOME TO AIRLINES RESERVATION *#############*\n\n");
    printf("\n*#########*                                           BY Rahul Ranjan *#############*\n\n");
    for(i=0;i<=5;i++)
    printf("\n");
    printf("\t\t\t\t\t*--------------AIRLINES INFORMATION-------------------*\n\n");
    
    login();
     getch();
      system("cls");
       printf("\n");  
   printf("\t\t\t  *             *****                                               \n");
   printf("\t\t\t  * *             *    *                                           \n ");
    printf("\t\t\t * * *               *    *                                       \n  ");
    printf("\t\t\t* ********************************** *            welcome         \n  ");
    printf("\t\t\t*                                        *      **************     \n  ");
    printf("\t\t\t * ********************************** *         INDIAN  AIRLINSE   \n  ");
    printf("\t\t\t                     *     *                                        \n ");
    printf("\t\t\t\t                 *     *                                            \n ");
    printf("\t\t\t\t                *****                                               \n\n ");
   
    printf("\n              >>Enter no. of passengers want to travel:-        ");
    scanf("%d",&j);   
    printf("\n");
    
    printf("             >>FORM city:-    ");
    while((getchar())!='\n');//for using fetch the input
    gets(arr);
    printf("\n");
    printf("             >>To city:-      ");
    gets(dep);
    printf("\n");

    M:

    system("cls");    
    printf("\n**********************************************************************************************************************************************************************************");
    printf("\n                                  BOOKING YOUE TICKITS GO STEP BY STEP                     \n");
    printf("\n\n1.>>flight details\n\n2.>>seats booking\n\n3.>>Passengers details\n\n4.>>>Booking receipt\n\n5.>>cancel booking\n\n6.>>Exit\n");
    printf("\n");
    printf("**********************************************************************************************************************************************************************************");
    printf("\n");
    printf("\n   >>>Enter your choice:-               ");
    scanf("%d",&z);
    system("cls");
    if(z>6)
    {
        printf("Invalid choice\n");
    }
    else
    {
        switch(z)
        {
            case 1:
                 system("cls");
                 for(i=0;i<=10;i++)
                 printf("\n");
                 
                 printf("\n\t\t\tThe Following flights  are Available.....\n");
                 printf("\n");
                  printf("\n");
               printf("\t\t NO.        FLIGHT NAME                 TIME                 DESTINATION  ");
               printf("\n");
              printf("\t\t 1.           IndiGo..................10:00 a.m.. .......... airport\n\n");
              printf("\t\t 2.           Air India..............05:00 p.m..............airport\n\n");
              printf("\t\t 3.           IndiGo..................11:00 a.m..............airport \n\n");
            printf("\t\t 4.             SpiteJet...............05:00 p.m..............airport\n\n");
             printf("\t\t 5.           AirAsia India...........07:00 p.m..............airport\n\n");
             printf("\n");
             printf("     >>>Select flight you will travel:-           ");
             scanf("%d", &i);
    do {
        switch (i) {
        case 1: {
            strcpy(flight," IndiGo");//string copy 
            strcpy(airport,"airport");
            time1 = 10;
            time2 = 00;                                    //time1,time2=boarding time
            a1 = 2099;
            a2 = 1560;
            system("cls");
            // Calling cal() function with the three argument and return value
            d = cal(a1, a2, j);
            printf("\nTotal Bill Amount:>>>>>>>>>>> %d\n", d);
            break;
        };
        case 2: {
            strcpy(flight,  "Air India");
            strcpy(airport, " airport");
            time1 = 05;
            time2 = 00;
            a1 = 1801;
            a2 = 981;
            system("cls");
            // Calling cal() function with three argument & return value
            d = cal(a1, a2, j);
            printf("\nTotal Bill amount >>>>>>>>>>>%d\n", d);
           break;
        };
        case 3: {
            strcpy(flight, "IndiGo");
            strcpy(airport,  " airport ");
            time1 = 11;
            time2 = 00;
            a1 = 2199;
            a2 = 1780;
            system("cls");
            // Calling cal() function with three argument & return value
            d = cal(a1, a2, j);
            printf("\nTotal Bill Amount:>>>>>>>>>> %d\n", d);
            break;
        };
        case 4: {
            strcpy(flight, " SpiteJet");
            strcpy(airport, " airport");
            time1 = 05;
            time2 = 00;
            a1 = 1759;
            a2 = 1200;
            system("cls");
            // Calling cal() function with three argument & return value
            d = cal(a1, a2, j);
            printf("\nTotal Bill Amount:>>>>>>>>>>>> %d\n", d);
            break;
         };
        case 5: {
            strcpy(flight, "AirAsia India");
            strcpy(airport, "airport");
            time1 = 07;
            time2 = 00;
            a1 = 2205;
            a2 = 1905;
            system("cls");
            // Calling cal() function with three argument & return value
            d = cal(a1, a2, j);
            printf("\n");
            printf("\nTotal Bill Amount:>>>>>>>>>> %d\n", d);
            printf("\n");
            break;
        }
        default:
            printf(">>>Enter Correct choice.....\n\n");
            x = 1;
            break;
        }
    } while (x);
            goto M;
            break;

            case 2:
            system("cls");
            for(i=0;i<=5;i++)
                 printf("\n");
                 
            printf("\t********Seats booking**********\n\n");
            //calling seat() function with no. of passengers
            seat(j);
            system("cls");
            goto M;
            break;

            case 3:
            
            for(i=0;i<=5;i++)
                 printf("\n");
            printf("\t*****Passenger details*******\n\n");
            //calling details function with argument no. of passengers
            details(j);
            goto M;
            break;

            case 4:
            
           
            printf("************************************************************************************************************************************************************\n");
            printf("\n********booking receipt:-**********\n\n");
            //calling bill() function with no. of passengers and amount argument
            bill(d,j);
            getch();
             system("cls");
            goto M;
            break;

            case 5:
           
            for(i=0;i<=5;i++)
                 printf("\n");
            printf("********************ticket cancellation window*************************\n\n");
            cancel(j);
            getch();
            system("cls");
            goto M;
            break;
            
            case 6:
            system("cls");
            for(i=0;i<=5;i++)
            printf("\n");

            printf("**********************QUIT THIS SYSTEM ************************\n\n\n\n");
            exit(0);
            
            break;
            }
    }

    return 0;
}
 
//function for calculation of amount
int cal(int y1,int y2,int h)     //h=no.of passengers,y1=a1,y2=a2,c=amount,p=no. of seats we book
{
int b,c,i,t,r,n,p;
printf("\n");
printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------");
printf("\n         >> Select in which class you want to travel in:-     \n");
printf("\n");

printf("\n\n");
printf("\t\t\t\t1.>>>>>first class\n\n");
printf("\t\t\t\t2.>>>>>Economy class\n\n");
printf("\t\t\t\t3.>>>>>Business class\n\n");
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
scanf("%d",&i);
switch(i){
case 1:{
strcpy(cla,"first class");
b=y2*h;
c=b+(b*0.18);
break;
}
case 2:{
strcpy(cla,"Economy class");
b=(y1+1000)*h;
c=b+(b*0.18);
break;
}
case 3:{
strcpy(cla,"Business class");
b=(y1+5000)*h;
c=b+(b*0.18);
break;
}
default:{
printf("\t\tEnter right choice.\n");
}
}
return c;
seat(p);
}

//function for taking passenger's details
void details(int k)//k=no. of passenger
{
    int i,a;
    long int m;
    char name[30],mail[30],gen[8];
    printf("\n >>>>Enter your contact no.:-   ");
    scanf("%ld",&m);
    printf("\n");
    printf("\n>>>> Enter your email id:-     ");
    while((getchar())!='\n');
    gets(mail);
    for (i = 1; i <= k; i++) {
        printf("\n");
        printf("Enter The %dth>>>> Passenger Name:      ", i);
        fflush(stdin);//cleans the input buffer
        gets(name);
        printf("Enter The %dth >>>>Passenger Gender:    ", i);
        fflush(stdin);//skkiping problem resolution
        gets(gen);
        printf("Enter The %dth >>>>Passenger Age:     ", i);
        fflush(stdin);
        scanf("%d", &a);
  
        // Calling add_node() function
         add_node(name, gen, a);//using linkedlist to store data 
    }
}

// Function for choosing seats
int seat(int p)
{
   printf("\n");  
   printf("   *             *****                                               \n");
   printf("   * *             *    *                                           \n ");
    printf("  * * *               *    *                                       \n  ");
    printf(" * ********************************** *            welcome         \n  ");
    printf("*                                        *      **************     \n  ");
    printf(" * ********************************** *         INDIAN  AIRLINSE   \n  ");
    printf("                     *     *                                        \n ");
    printf("                 *     *                                            \n ");
    printf("                *****                                               \n\n ");
   
   
   int i;

    printf("\t           -:SEAT MATRIX:-        \n");
   printf("----------PLEASE   SELECT   YOUR   SEAT   -----------\n");
    printf("\t01    02        03\t04               05\n\n");
    printf("\t06    07        08\t09               10\n");
    printf("\t11    12        13\t14              15\n\n");
    printf("\t16    17        18\t19              20\n");
    printf("\t21    22        23\t24              25\n\n");
    printf("\t26    27        28\t29              30\n");
    printf("\t31    32        33\t34              35\n\n");
    printf("\t36    37        38\t39              40\n");
    printf("\t41    42        43\t44              45\n\n");
    printf("\t46    47        48\t49              50\n");
    printf("\t51    52        53\t54              55\n\n");
    printf("\t56    57        58\t59              60\n");
    printf("\t****Enter Seat Numbers******: \n");
    for (i = 0; i < p; i++)
        scanf("%d", &a[i]);
        printf("***********your seats are selected*************\n\n");
}

// Function for printing receipt
void bill(int y, int j)                     //j=no. of passengers,y=bill amount
{
    int i;
    long int m;
    Node* ptr = start;
    for (i = 1; i <= j; i++) {
        printf("\t\t%dst>>> Passenger Name:    ",i);
        puts(ptr->name);

        printf("\t\t%dst>>>Passenger Gender:   ", i);
        puts(ptr->gen);

        printf("\t\t%dst>>> Passenger Age:    %d\n\n", i,  ptr->age);
        ptr = ptr->link; //go to the next node
    }
    

    printf("\t\t1.Source Place:\t ");
    puts(arr);
    
    printf("\t\t2.Destination Place: \t");
    puts(dep);
    
    printf("\t\t3.The Boarding Station:  \t ");
    puts(airport);
    printf("\t\t4.flight Is: \t");
    puts(flight);
    printf("\t\t5.Allocated Class:  \t ");
    puts(cla);
    printf("\t\t6.Boarding Time: %d:%d\n  ", time1, time2);
    printf("\t\t7.Total Bill Amount: %d\n       ", y);
    printf("\t\t8.passenger contact no.:-   ");
    printf("%ld\n",m);
    printf("\t\t9.passenger Email i.d     \t"); 
    puts(mail);
    printf("\t\t10.Allocated Seats Are: \n  ");

    printf("\n");
    for (i = 0; i < j; i++) {
        printf("\t\t%d ", a[i]);
    }
    printf("\n");
    printf("\n\t\t\t\t............Thank You......\n");
}

void login()
{
    int u=12345,p=67890;
    int u1,p1,i;
      printf("\t\t*******************************************************************login*******************************************************************************\n") ;
    for(i=0;i<=5;i++)
    printf("\n"); 
    printf("                Enter the user i.d:=     ");
    scanf("%d",&u1);
    printf("\n");
    printf("\n                Enter the password:=     ");
    scanf("%d",&p1);
    printf("\n");
    printf("\n");
     if(u==u1&&p==p1)
    {
    printf("\t\t*********************************************************welcome to indian airlines*************************************************************************");
    
    printf("\n");
    

    }
    else{
    printf("\t incorrect password");
    exit(0);
    }
    
}
void cancel(int j)    //funtion use for cancel the passenger booking                 //j=no. of passengers,y=bill amount
{
    int i,pos;
    char nameg[30];
    Node* ptr = start;
    for (i = 1; i <= j; i++) {
        printf("\t\t%dst>>> Passenger Name:    ",i);
        puts(ptr->name);
        
        printf("\t\t%dst>>>Passenger Gender:   ", i);
        puts(ptr->gen);

        printf("\t\t%dst>>> Passenger Age:    %d\n\n", i,  ptr->age);
        ptr = ptr->link; //go to the next node
        printf("\n");
    }
    printf("\n*************** cancel allocated seat***************\n");
    printf("\n");
    for (i = 0; i < j; i++) {
        printf("\t\t%d ", a[i]);
    }
    
   

}


