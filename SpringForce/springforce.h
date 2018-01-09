#ifndef SPRINGFORCE_H
#define SPRINGFORCE_H

class SpringForce
{
private:
    double Amplitude;       /* A */
    double SpringConstant;  /* k */
    double ObjectMass;      /* m */

public:
    SpringForce();
    SpringForce(double inAmplitude, double inSpringConstant, double inObjectMass);

    double getAmplitude() const;
    void  setAmplitude(double value);
    double getSpringConstant() const;
    void  setSpringConstant(double value);
    double getObjectMass() const;
    void  setObjectMass(double value);

    double calcMotion(double t);
};

#endif // SPRINGFORCE_H
