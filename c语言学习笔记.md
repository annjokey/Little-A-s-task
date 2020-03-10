#C语言学习笔记
上一个任务用纯c写了一个冒泡算法，在输入数据的部分代码有bug。
>scanf("%d",&x);
    while((ch=getchar())!='\n')
       {
			num[cnt]=x;
            cnt++;
           scanf("%d",&x);
		   }

这个代码运行起来便发num[0]总是等于0，后来在师兄的指导下用do/while的循环来实行数据的输入。
> do
	{
		// use them or "scanf("%d",&num[cnt++]);"
		scanf("%d",&cache);
		num[cnt]=cache;
		cnt++;
	}while((ch=getchar())!='\n');

师兄解释num[0]恒等于0是因为getchar会读掉第一个数字的字符。