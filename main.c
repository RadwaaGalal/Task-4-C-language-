#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row , col , check_number , i , j ,check=0;
    //to print number of rows
    printf("Enter number of rows: ");
    scanf("%d", &row);
    //to print number of columns
    printf("Enter number of columns: ");
    scanf("%d", &col);
    //to print 2D array
    int array[row][col];
    printf("Enter numbers of the arrays:\n");

    //enter element of 2D array
    for(i=0 ; i<row ; i++){
        for(j=0 ; j<col ; j++)
        {
            scanf("%d",&array[i][j]);}
        }

        //enter check_number to check if existed or not
        printf("\nEnter number: ");
        scanf("%d",&check_number);

    for(i=0 ; i<row ; i++){
        for(j=0 ; j<col ; j++)
            {
            if(check_number == array[i][j])
                check= 1;

            }
    }
    if(check)
        printf("Will not take number\n");
    else
        printf("Will take number\n");

    return 0;
}
