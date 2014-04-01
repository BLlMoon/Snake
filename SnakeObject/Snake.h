#pragma once
#define  MAX_SPEED 5000

#define  DISPLAY_TRUE  TRUE
#define  DISPLAY_FALSE FALSE

enum {SNAKE_DEATH,SNAKE_ALIVE,SNAKE_MOVE,SNAKE_PAUSE}; 

class CSnake
{
public:
	CSnake(void);
	CSnake(HDC dc):m_DC(dc){}
	virtual ~CSnake(void);
	void InitBoard(); //*初始化
	void CreateSnake();//*创建函数
	void CreateSnake(RECT lpRect,POINT lpPos,HBITMAP * lpBitmap,HBRUSH hBrush); //*创建函数
	BOOL UpSnakeData();//*更新数据
	void MoveSnake(int key);//*移动控制
	void Pause();     //*暂停
	void FoodsEet();  //*吃食物
	void FoodsProduce();//*产生食物
	void FoodsProduce(int number,int* lpType);//*产生食物
	void FoodsDisPlayTimer(); //*食物显示时间
	void DrawSnake(); //*绘制蛇
	RECT DrawArea();  //*绘制框架
	bool DrawGrid(bool DisPlay); //*绘制格子
	void DrawDisPlayData(); //*显示数据
	void CreateSnakeDC(HWND hWnd);//*创建设备描述表
	void ReleaseSnakeDC();//*释放设备描述表
	HDC  GetSnakeDC();   //*获取设备描述表
private:
	typedef struct _tagSnake //*蛇
	{
		POINT SnakeCurrentPos; 
		POINT InitialPos;
		int   Node;
		int   State;
		float Speed;
	}SNAKE,*PSNAKE;

	typedef struct _tagFoods //*食物
	{
		POINT FoodsPos;
		BOOL  DisPlayState;
		int   Type;
	}FOODS,*PFOODS;

private:
	PSNAKE m_pSnake;   //*贪吃蛇数据
	RECT   m_Rect;     //*边框设置
	PFOODS m_Foods;    //*食物数据
	int  m_Score;      //*分数
	HWND m_hWnd;       //*窗口句柄
	HDC  m_DC;         //*设备描述表句柄
	HBITMAP  m_Bitmap; //*图片
	HBRUSH   m_Brush;  //*笔刷
	HRGN  m_hRgn;      //*区域
	HPEN  m_hPen;      //*笔
protected:
	void Clear(); //*清除移动痕迹

};
