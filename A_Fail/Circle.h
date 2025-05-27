#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    Circle(float r) { m_radius = r; }
    ~Circle() {}

    float Area() override {
        return 3.14f * m_radius * m_radius;
    }

    void SetRadius(float radius) { m_radius = radius; }
    float GetRadius() { return m_radius; }

private:
    float m_radius;
};