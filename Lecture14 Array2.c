#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz in 2022

//Array

int main()
{
   // A program which is giving id to workers of a company
    int workerId[100];
    int i,numberOfWorker;

    // Determine the number of workers
    printf("Enter the number of worker : ");
    scanf("%d",&numberOfWorker);

    // Giving id to workers
    for(i = 0; i < numberOfWorker; i++)
    {
        printf("%d. enter the id: ",i+1);
        scanf("%d",&workerId[i]);
    }

    // To see id list of workers
    for(i = 0; i < numberOfWorker; i++)
    {
        printf("%d. Company worker id = %d\n",i+1, workerId[i]);
    }


    /* -------Output for 3--------
    Enter the number of worker : 3
1. enter the id: 14
2. enter the id: 15
3. enter the id: 17
1. Company worker id = 14
2. Company worker id = 15
3. Company worker id = 17
    */



    return 0;
}
