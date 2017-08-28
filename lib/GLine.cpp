//===============================================
#include "GLine.h"
GLine::GLine() {
    m_a = 0;
    m_b = 0;
    m_c = 0;
}
//===============================================
GLine::GLine(const GLine& line) {
    m_a = line.m_a;
    m_b = line.m_b;
    m_c = line.m_c;
}
//===============================================
GLine::GLine(const double& a, const double& b, const double& c) {
    m_a = a;
    m_b = b;
    m_c = c;
}
//===============================================
GLine::GLine(const double& x1, const double& y1, const double& x2, , const double& y2) {
    m_a = y2 - y1;
    m_b = -(x2 - x1);
    m_c = -(a*x1 + b*y1)
}
//===============================================
GLine::~GLine() {
    
}
//===============================================
double GLine::getX() const {
    return m_x;
}
//===============================================
double GLine::getY() const {
    return m_y;
}
//===============================================
double GLine::getZ() const {
    return m_z;
}
//===============================================
void GLine::setX(const double& x) {
    m_x = x;
}
//===============================================
void GLine::setY(const double& y) {
    m_y = y;
}
//===============================================
void GLine::setZ(const double& z) {
    m_z = z;
}
//===============================================
