//===============================================
#include "GVec2D.h"
//===============================================
GVec2D::GVec2D() {
    m_x = 0;
    m_y = 0;
}
//===============================================
GVec2D::GVec2D(const GVec2D& vec) {
    m_x = vec.m_x;
    m_y = vec.m_y;
}
//===============================================
GVec2D::GVec2D(const double& x, const double& y) {
    m_x = x;
    m_y = y;
}
//===============================================
GVec2D::~GVec2D() {
    
}
//===============================================
double GVec2D::getX() const {
    return m_x;
}
//===============================================
double GVec2D::getY() const {
    return m_y;
}
//===============================================
void GVec2D::setX(const double& x) {
    m_x = x;
}
//===============================================
void GVec2D::setY(const double& y) {
    m_y = y;
}
//===============================================
double GVec2D::length() const {
    double m_length = sqrt(m_x*m_x + m_y*m_y);
    return m_length;
}
//===============================================
GVec2D GVec2D::normalize() const {
    GVec2D m_vec = (*this)/length();
    return m_vec;
}
//===============================================
ostream& operator<<(ostream& s, const GVec2D& vec) {
    s << "(" << vec.m_x << " ; " << vec.m_y << ")";
    return s;
}
//===============================================
GVec2D operator/(const GVec2D& vec, const double& d) {
    GVec2D m_vec(vec.m_x/d, vec.m_y/d);
    return m_vec;
}
//===============================================
