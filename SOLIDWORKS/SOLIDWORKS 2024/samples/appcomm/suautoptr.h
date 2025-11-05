//$c2   MRL 07/28/05	to SW2007_a1
//$c1   MRL 04/14/05	created
//========================================================================	//
//              Copyright 2005 (Unpublished Material)															//
//                  SolidWorks Corporation.       																//
//========================================================================//
//
//     File Name: 	suAutoPtr.h
//     
//     Application:  SU
//     
//     Contents: suAutoPtr -- much like std::auto_ptr but play nice with SU memmgt
//	   Notes: no weird modifying ctors, at least initially
//
//========================================================================//
#ifndef SWAUTOPTR_H
#define SWAUTOPTR_H

template <class T>
class suAutoPtr
{
public:
	typedef T element_type;
	suAutoPtr() : iPtr(0) {}
	explicit suAutoPtr(T *t) : iPtr(t) {}
	~suAutoPtr() { reset(); }

	T *get() const			{ return iPtr; }
	T *release()			{ T *pT = iPtr; iPtr = 0; return pT; }
	void reset(T *pT = 0)	{ if(iPtr && iPtr != pT) { SU_DELETE iPtr; } iPtr = pT; }

	suAutoPtr<T> &operator= (T *pT)			{ reset(pT); return *this; }
	T &operator*() const					{ return *iPtr; }
	T *operator->() const					{ return iPtr; }
	operator T *() const					{ return iPtr; }

private:
	T *iPtr;


};

#endif