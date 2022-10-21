#include <iostream>
#include "workManager.h"
using namespace std;

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	////测试代码
	//Worker* worker = NULL;
	//worker = new Boss(1, "张三", 1);
	//worker->showInfo();

	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->showInfo();
	//实例化管理者对象
	WorkerManager wm;

	int choice = 0; // 用来存储用户的选项

	while (true)
	{
		wm.Show_Menu();
		
		cout << "请输入您的选择: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://增加职工
			wm.Add_Emp();
			break;
		case 2://显示职工
			break;
		case 3://删除职工
			break;
		case 4://修改职工
			break;
		case 5://查找职工
			break;
		case 6://排序职工
			break;
		case 7://清空文档
			break;
		default:
			system("cls"); //清屏
			break;
		}
	}

	wm.Show_Menu();

	system("pause");
	return 0;
}