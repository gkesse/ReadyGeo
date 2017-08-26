//===============================================
#include "GVec.h"
//===============================================
GVec::GVec(const bool& is3D) {
    m_x = 0;
    m_y = 0;
    m_z = 0;
    m_is3D = is3D;
}
//===============================================
GVec::GVec(const GVec& vec) {
    m_x = vec.m_x;
    m_y = vec.m_y;
    m_z = vec.m_z;
    m_is3D = vec.m_is3D;
}
//===============================================
GVec::GVec(const double& x, const double& y) {
    m_x = x;
    m_y = y;
    m_z = 0;
    m_is3D = false;
}
//===============================================
GVec::GVec(const double& x, const double& y, const double& z) {
    m_x = x;
    m_y = y;
    m_z = z;
    m_is3D = true;
}
//===============================================
GVec::~GVec() {
    
}
//===============================================
double GVec::getX() const {
    return m_x;
}
//===============================================
double GVec::getY() const {
    return m_y;
}
//===============================================
double GVec::getZ() const {
    return m_z;
}
//===============================================
void GVec::setX(const double& x) {
    m_x = x;
}
//===============================================
void GVec::setY(const double& y) {
    m_y = y;
}
//===============================================
void GVec::setZ(const double& z) {
    m_y = z;
}
//===============================================
double GVec::length() const {
    double m_length = sqrt(m_x*m_x + m_y*m_y + m_z*m_z);
    return m_length;
}
//===============================================
GVec GVec::normalize() const {
    GVec m_vec = (*this)/length();
    return m_vec;
}
//===============================================
ostream& operator<<(ostream& s, const GVec& vec) {
    s << "(" << vec.m_x << " ; " << vec.m_y;
    if(vec.m_is3D == true) s << " ; " << vec.m_z;
    s << ")";
    return s;
}
//===============================================
GVec operator/(const GVec& vec, const double& d) {
    GVec m_vec(vec.m_x/d, vec.m_y/d, vec.m_z/d);
    return m_vec;
}
//===============================================
