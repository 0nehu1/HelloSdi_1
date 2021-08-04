
// HelloSdi_1View.cpp: CHelloSdi1View 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "HelloSdi_1.h"
#endif

#include "HelloSdi_1Doc.h"
#include "HelloSdi_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHelloSdi1View

IMPLEMENT_DYNCREATE(CHelloSdi1View, CEditView)

BEGIN_MESSAGE_MAP(CHelloSdi1View, CEditView)
END_MESSAGE_MAP()

// CHelloSdi1View 생성/소멸

CHelloSdi1View::CHelloSdi1View() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CHelloSdi1View::~CHelloSdi1View()
{
}

BOOL CHelloSdi1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// 자동 래핑을 사용합니다.

	return bPreCreated;
}


// CHelloSdi1View 진단

#ifdef _DEBUG
void CHelloSdi1View::AssertValid() const
{
	CEditView::AssertValid();
}

void CHelloSdi1View::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CHelloSdi1Doc* CHelloSdi1View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHelloSdi1Doc)));
	return (CHelloSdi1Doc*)m_pDocument;
}
#endif //_DEBUG


// CHelloSdi1View 메시지 처리기
