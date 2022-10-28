#include<stdio.h>

int getMatrixElement (int Ar[10][10],int r,int c);
int multipleMatrices (int Rtot[10][10],int r1[10][10],int r2[10][10],int ,int ,int );
void display(int Rtot[10][10],int x,int l);

int main ()
{
    int x,y,k,l,*(r1[10][10]),*(r2[10][10]),*(Rtot[10][10]);

    printf("Enter rows and column for first matrix : ");
    scanf ("%d%d",&x,&y);

    printf("Enter rows and column for second matrix : ");
    scanf ("%d%d",&k,&l);

	while (y != k)
	{
		printf("Error! column of first matrix not equal to row of second.\n");
        printf("Enter rows and column for first matrix : ");
        scanf ("%d%d",&x,&y);
        printf("Enter rows and column for second matrix : ");
        scanf ("%d%d",&k,&l);
	}

    printf("Enter Element\n");
    getMatrixElement (&r1,x,y);
    printf("Enter Element\n");
    getMatrixElement (&r2,k,l);

    multipleMatrices (Rtot,r1,r2,x ,y ,l);

    display(Rtot,x,l);

    return 0;

}

int getMatrixElement (int Ar[10][10],int r,int c)
{
    int i,j;

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf ("Enter Element a [%d %d]:",i+1,j+1);
            scanf ("%d",&Ar[i][j]);
        }
    }
}

int multipleMatrices (int Rtot[10][10],int r1[10][10],int r2[10][10],int x,int y,int l)
{
    int i,j,k;

    for(i=0;i<x;i++)
    {
        for(j=0;j<l;j++)
        {
            Rtot[i][j]= 0;
        }
    }

    for(i=0;i<x;i++)
    {
        for(j=0;j<l;j++)
        {
            for(k=0;k<y;k++)
            {
                Rtot[i][j]+= r1[i][k] * r2[k][j];
            }

        }
    }
}


void display (int Rtot [10][10] , int r, int c)
{
  	int i, j;
	printf("\nOutput Matrix:\n");
	for(i = 0; i < r; ++i)
	{
		for(j = 0; j < c; ++j)
		{
			printf("%d  ", Rtot[i][j]);
			if(j == c - 1)
				printf("\n\n");
		}
	}
}
