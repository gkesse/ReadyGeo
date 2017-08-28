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
GLine::GLine(const double& x1, const double& y1, const double& x2, const double& y2) {
    m_a = y2 - y1;
    m_b = -(x2 - x1); 
    m_c = -(m_a*x1 + m_b*y1);
}
//===============================================
GLine::GLine(const GPoint& pt1, const GPoint& pt2) {
    m_a = pt2.getY() - pt1.getY();
    m_b = -(pt2.getX() - pt1.getX()); 
    m_c = -(m_a*pt1.getX() + m_b*pt1.getY());
}
//===============================================
GLine::~GLine() {
    
}
//===============================================
double GLine::getA() const {
    return m_a;
}
//===============================================
double GLine::getB() const {
    return m_b;
}
//===============================================
double GLine::getC() const {
    return m_c;
}
//===============================================
void GLine::setA(const double& a) {
    m_a = a;
}
//===============================================
void GLine::setB(const double& b) {
    m_b = b;
}
//===============================================
void GLine::setC(const double& c) {
    m_c = c;
}
//===============================================
GVec GLine::director() const {
    GVec m_vec(-m_b, m_a);
    return m_vec;
}
//===============================================
GVec GLine::normal() const {
    GVec m_vec(m_a, m_b);
    return m_vec;
}
//===============================================
bool GLine::collinear(const GLine& line) const {
    bool m_col = director().cross(line.director()).isNull();
    return m_col;
}
//===============================================
ostream& operator<<(ostream& s, const GLine& line) {
    s << "(" << line.m_a << " ; ";
    s << line.m_b << " ; ";
    s << line.m_c << ")";
    return s;
}
//===============================================
