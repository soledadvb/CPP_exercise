#pragma once
#include <iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
class WorkerManager
{
public:
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;


	//t添加职工
	void Add_Emp();


	//退出系统
	void ExitSystem();

	~WorkerManager();
};