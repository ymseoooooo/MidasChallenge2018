// CShapeViewCtrl.cpp : implementation file
//

#include "stdafx.h"
#include "SelfInterior.h"
#include "CShapeViewCtrl.h"
#include "afxdialogex.h"


// CShapeViewCtrl dialog

IMPLEMENT_DYNAMIC(CShapeViewCtrl, CDialogEx)

CShapeViewCtrl::CShapeViewCtrl(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SHAPE, pParent)
{

}

CShapeViewCtrl::~CShapeViewCtrl()
{
}

void CShapeViewCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CShapeViewCtrl, CDialogEx)
END_MESSAGE_MAP()


// CShapeViewCtrl message handlers

