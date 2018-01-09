
#include <QtMath>

#include "springforce.h"


SpringForce::SpringForce()
{
    // values from https://answers.yahoo.com/question/index?qid=20081108201653AAReHnQ -> x = 1.20cm
    Amplitude       = 1.0;
    SpringConstant  = 81.75;
    ObjectMass      = 100;
}

SpringForce::SpringForce(double inAmplitude, double inSpringConstant, double inObjectMass)
{
    Amplitude       = inAmplitude;
    SpringConstant  = inSpringConstant;
    ObjectMass      = inObjectMass;
}

double SpringForce::getAmplitude() const
{
    return Amplitude;
}

void SpringForce::setAmplitude(double value)
{
    Amplitude = value;
}

double SpringForce::getSpringConstant() const
{
    return SpringConstant;
}

void SpringForce::setSpringConstant(double value)
{
    SpringConstant = value;
}

double SpringForce::getObjectMass() const
{
    return ObjectMass;
}

void SpringForce::setObjectMass(double value)
{
    ObjectMass = value;
}

double SpringForce::calcMotion(double t)
{
    return Amplitude * qCos(qSqrt(SpringConstant/ObjectMass) * t);
}
