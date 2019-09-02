#ifndef SFLINE_H
#define SFLINE_H

#include <SFML/Graphics.hpp>
#include <cmath>

class sfLine : public sf::Drawable
{
public:
    sfLine(const sf::Vector2f& point1, const sf::Vector2f& point2,
           float thickness = 1, sf::Color color = sf::Color::Red):
        _begin(point1), _end(point2), _color(color), _thickness(thickness)
    {
        updateVertices();
    }

    sf::Vector2f getBegin(){
        return _begin;
    }

    sf::Vector2f getEnd(){
        return _end;
    }

    float getThickness(){
        return _thickness;
    }

    sf::Color getColor(){
        return _color;
    }


    void setColor(sf::Color color){
        this->_color = color;
        updateVertices();
    }

    void setEnd(sf::Vector2f end){
        this->_end = end;
        updateVertices();
    }
    void setBegin(sf::Vector2f begin){
        this->_begin = begin;
        updateVertices();
    }
    void setThickness(float thickness){
        _thickness = thickness;
        updateVertices();
    }


    void draw(sf::RenderTarget &target, sf::RenderStates states) const
    {
        (void)states;
        target.draw(_vertices,4,sf::Quads);
    }


private:
    sf::Vector2f _begin;
    sf::Vector2f _end;
    sf::Vertex _vertices[4];
    sf::Color _color;
    float _thickness;


    void updateVertices();
};
#endif // SFLINE_H
