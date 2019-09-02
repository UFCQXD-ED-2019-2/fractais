#include "sfLine.h"

void sfLine::updateVertices(){
        sf::Vector2f direction = _end - _begin;
        sf::Vector2f unitDirection = direction/std::sqrt(direction.x*direction.x+direction.y*direction.y);
        sf::Vector2f unitPerpendicular(-unitDirection.y,unitDirection.x);

        sf::Vector2f offset = (_thickness/2.f)*unitPerpendicular;

        _vertices[0].position = _begin + offset;
        _vertices[1].position = _end + offset;
        _vertices[2].position = _end - offset;
        _vertices[3].position = _begin - offset;

        for (int i=0; i<4; ++i)
            _vertices[i].color = _color;
    }
