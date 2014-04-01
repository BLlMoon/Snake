#pragma once
#include "SnakeData.h"

class CControl
{
public:
	CControl(void);
	virtual ~CControl(void);
private:
	BOOL SeveReCode(); //*保存记录
	BOOL ReadReCode(); //*读取记录
	BOOL deleteReCode();//*删除记录

};
