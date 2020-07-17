//
// Created by araruna on 09/09/2019.
//

#ifndef ED1_FRACTAIS_RESPOSTAS_HPP
#define ED1_FRACTAIS_RESPOSTAS_HPP

void quadrado(float lado) {
//    float x = pen_get_x();
//    float y = pen_get_y();
    float angulo = pen_get_heading();

    pen_walk(lado);
    pen_left(90);
    pen_walk(lado);
    pen_left(90);
    pen_walk(lado);
    pen_left(90);
    pen_walk(lado);

//    pen_set_xy(x, y);
    pen_set_heading(angulo);
}

#include "lib/cpen.h"

void quadrados_simples_fractal(float lado) {
    if(lado > 5) {
        float x = pen_get_x();
        float y = pen_get_y();
        float angulo = pen_get_heading();

        quadrado(lado);

        pen_set_xy(x - lado/2, y - lado/4);

        quadrados_simples_fractal(lado / 2);

        pen_set_xy(x + lado, y - lado/4);

        quadrados_simples_fractal(lado / 2);

        pen_set_xy(x, y);
    }
}

void quadrados_lateral(float lado) {
    if(lado > 5) {
        quadrado(lado);
        pen_set_xy(pen_get_x()-lado/2, pen_get_y() - lado/4);
        quadrados_lateral(lado/2);
    }
}

#endif //ED1_FRACTAIS_RESPOSTAS_HPP
