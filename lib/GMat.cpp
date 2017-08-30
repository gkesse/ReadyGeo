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
    m_z = z;
}
//===============================================
bool GVec::isNull() const {
    bool m_null = true;
    m_null &= (m_x == 0);
    m_null &= (m_y == 0);
    m_null &= (m_z == 0);
    return m_null;
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
double GVec::dot(const GVec& vec) const {
    double m_data = 0;
    m_data += m_x*vec.m_x;
    m_data += m_y*vec.m_y;
    m_data += m_z*vec.m_z;
    return m_data;
}
//===============================================
GVec GVec::cross(const GVec& vec) const {
    GVec m_vec(true);
    m_vec.m_x = m_y*vec.m_z - m_z*vec.m_y;
    m_vec.m_y = m_z*vec.m_x - m_x*vec.m_z;
    m_vec.m_z = m_x*vec.m_y - m_y*vec.m_x;
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
