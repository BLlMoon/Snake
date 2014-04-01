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
	void InitBoard(); //*��ʼ��
	void CreateSnake();//*��������
	void CreateSnake(RECT lpRect,POINT lpPos,HBITMAP * lpBitmap,HBRUSH hBrush); //*��������
	BOOL UpSnakeData();//*��������
	void MoveSnake(int key);//*�ƶ�����
	void Pause();     //*��ͣ
	void FoodsEet();  //*��ʳ��
	void FoodsProduce();//*����ʳ��
	void FoodsProduce(int number,int* lpType);//*����ʳ��
	void FoodsDisPlayTimer(); //*ʳ����ʾʱ��
	void DrawSnake(); //*������
	RECT DrawArea();  //*���ƿ��
	bool DrawGrid(bool DisPlay); //*���Ƹ���
	void DrawDisPlayData(); //*��ʾ����
	void CreateSnakeDC(HWND hWnd);//*�����豸������
	void ReleaseSnakeDC();//*�ͷ��豸������
	HDC  GetSnakeDC();   //*��ȡ�豸������
private:
	typedef struct _tagSnake //*��
	{
		POINT SnakeCurrentPos; 
		POINT InitialPos;
		int   Node;
		int   State;
		float Speed;
	}SNAKE,*PSNAKE;

	typedef struct _tagFoods //*ʳ��
	{
		POINT FoodsPos;
		BOOL  DisPlayState;
		int   Type;
	}FOODS,*PFOODS;

private:
	PSNAKE m_pSnake;   //*̰��������
	RECT   m_Rect;     //*�߿�����
	PFOODS m_Foods;    //*ʳ������
	int  m_Score;      //*����
	HWND m_hWnd;       //*���ھ��
	HDC  m_DC;         //*�豸��������
	HBITMAP  m_Bitmap; //*ͼƬ
	HBRUSH   m_Brush;  //*��ˢ
	HRGN  m_hRgn;      //*����
	HPEN  m_hPen;      //*��
protected:
	void Clear(); //*����ƶ��ۼ�

};
