#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    char line[50000];
    char line1[50000];


    int k,a,b,c,d;
    int i,j,l,m;

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
    i=0;
    k=0;
    set_size=0;
    while(i<len)
    {
        for(m=0; m<k; m++)
            line1[m]= 0;

        k=0;

        while(line[i] !=',' && i<len)
        {
            line1[k] = line[i];

            i++;
            k++;
        }


        arr[set_size]=atoi(line1);

        set_size++;

        i++;

    }
    k=arr[0];

    int comb1[set_size-2],comb2[set_size-3],comb3[set_size-4];


    int l1,l11,check3;
    int m1,m11,check2;
    int j1,j11,check1;
    int i1,check;

    for(i=1; i<set_size; i++)
    {   j1=1;
        check=0;
        for(i1=1; i1<i; i1++)
        {   if(arr[i1]==arr[i])
            {
                check=1;    //to check if the value has already appeared
                break;
            }
        }
        if(check==1)
            continue;
        for(j=1; j<set_size; j++)
        {
            if(j!=i)
            {   m1=1;
                check1=0;
                for(j11=1; j11<j1; j11++)
                {
                    if(arr[j]==comb1[j11])
                    {
                        check1 = 1;    //for a value of i comb1 stores all distinct value of j(corresponding to value of b and rejects any repetitive value.
                        break;
                    }
                }
                if(check1==0)
                {
                    comb1[j1]=arr[j];
                    j1++;
                }
                else continue;
                for(m=1; m<set_size; m++)
                {
                    if(m!=j && m!=i)
                    {   l1=1;
                        check2 =0;
                        for(m11=1; m11<m1; m11++)
                        {
                            if(arr[m]==comb2[m11])
                            {
                                check2 = 1;
                                break;
                            }
                        }
                        if(check2==0)
                        {
                            comb2[m1]=arr[m];
                            m1++;
                        }
                        else continue;
                        for(l=1; l<set_size; l++)
                        {
                            if(l!=m && l!=j && l!=i)
                            {   check3 =0;
                                for(l11=1; l11<l1; l11++)
                                {
                                    if(arr[l]==comb3[l11])
                                    {
                                        check3 = 1;
                                        break;
                                    }
                                }
                                if(check3==0)
                                {   comb3[l1]=arr[l];
                                    l1++;

                                    a=*(arr+i);
                                    b=*(arr+j);
                                    c=*(arr+m);
                                    d=*(arr+l);
                                    if(a+b+c*d <= k)
                                    {

                                        printf("\"%d,%d,%d,%d\"\n",a,b,c,d);
                                        count++;
                                    }
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
