#include "StdAfx.h"
#include "Snake.h"

CSnake::CSnake(void)
{
	m_Rect.top    = 20;
	m_Rect.left   = 20;
	m_Rect.right  = 750;
	m_Rect.bottom = 550;
	m_Score  = 0;
	m_pSnake = NULL;
	m_Foods  = NULL;
}

CSnake::~CSnake(void)
{
	if(m_pSnake)
	{
		delete[] m_pSnake;
	}
	m_Rect.left   = 0;
	m_Rect.top    = 0;
	m_Rect.right  = 0;
	m_Rect.bottom = 0;
	m_Score  = 0;
	m_pSnake = NULL;
	m_Foods  = NULL;
}


void CSnake::InitBoard()
{
	m_Rect.top    = 20;
	m_Rect.left   = 20;
	m_Rect.right  = 750;
	m_Rect.bottom = 550;
}

BOOL CSnake::UpSnakeData()
{
	return TRUE;
}

void CSnake::Pause()
{

}
void CSnake::FoodsDisPlayTimer()
{

}
void CSnake::FoodsEet()
{

}
void CSnake::FoodsProduce(int number,int* lpType)
{

}
void CSnake::FoodsProduce()
{

}
void CSnake::MoveSnake(int key)
{

}

void CSnake::CreateSnake()
{

}

void CSnake::CreateSnake(RECT rect,POINT lpPos,HBITMAP * lpBitmap)
{

}

void CSnake::DrawArea()
{
	
}