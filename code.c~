#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *tuple[4] ;

void print(int a,int b,int c,int d)
{
int n,z;
int count=0;

n=0;

				tuple[0][n]=a;
				tuple[1][n]=b;
				tuple[2][n]=c;
				tuple[3][n]=d;
				
				//printf("tuple: %d %d %d %d\n",tuple[0][n],tuple[1][n],tuple[2][n],tuple[3][n]);
				n++;
			if(n==1)
			printf("\"%d,%d,%d,%d\"\n",a,b,c,d);
			for(z=0;z<n-1;z++)
			{ if(tuple[0][z]==a && tuple[1][z]==b && tuple[2][z]==c && tuple[3][z]==d)
				break;
			  else{ printf("\"%d,%d,%d,%d\"\n",a,b,c,d);
			count++; break;}
			}
}


int main()
{
int col;
for(col=0;col <4;col++)
         tuple[col] = (int *)malloc(sizeof(int));

char line[50000];
char line1[50000];	
int *arr=(int *)malloc(sizeof(int));

	int k,a,b,c,d;
	int i,j,l,m;
	i=0;	
	int set_size=0;
//int count=0;
scanf("%[^\n]", line);
//printf("%s",line);
int len=strlen(line);

	while(i<len)
{	
	for(m=0;m<k;m++)
	line1[m]= 0;
	
	k=0;
	
	while(line[i] !=',' && i<len)
	{ //printf("gng");
	  line1[k] = line[i];
	//printf("%s\n",line1);
	i++;k++;
	}
	
	//printf("line1:%s\n",line1);
	arr[set_size]=atoi(line1);
	//printf("converted val:%d\n",arr[j]);
	set_size++;
	//printf("i:%d\n",i);
	i++;

}
	k=arr[0];
	


	for(i=1;i<set_size;i++)
	{
	 for(j=1;j<set_size;j++)
	 {
	   if(j!=i)
	   {
	     for(m=1;m<set_size;m++)
	      {
		if(m!=j && m!=i)
		  {
		   for(l=1;l<set_size;l++)
		    {
		     if(l!=m && l!=j && l!=i)
		      {
			a=*(arr+i); b=*(arr+j);
			c=*(arr+m); d=*(arr+l);
			if(a+b+c*d <= k)
			{
				print(a,b,c,d);				
				
			}
		  

			}
		     }
		   }
		}
	     }
	   }
	 }//printf("COUNT=%d",count);
return 0;
}
