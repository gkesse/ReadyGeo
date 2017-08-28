//===============================================
#include "GPoint.h"
//===============================================
GPoint::GPoint(const bool& is3D) {
    m_x = 0;
    m_y = 0;
    m_z = 0;
    m_is3D = is3D;
}
//===============================================
GPoint::GPoint(const GPoint& pt) {
    m_x = pt.m_x;
    m_y = pt.m_y;
    m_z = pt.m_z;
    m_is3D = pt.m_is3D;
}
//===============================================
GPoint::GPoint(const double& x, const double& y) {
    m_x = x;
    m_y = y;
    m_z = 0;
    m_is3D = false;
}
//===============================================
GPoint::GPoint(const double& x, const double& y, const double& z) {
    m_x = x;
    m_y = y;
    m_z = z;
    m_is3D = true;
}
//===============================================
GPoint::~GPoint() {
    
}
//===============================================
double GPoint::getX() const {
    return m_x;
}
//===============================================
double GPoint::getY() const {
    return m_y;
}
//===============================================
double GPoint::getZ() const {
    return m_z;
}
//===============================================
void GPoint::setX(const double& x) {
    m_x = x;
}
//===============================================
void GPoint::setY(const double& y) {
    m_y = y;
}
//===============================================
void GPoint::setZ(const double& z) {
    m_z = z;
}
//===============================================
double GPoint::dist(const GPoint& pt) const {
    GVec m_vec = this->vec(pt);
    double m_dist = m_vec.length();
    return m_dist;
}
//===============================================
GVec GPoint::vec(const GPoint& pt) const {
    GVec m_vec(pt.m_is3D);
    m_vec.setX(pt.m_x - m_x);
    m_vec.setY(pt.m_y - m_y);
    m_vec.setZ(pt.m_z - m_z);
    return m_vec;
}
//===============================================
ostream& operator<<(ostream& s, const GPoint& pt) {
    s << "(" << pt.m_x << " ; " << pt.m_y;
    if(pt.m_is3D == true) s << " ; " << pt.m_z;
    s << ")";
    return s;
}
//===============================================
GPoint operator+(const GPoint& pt, const GVec& vec) {
    GPoint m_pt(pt.m_is3D);
    m_pt.setX(pt.m_x + vec.getX());
    m_pt.setY(pt.m_y + vec.getY());
    m_pt.setZ(pt.m_z + vec.getZ());
    return m_pt;
}
//===============================================
GPoint operator-(const GPoint& pt, const GVec& vec) {
    GPoint m_pt(pt.m_is3D);
    m_pt.setX(pt.m_x - vec.getX());
    m_pt.setY(pt.m_y - vec.getY());
    m_pt.setZ(pt.m_z - vec.getZ());
    return m_pt;
}
//===============================================
