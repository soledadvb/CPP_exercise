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

	//չʾ�˵�
	void Show_Menu();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;


	//t���ְ��
	void Add_Emp();


	//�˳�ϵͳ
	void ExitSystem();

	~WorkerManager();
};