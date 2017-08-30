//===============================================
#include "GSmartPtr.h"
//===============================================
template<class T>
GSmartPtr<T>::GSmartPtr() {
    m_ptr = 0;
}
//===============================================
template<class T>
GSmartPtr<T>::GSmartPtr(const GSmartPtr<T>& sPtr) {
    m_ptr = sPtr.m_ptr;
}
//===============================================
template<class T>
GSmartPtr<T>::GSmartPtr(T* ptr) {
    m_ptr = ptr;
}
//===============================================
template<class T>
GSmartPtr<T>::~GSmartPtr() {
    if(m_ptr == 0) return;
    delete m_ptr;
    m_ptr = 0;
    cout << "GSmartPtr Destructor...\n";
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
