#include <stdio.h>

int main()
{
    int num[100]=-1;
    int cnt=0;
    char ch;
    int x,i,a,b,c,temp;
    printf("请输入一串数字（请用空格隔开并以-1结尾）："); 
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
	     	printf("该组数字从小到大的排序为：");
     
     for(c=0;c<=cnt;c++)
	     {
	     printf("%d\t",num[c]);
	     }
       return 0;
      // (ch=getchar())!='\n'
}

    

