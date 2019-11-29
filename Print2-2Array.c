#include<stdio.h>

void main()
{int A[3][3]={1,2,3,4,5,6,7,8,9},B[3][3]={1,4,7,2,5,8,3,6,11},i,j;

  printf("\n배열\n");  
   for(i=0;i<3;i++)
   {printf("\n ");
       for(j=0;j<3;j++)
       {printf("%d ",A[i][j]);}
       printf("\n");
   }

        printf("\n배열\n");  
   for(i=0;i<3;i++)
   {printf("\n ");
       for(j=0;j<3;j++)
       {printf("%d ",B[i][j]);}
       printf("\n");
   }
}
}
