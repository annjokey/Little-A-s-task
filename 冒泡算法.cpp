#include <stdio.h>

int main()
{
    int num[100]=-1;
    int cnt=0;
    char ch;
    int x,i,a,b,c,temp;
    printf("������һ�����֣����ÿո��������-1��β����"); 
    scanf("%d",&x);
    while(x!=-1)
       {
			num[cnt]=x;
            cnt++;
           scanf("%d",&x);
       }
    
    	for(b=cnt;b>0;b--)
			{
				for(a=0;a<b;a++)
		    		{
						if(num[a]>num[a+1])
							{
					    		temp=num[a];
					    		num[a]=num[a+1];
					    		num[a+1]=temp;
					    	}
		            }
	     	}
	     	printf("�������ִ�С���������Ϊ��");
     
     for(c=0;c<=cnt;c++)
	     {
	     printf("%d\t",num[c]);
	     }
       return 0;
      // (ch=getchar())!='\n'
}

    

