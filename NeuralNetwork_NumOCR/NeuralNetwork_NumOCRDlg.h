
// NeuralNetwork_NumOCRDlg.h : ヘッダー ファイル
//

#pragma once


#include "FFNN.h"

// 結果表示欄の最大行数
#define RESULTDISP_MAXRAW (12)

// CNeuralNetworkNumOCRDlg ダイアログ
class CNeuralNetworkNumOCRDlg : public CDialog
{
// コンストラクション
public:
	CNeuralNetworkNumOCRDlg(CWnd* pParent = NULL);	// 標準コンストラクター
	~CNeuralNetworkNumOCRDlg();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NEURALNETWORK_NUMOCR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	BOOL m_bLButton;

	HDC m_hdcInput;
	HBITMAP m_hbmpInput;
	COLORREF *m_lpInputPxl;
	CRect m_rcInput;
	FF_Neural m_NumOcr;
	CFont m_stResFont;

	void GetInputPixel(doubleVec &vecInput);

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedExec();
	afx_msg void OnBnClickedClear();
	afx_msg void OnBnClickedTrain();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	CStatic m_numInput;
	CButton m_btnRecog;
	CButton m_btnClear;
	CStatic m_stRes;
	afx_msg void OnClose();
	CButton m_btnTrain;
};
