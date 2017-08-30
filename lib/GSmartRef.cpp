//===============================================
#include "GSmartRef.h"
//===============================================
GSmartRef::GSmartRef() {
    m_ref = 0;
}
//===============================================
GSmartRef::GSmartRef(const GSmartRef& sRef) {
    m_ref = sRef.m_ref;
}
//===============================================

GSmartRef::GSmartRef(const int& ref) {
    m_ref = ref;
}
//===============================================

GSmartRef::~GSmartRef() {

}
//===============================================

int GSmartRef::get() const {
    return m_ref;
}
//===============================================

void GSmartRef::reset(const int& ref) {
    m_ref = ref;
}
//===============================================
ostream& operator<<(ostream& s, const GSmartRef<T>& sRef) {
    s << sRef.m_ref;
    return s;
}
//===============================================
