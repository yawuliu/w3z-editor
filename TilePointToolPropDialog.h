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
#if !defined(AFX_TILEPOINTTOOLPROPDIALOG_H__8A102F4D_C731_40DB_9E14_D025527D0E54__INCLUDED_)
#define AFX_TILEPOINTTOOLPROPDIALOG_H__8A102F4D_C731_40DB_9E14_D025527D0E54__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TilePointToolPropDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CTilePointToolPropDialog dialog

class CTilePointToolPropDialog : public CDialog
{
// Construction
public:
	CTilePointToolPropDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CTilePointToolPropDialog)
	enum { IDD = IDD_DLG_TILEPOINTTOOL_PROP };
	int		m_iDetailsRange;
	int		m_iGrndHeightAmp;
	int		m_iWaterHeightAmp;
	int		m_iSize;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTilePointToolPropDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CTilePointToolPropDialog)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TILEPOINTTOOLPROPDIALOG_H__8A102F4D_C731_40DB_9E14_D025527D0E54__INCLUDED_)
