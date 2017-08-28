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
    double getX() const;
    double getY() const;
    double getZ() const;
    void setX(const double& x);
    void setY(const double& y);
    void setZ(const double& z);

private:
    double m_a;
    double m_y;
    double m_c;
};
//===============================================
#endif
//===============================================
