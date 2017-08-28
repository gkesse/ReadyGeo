//===============================================
#ifndef _GLine_
#define _GLine_
//===============================================
#include <iostream>
//===============================================
using namespace std;
//===============================================
class GLine {
public:
    GLine();
    GLine(const GLine& line);
    GLine(const double& a, const double& b, const double& c);
    ~GLine();

public:
    double getA() const;
    double getB() const;
    double getC() const;
    void setA(const double& a);
    void setB(const double& b);
    void setC(const double& c);

private:
    double m_a;
    double m_y;
    double m_c;
};
//===============================================
#endif
//===============================================
