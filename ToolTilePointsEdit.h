/*
    This file is part of W3ZMapEditor (c).

    W3ZMapEditor is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    W3ZMapEditor is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with W3ZMapEditor; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
// ToolTilePointsEdit.h: interface for the CToolTilePointsEdit class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOOLTILEPOINTSEDIT_H__F16C671E_9FB9_4B0F_883B_54C9ABD73294__INCLUDED_)
#define AFX_TOOLTILEPOINTSEDIT_H__F16C671E_9FB9_4B0F_883B_54C9ABD73294__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Tool.h"
#include "TilePoint.h"
class CW3ZMapEditApp;
class CW3ZMapEditDoc;
class CW3ZMapEditView;


class CToolTilePointsEdit : public CTool  
{
public:
	void TileFill(CW3ZMapEditApp *pTheApp, CW3ZMapEditDoc *pDoc, CW3ZMapEditView *pView, int x, int y);
	void SetGround(CW3ZMapEditApp *pTheApp, CW3ZMapEditDoc *pDoc, CW3ZMapEditView *pView, int x, int y);
	void WaterRand();
	void WaterFlat();
	void GroundRand();
	void GroundFlat();
	void WaterBendDown();
	void WaterBendUp();
	void GroundBendDown();
	void GroundBendUp();
	void GroundSlope();
	void WaterSlope();
	void SetToolSize(int size);
	int GetToolSize();
	void ReplaceTool(CW3ZMapEditApp *pTheApp, CW3ZMapEditDoc *pDoc, CW3ZMapEditView *pView, int x, int y);
	void SelectTool(CW3ZMapEditApp *pTheApp, CW3ZMapEditDoc *pDoc, CW3ZMapEditView *pView, int x, int y);
	void TileWrite(CW3ZMapEditApp *pTheApp, CW3ZMapEditDoc *pDoc, CW3ZMapEditView *pView, int x, int y);
	void SetCursor();
	void OnKeyDown(CW3ZMapEditView *pView, UINT nChar, UINT nRepCnt, UINT nFlags);
	void OnLButtonUp(CW3ZMapEditView *pView, int nFlags, CPoint point);
	void OnLButtonDown(CW3ZMapEditView *pView, int nFlags, CPoint point);
	void OnMouseMove(CW3ZMapEditView *pView, int nFlags, CPoint point);
	void OnRButtonDown(CW3ZMapEditView *pView, int nFlags, CPoint point);
	void OnRButtonUp(CW3ZMapEditView *pView, int nFlags, CPoint point);
	CToolTilePointsEdit();
	virtual ~CToolTilePointsEdit();

protected:
	CPoint m_ptFillMin;
	CPoint m_ptFillMax;
	unsigned char ground;
	int m_iSize;
};

#endif // !defined(AFX_TOOLTILEPOINTSEDIT_H__F16C671E_9FB9_4B0F_883B_54C9ABD73294__INCLUDED_)
