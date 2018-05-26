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
	DDX_Control(pDX, IDC_SPACE_HOUSE, m_btnHOUSE);
	DDX_Control(pDX, IDC_SPACE_ROOM, m_btnROOM);
	DDX_Control(pDX, IDC_STRUCTURE_DOOR, m_btnDOOR);
	DDX_Control(pDX, IDC_STRUCTURE_WINDOW, m_btnWINDOW);
	DDX_Control(pDX, IDC_INTERIOR_REFRI, m_btnREFRI);
	DDX_Control(pDX, IDC_INTERIOR_TV, m_btnTV);
}


BEGIN_MESSAGE_MAP(CShapeViewCtrl, CDialogEx)
END_MESSAGE_MAP()


// CShapeViewCtrl message handlers



//BOOL CShapeViewCtrl::OnInitDialog()
//{
//	CDialogEx::OnInitDialog();
//
//	// TODO:  Add extra initialization here
//
//	return TRUE;  // return TRUE unless you set the focus to a control
//				  // EXCEPTION: OCX Property Pages should return FALSE
//}


BOOL CShapeViewCtrl::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Add extra initialization here
	m_btnDOOR.LoadBitmaps(IDB_bmp_DOOR);
	m_btnWINDOW.LoadBitmaps(IDB_bmp_WINDOW);
	m_btnTV.LoadBitmaps(IDB_bmp_TV);
	m_btnREFRI.LoadBitmaps(IDB_bmp_REFRI);
	m_btnHOUSE.LoadBitmaps(IDB_icon_HOUSE);
	m_btnROOM.LoadBitmaps(IDB_icon_ROOM);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void CShapeViewCtrl::OnBnClickedStructureDoor()
{
	// TODO: Add your control notification handler code here

}


void CShapeViewCtrl::OnBnClickedStructureWindow()
{
	// TODO: Add your control notification handler code here
}


void CShapeViewCtrl::OnBnClickedInteriorTv()
{
	// TODO: Add your control notification handler code here
}


void CShapeViewCtrl::OnBnClickedInteriorRefi()
{
	// TODO: Add your control notification handler code here
}
