#pragma once
#define BOARDNUM 20

class CSnakeData
{
public:
	CSnakeData(void);
	virtual ~CSnakeData(void);
	CSnakeData * GetData(); //*������ָ��

public:
	int   m_Board[BOARDNUM][BOARDNUM]; //*��������
	POINT m_CurrentPos; //*��ǰ������λ��
	RECT  m_gridWidth; //*���ӿ��
};
