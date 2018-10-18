#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("2018软件一班的课表查询器beta0.3 BY 吕振波\n");
    printf("由于没有用数据库，只能这样写。\n");
    while(1)
    {
        int zc=0;
        int xq=0;
        int jc=0;
        printf("请输入周次（从第6周开始，6-18）:");
        scanf("%d",&zc);
        printf("请输入星期（1-7）：");
        scanf("%d",&xq);
        printf("请输入节次（1-6）；");
        scanf("%d",&jc);
        if(zc==6||zc==8)//第六、八周
        {
            if(xq==1)
            {
                if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2302\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2607\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：应用文写作 老师：王淑华 地点：3321A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2312\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==7||zc==9)//第七、九周
        {
            if(xq==1)
            {
                if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2604B\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2611\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：应用文写作 老师：王淑华 地点：3321A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2312\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==3)
                    printf("课：C语言程序设计 老师：房正华 地点：2303\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==10)//第十周
        {
            if(xq==1)
            {
                if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2302\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2607\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：应用文写作 老师：王淑华 地点：3321A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2312\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==6)
            {
                if(jc==3)
                    printf("课：大学生心理健康教育 老师：陈亚楠 地点：3121\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==11)//第十一周
        {
            if(xq==1)
            {
                if(jc==1)
                    printf("课：应用文写作 老师：王淑华 地点：3321A\n");
                else if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2604B\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2611\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：中国传统文化 老师：李辉东 地点：2304\n");
                else if(jc==4)
                    printf("课：职业生涯与发展规划 老师：梁宏涛 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2312\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==3)
                    printf("课：C语言程序设计 老师：房正华 地点：2303\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==6)
            {
                if(jc==3)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else if(jc==4)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==12)//第十二周
        {
            if(xq==1)
            {

                if(jc==1)
                    printf("课：应用文写作 老师：王淑华 地点：3321A\n");
                else if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2302\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2607\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：中国传统文化 老师：李辉东 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2312\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==6)
            {
                if(jc==3)
                    printf("课：大学生心理健康教育 老师：陈亚楠 地点：3121\n");
                else if(jc==4)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==13)//第十三周
        {
            if(xq==1)
            {
                if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2604B\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2611\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：中国传统文化 老师：李辉东 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2312\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==3)
                    printf("课：C语言程序设计 老师：房正华 地点：2303\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==6)
            {
                if(jc==3)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else if(jc==4)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==14)//第十四周
        {
            if(xq==1)
            {

                if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2302\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2607\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：中国传统文化 老师：李辉东 地点：2304\n");
                else if(jc==4)
                    printf("课：职业生涯与发展规划 老师：梁宏涛 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2402\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==3)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2302\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==6)
            {
                if(jc==4)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==15)//第十五周
        {
            if(xq==1)
            {
                if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2604B\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2609\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else if(jc==5)
                    printf("课：计算机科学导论 老师：万泉 地点：2610\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：中国传统文化 老师：李辉东 地点：2304\n");
                else if(jc==5)
                    printf("课：计算机科学导论 老师：万泉 地点：2610\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2402\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==6)
            {
                if(jc==3)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else if(jc==4)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==16)//第十六周
        {
            if(xq==1)
            {

                if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==3)
                    printf("课：计算机科学导论 老师：陈晓君 地点：2302\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2607\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else if(jc==5)
                    printf("课：计算机科学导论 老师：万泉 地点：2610\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==1)
                    printf("课：C语言程序设计 老师：房正华 地点：2302\n");
                else if(jc==2)
                    printf("课：中国传统文化 老师：李辉东 地点：2304\n");
                else if(jc==5)
                    printf("课：计算机科学导论 老师：万泉 地点：2610\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==6)
            {
                if(jc==4)
                    printf("课：学科前沿概论 老师：孙文汇 房正华 地点：2304\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
            else if(zc==17)//第十七周
        {
            if(xq==1)
            {
                if(jc==2)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==2)
            {
                if(jc==1)
                    printf("课：计算机科学导论 老师：万泉 地点：2615\n");
                else if(jc==3)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else if(jc==5)
                    printf("课：计算机科学导论 老师：万泉 地点：2610\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==2)
                    printf("课：中国传统文化 老师：李辉东 地点：2304\n");
                else if(jc==5)
                    printf("课：计算机科学导论 老师：万泉 地点：2610\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==2)
                    printf("课：C语言程序设计实验 老师：房正华 地点：2610\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else if(jc==4)
                    printf("课；思想道德修养与法律基础 老师；姜文文 地点；2404A\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else if(zc==18)//第十八周
        {
            if(xq==2)
            {
                if(jc==3)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==3)
            {
                if(jc==2)
                    printf("课：中国传统文化 老师：李辉东 地点：2304\n");
                else if(jc==5)
                    printf("课：计算机科学导论 老师：万泉 地点：2610\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==4)
            {
                if(jc==1)
                    printf("课：大学英语读写I 老师：刘洋 地点：2404A\n");
                else if(jc==3)
                    printf("课；体育I\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else if(xq==5)
            {
                if(jc==1)
                    printf("课：大学英语听说I 老师：刘洋 地点：2303\n");
                else if(jc==2)
                    printf("课：高等数学II（上） 老师；郑素华 地点；2404B\n");
                else
                    printf("这节无课或你数据输错了\n");
            }
            else
                printf("这节无课或你数据输错了\n");
        }
        else
            printf("这节无课或你数据输错了\n");
        system("pause");
    }
    return 0;
}
