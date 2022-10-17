/*
职工分类: 分 3 类, 普通员工/经理/老板, 显示信息时, 需要显示职工编号,职工姓名,职工岗位,以及职责
普通员工职责: 完成经理交代的任务
经理职责: 完成老板交代的任务, 并下发任务给员工
老板职责:  管理公司所有事务

管理系统中需要实现的功能如下:
 *退出管理程序:
 *增加职工信息
 *显示职工信息
 *删除离职职工
 *修改职工信息
 *查找职工信息
 *按照编号排序
 *清空所有文档

*/
// #include <iostream>
// #include "workManager.h"
// using namespace std;

// #include "worker.h"
// #include "employee.h"
// #include "manager.h"
// #include "boss.h"

int main()
{
    ////测试代码
    // Worker* worker = NULL;
    // worker = new Boss(1, "张三", 1);
    // worker->showInfo();

    // delete worker;

    // worker = new Manager(2, "李四", 2);
    // worker->showInfo();
    //实例化管理者对象
    //  WorkerManager wm;

    // int choice = 0; // 用来存储用户的选项

    // while (true)
    // {
    // 	wm.Show_Menu();

    // 	cout << "请输入您的选择: " << endl;
    // 	cin >> choice;

    // 	switch (choice)
    // 	{
    // 	case 0://退出系统
    // 		wm.ExitSystem();
    // 		break;
    // 	case 1://增加职工
    // 		break;
    // 	case 2://显示职工
    // 		break;
    // 	case 3://删除职工
    // 		break;
    // 	case 4://修改职工
    // 		break;
    // 	case 5://查找职工
    // 		break;
    // 	case 6://排序职工
    // 		break;
    // 	case 7://清空文档
    // 		break;
    // 	default:
    // 		system("cls"); //清屏
    // 		break;
    // 	}
    // }

    // wm.Show_Menu();

    // system("pause");
    // return 0;
}