#pragma once
#include "SnakeData.h"

class CControl
{
public:
	CControl(void);
	virtual ~CControl(void);
private:
	BOOL SeveReCode(); //*�����¼
	BOOL ReadReCode(); //*��ȡ��¼
	BOOL deleteReCode();//*ɾ����¼

};
