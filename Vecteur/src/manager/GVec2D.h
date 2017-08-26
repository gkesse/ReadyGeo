//===============================================
#ifndef _GVec2D_
#define _GVec2D_
//===============================================
#include <iostream>
//===============================================
using namespace std;
//===============================================
class GVec2D {
public:
    GVec2D();
    GVec2D(const GVec2D& vec);
    GVec2D(const double& x, const double& y);
    ~GVec2D();

public:
    double getX() const;
    double getY() const;
    void setX(const double& x);
    void setY(const double& y);

public:
    double length() const;
    GVec2D normalize() const;
    
public:
    friend ostream& operator<<(ostream& s, const GVec2D& vec); 
    friend GVec2D operator/(const GVec2D& vec, const double& d);
    
private:
    double m_x;
    double m_y;
};
//===============================================
#endif
//===============================================
