//===============================================
#ifndef _GLine_
#define _GLine_
//===============================================
#include "GPoint.h"
//===============================================
class GLine {
public:
    GLine();
    GLine(const GLine& line);
    GLine(const double& a, const double& b, const double& c);
    GLine(const double& x1, const double& y1, const double& x2, const double& y2);
    GLine(const GPoint& pt1, const GPoint& pt2);
    ~GLine();

public:
    double getA() const;
    double getB() const;
    double getC() const;
    void setA(const double& a);
    void setB(const double& b);
    void setC(const double& c);

public:
    GVec director() const;
    GVec normal() const;
    bool collinear(const GLine& line) const;
    bool orthogonal(const GLine& line) const;
    
public:
    friend ostream& operator<<(ostream& s, const GLine& line); 

private:
    double m_a;
    double m_b;
    double m_c;
};
//===============================================
#endif
//===============================================
