//===============================================
#include "GSmartPtr.h"
//===============================================
template<class T>
GSmartPtr<T>::GSmartPtr() {
    m_ptr = 0;
    m_sRef = new GSmartRef;
    m_sRef->add();
}
//===============================================
template<class T>
GSmartPtr<T>::GSmartPtr(const GSmartPtr<T>& sPtr) {
    m_ptr = sPtr.m_ptr;
    m_sRef = sPtr.m_sRef;
    m_sRef->add();
}
//===============================================
template<class T>
GSmartPtr<T>::GSmartPtr(T* ptr) {
    m_ptr = ptr;
    m_sRef = new GSmartRef;
    m_sRef->add();
}
//===============================================
template<class T>
GSmartPtr<T>::~GSmartPtr() {
    if(m_ptr == 0) return;
    if(m_sRef->release() > 0) return;
    cout << "GSmartPtr Destructor...\n";
    delete m_ptr;
    delete m_sRef;
    m_ptr = 0;
    m_sRef = 0;
}
//===============================================
template<class T>
T* GSmartPtr<T>::get() {
    return m_ptr;
}
//===============================================
template<class T>
void GSmartPtr<T>::reset(T* ptr) {
    if(m_ptr != 0) delete m_ptr;
    m_ptr = ptr;
}
//===============================================
