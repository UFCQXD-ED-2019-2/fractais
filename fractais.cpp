#include "lib/cpen.h"
#include "respostas.hpp"

void resetUI() {
    pen_clear();
    pen_set_back_color(255, 255, 255);
    pen_set_color(0, 0, 0);
    pen_set_heading(0);
    pen_set_thickness(1);
    pen_set_xy(400, 300);
    pen_down();
}

void fractal_quadrado(float lado) {
    if(lado >= 5) {
        // quadrado
        pen_walk(lado);
        pen_left(90);
        pen_walk(lado);
        pen_left(90);
        pen_walk(lado);
        pen_left(90);
        pen_walk(lado);
        pen_left(90);

        // posicionar à esquerda
        pen_up();
        pen_left(90);
        pen_walk(lado/4);
        pen_left(90);
        pen_walk(lado/2);
        pen_left(180);
        pen_down();

        // desenhar à esquerda
        fractal_quadrado(lado/2);

        // posicionar à direita
        pen_up();
        pen_walk(lado + lado/2);
        pen_down();

        // recursão à direita
        fractal_quadrado(lado/2);

        pen_up();
        pen_right(90);
        pen_walk(lado/4);
        pen_right(90);
        pen_walk(lado);
        pen_right(180);
        pen_down();
    }
}

int main() {
    pen_open(800, 600);
    resetUI();

    pen_down();

    fractal_quadrado(200);

    pen_wait();
    pen_close();
    return 0;
}







