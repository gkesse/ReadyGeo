//===============================================
#ifndef _GSmartPtr_
#define _GSmartPtr_
//===============================================
#include "GSmartRef.h"
#include <iostream>
//===============================================
using namespace std;
//===============================================
template<class T>
class GSmartPtr {
public:
    GSmartPtr();
    GSmartPtr(const GSmartPtr<T>& sPtr);
    GSmartPtr(T* ptr);
    ~GSmartPtr();

public:
    T* get();
    void reset(T* ptr);
    
public:
    //===============================================
    T& operator*() {
        return *m_ptr;
    }
    //===============================================
    T* operator->() {
        return m_ptr;
    }
    //===============================================
    GSmartPtr& operator=(const GSmartPtr<T>& sPtr) {
        if(m_ptr != 0) delete m_ptr;
        m_ptr = sPtr.m_ptr;
        m_sRef = sPtr.m_sRef;
        m_sRef->add();
        return *this;
    }
    //===============================================
    friend ostream& operator<<(ostream& s, const GSmartPtr<T>& sPtr) {
        if(sPtr.m_ptr == 0) return s;
        s << *(sPtr.m_ptr) << " : Ref : " << *(sPtr.m_sRef);
        return s;
    }
    //===============================================
private:
    T* m_ptr;
    GSmartRef* m_sRef;
};
//===============================================
#include "GSmartPtr.cpp"
//===============================================
#endif
//===============================================
