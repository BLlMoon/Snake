#pragma once
#define BOARDNUM 20

class CSnakeData
{
public:
	CSnakeData(void);
	virtual ~CSnakeData(void);
	CSnakeData * GetData(); //*返回类指针

public:
	int   m_Board[BOARDNUM][BOARDNUM]; //*格子数组
	POINT m_CurrentPos; //*当前蛇所在位置
	RECT  m_gridWidth; //*格子宽度
};
