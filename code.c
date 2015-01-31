#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

char line[50000];
char line1[50000];	


	int k,a,b,c,d;
	int i,j,l,m;
	int n,z;
	i=0;	
	int set_size=0;
int count=0;
scanf("%[^\n]", line);

int len=strlen(line);

while(i<len)
	{	
	while(line[i] !=',' && i<len)
	{
	i++;
	}
	set_size++;
	
	i++;
}


int *arr=(int *)malloc(sizeof(int)*set_size);
i=0;k=0;set_size=0;
	while(i<len)
{	
	for(m=0;m<k;m++)
	line1[m]= 0;
	
	k=0;
	
	while(line[i] !=',' && i<len)
	{ 
	  line1[k] = line[i];
	
	i++;k++;
	}
	
	
	arr[set_size]=atoi(line1);
	
	set_size++;

	i++;

	}
	k=arr[0];
int repeat[set_size];
repeat[0]=0;
for(i=1;i<set_size;i++)
{
	for(j=1;j<set_size;j++)
	{
		if(arr[i] == arr[j] && i!=j)
		{repeat[i] =1; break;}
		else repeat[i]=0;
	}
}
//for(i=1;i<set_size;i++)
//printf("%d ",repeat[i]);
	
int dim=set_size*(set_size-2)*(set_size-3)*(set_size-4);
int tuple[10000][4];
    
n=0;
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
			if(repeat[i]==1 || repeat[j]==1 || repeat[m] ==1 || repeat[l]==1)
			{	
			int check=1;
			


			if(n!=0){ if(tuple[n-1][0]==a){
					for(z=0;z<n;z++){
				if(tuple[z][1]==b && tuple[z][2]==c && tuple[z][3]==d)
				{check =0;}
				}}else n=0;}
			if(check==1 ){ printf("\"%d,%d,%d,%d\"\n",a,b,c,d);
				tuple[n][0]=a;
				tuple[n][1]=b;
				tuple[n][2]=c;
				tuple[n][3]=d;n++;
				count++;}
			}
			else printf("\"%d,%d,%d,%d\"\n",a,b,c,d);


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
