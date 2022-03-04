#include"library_management.h"

int main(){
   struct library lib[100];
   char bookname[30];
   int i,j, keepcount;
   i=j=keepcount = 0;
  /* while(j!=6){
      printf("\n1. Add book information\n");
      printf("2.Display book information\n");
      printf("3. no of books in the library\n");
      printf("4.List of authors\n");
      printf("5.Display highest price of the books\n");
      printf("6. Exit");*/


      printf ("\n\nEnter one of the above : ");
      scanf("%d",&j);

   }
     switch (j){
        
         case 1:
         printf("Enter the book id=");
         scanf("%d",lib[i].bookid);
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].noofpages);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            keepcount++;
            i++;
            break;
         case 2:
            printf("you have entered the following information\n");
            for(i=0; i<keepcount; i++){
               printf ("book name = %s\n",lib[i].bookname);
               printf ("\t author name = %s\n",lib[i].author);
               printf ("\t pages = %d\n",lib[i].noofpages);
               printf ("\t price = %f\n",lib[i].price);
            }
            break;
         case 3:
            printf("\n No of books in library : %d", keepcount);
            break;
        case 4:
         	printf ("List of Authors : ");
	          for (i=0;i<keepcount;i++)
	          {
	                 printf ("\n %s ",lib[i].author);
	          }
	          break;
	   case 5:
	printf ("Highest Price Book : ");
         float temp = 0;
	       for (i=0;i<keepcount;i++)
	        {
	           if(temp < lib[i].price)
	           temp = lib[i].price;
	        }
        	printf("%f", temp);
        	break;
         case 6:
            exit (0);
      }
   }
   return 0;
}