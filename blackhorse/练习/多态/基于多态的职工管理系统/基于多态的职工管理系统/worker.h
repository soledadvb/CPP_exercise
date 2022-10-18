#pragma once
#include <iostream>
using namespace std;
#include <string>

//职工抽象类  因为不做任何实现，使用不用创建源文件
class Worker
{
public:


	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位
	virtual string getDeptName() = 0;

	//职工编号
	int m_Id;

	//职工姓名
	string m_Name;

	//部门编号
	int m_DeptId;
};