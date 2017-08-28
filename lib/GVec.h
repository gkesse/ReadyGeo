//===============================================
#ifndef _GVec_
#define _GVec_
//===============================================
#include <iostream>
//===============================================
using namespace std;
//===============================================
class GVec {
public:
    GVec(const bool& is3D = false);
    GVec(const GVec& vec);
    GVec(const double& x, const double& y);
    GVec(const double& x, const double& y, const double& z);
    ~GVec();

public:
    double getX() const;
    double getY() const;
    double getZ() const;
    void setX(const double& x);
    void setY(const double& y);
    void setZ(const double& z);

public:
    double length() const;
    GVec normalize() const;
    double dot(const GVec& vec) const;
    GVec cross(const GVec& vec) const;
    
public:
    friend ostream& operator<<(ostream& s, const GVec& vec); 
    friend GVec operator/(const GVec& vec, const double& d);
    
private:
    double m_x;
    double m_y;
    double m_z;
    bool m_is3D;
};
//===============================================
#endif
//===============================================
