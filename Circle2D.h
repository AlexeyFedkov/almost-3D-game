//
// Created by alexey- on 21.01.2020.
//

#ifndef PSEUDO3DENGINE_CIRCLE2D_H
#define PSEUDO3DENGINE_CIRCLE2D_H

#include "Object2D.h"
#include "settings.h"

class Circle2D : public Object2D{
private:
    double d_radius = 0;
public:
    explicit Circle2D(double radius = 0.5, Point2D position = {0, 0}, double height = 1, std::string texture = COLUMN_TEXTURE, int convexNumber = CIRCLE_CONVEX_NUMBER) : Object2D(position, {}, height, texture), d_radius(radius) {
        for(int i = 0; i < convexNumber; i++) {
            double _x = d_radius * cos((double)i / convexNumber * 2 * PI + PI/4);
            double _y = d_radius * sin((double)i / convexNumber * 2 * PI + PI/4);

            nodes().push_back({_x, _y});
        }
    }
};


#endif //PSEUDO3DENGINE_CIRCLE2D_H
