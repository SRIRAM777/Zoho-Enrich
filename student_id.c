#include <stdio.h>

int main()
{

char name[5][20]={"B.Raghav","Ashok V","Raghav Bala", "Suresh Ramalingam", "KM.Suresh"};
int i,j,k;
char name1[5][10];
int flag=0;

for(i=0;i<5;i++)
{
    k=0;
    for(j=0;name[i][j]!='\0';j++)
    {
        if(name[i][j]=='.')
        {
            flag=1;
            k=0;
            j++;
            if(name[i][j]!=' ')
            {
                name1[i][k]=name[i][j];
                k++;
                continue;
            }
            else
            {
                break;
            }
        }
        else
        {
            if(flag==1)
            {
                if(name[i][j]!=' ')
                {
                    name1[i][k]=name[i][j];
                    k++;
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        if(name[i][j]!=' ')
        {
            name1[i][k]=name[i][j];
            k++;
        }
    }
}

for(i=0;i<5;i++)
{
printf("%s\t%d",name1[i],i);
printf("\n");
}

return 0;
}
