
// HelloSdi_1View.h: CHelloSdi1View 클래스의 인터페이스
//

#pragma once


class CHelloSdi1View : public CEditView
{
protected: // serialization에서만 만들어집니다.
	CHelloSdi1View() noexcept;
	DECLARE_DYNCREATE(CHelloSdi1View)

// 특성입니다.
public:
	CHelloSdi1Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 구현입니다.
public:
	virtual ~CHelloSdi1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // HelloSdi_1View.cpp의 디버그 버전
inline CHelloSdi1Doc* CHelloSdi1View::GetDocument() const
   { return reinterpret_cast<CHelloSdi1Doc*>(m_pDocument); }
#endif

