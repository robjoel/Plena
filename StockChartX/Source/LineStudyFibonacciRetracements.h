// LineStudyFibonacciRetracements.h: interface for the CLineStudyFibonacciRetracements class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LineStudyFibonacciRetracements_H__7A7D922E_6014_4BA3_A6D9_1078DD4E8FDF__INCLUDED_)
#define AFX_LineStudyFibonacciRetracements_H__7A7D922E_6014_4BA3_A6D9_1078DD4E8FDF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "COL.h"

class CStockChartXCtrl;
class CLineStudyFibonacciRetracements : public CCOL  
{
public:
	void Reset();
	void SnapLine();
	void OnDoubleClick(CPoint point);
	void XORDraw(UINT nFlags, CPoint point);
	void OnMessage(LPCTSTR MsgGuid, int MsgID);
	CValueView m_valueView;
	void OnRButtonUp(CPoint point);
	void OnLButtonDown(CPoint point);
	void OnMouseMove(CPoint point);
	void OnLButtonUp(CPoint point);
	void OnPaint(CDC* pDC);	
	CLineStudyFibonacciRetracements(OLE_COLOR color, LPCTSTR Key, CChartPanel* owner);	
	virtual ~CLineStudyFibonacciRetracements();
private:
	std::vector<CLocation> fibLines;
	std::vector<double> fib;
	bool IsObjectClicked();
	void DrawLineStudy(CDC* pDC, CRectF rect);
	CString objectDescription;
	void DisplayInfo();
	bool displayed;
	bool dragging;
	bool xor;	
	bool moveCtr;	
	int buttonState;
	double startX;
	double startY;
	CORNER m_Move;
	CRectF newRect;
	CRectF oldRect;
	CStockChartXCtrl* pCtrl;

};

#endif // !defined(AFX_LineStudyFibonacciRetracements_H__7A7D922E_6014_4BA3_A6D9_1078DD4E8FDF__INCLUDED_)
