#Git学习笔记
在一开始接到任务的时候我上非常懵逼的，因为无论git，github和命令行等名词在我脑海中是一片空白的
###学习步骤
####第一步
先在百度百科和知乎对git/github进行大概的了解，在脑海里面建立一个框架，以便制定学习计划。
####第二步
在b站上面搜索课程，由于课程时间比较紧迫，综合考虑下选择了一个三小时的速学课程。
####第三步
根据课程安排，计划前两天进行理论的课程学习，第二天晚上开始到第三天进行实践操作。

###遇到问题
由于我是os系统所以部分操作与课程不符合，特别是git的下载和初始化浪费了比较多的时间

#git基本命令
>touch ——创建新文件
git status ——查看状态
git add  ——添加到暂存区
git commit -m ‘....’ ---- 从暂存区提交到仓库
vi  —— 打开编辑文件
wq----保存
cat   ——在终端查看文件内容
rm  ——删除文件
git rm  ——从git中删除文件
git commit -m ‘....‘——提交
cd +路径=到某文件下操作
git push----提交到仓库 
git clone http//…. ——下载github仓库中的文件

###初始化git
>打开终端
初始化git（仅第一次使用需要）：git config --global user.name "..."
											git config --global user.email "....com"
通过终端命令创建ssh key:ssh-keygen -t rsa -C ".....com"
用cat查找ssh key ：cat .ssh/id_rsa.pub
复制ssh key后在已经申请的github上面添加ssh key
链接验证：ssh -T git@github.com

###提交本地项目到GitHub
>用 git clone把GitHub里面的仓库下载到桌面
git add:把文件添加到暂存区
git commit -m"..."--把文件提交到本地仓库
git push --把文件提交到远程仓库（github）

###对已提交的项目进行修改
>vi ----打开文件进行编辑
修改后执行提交本地项目带github的步骤

###对已提交的项目进行删除
>rm----删除文件
git rm ----从git中删除文件
git commit -m“提交描述”