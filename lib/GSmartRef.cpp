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
void GSmartRef::add() {
    m_ref++;
}
//===============================================
int GSmartRef::release() {
    m_ref--;
    return m_ref;
}
//===============================================
ostream& operator<<(ostream& s, const GSmartRef& sRef) {
    s << sRef.m_ref;
    return s;
}
//===============================================
