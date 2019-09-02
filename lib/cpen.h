#ifndef PENC_H
#define PENC_H

void pen_open(unsigned int largura, unsigned int altura);

void pen_walk(float distance);

void pen_close();

void pen_left(float angulo);

void pen_right(float angulo);

void pen_move(float x, float y);

void pen_wait(int seconds);

void pen_wait();

void pen_set_color(int R, int G, int B);

void pen_set_back_color(int R, int G, int B);

void pen_clear();

void pen_up();

void pen_down();

void pen_circle(float radius);

int pen_rand();

//GETTERS and SETTERS


void  pen_set_xy         (float x, float y);

void  pen_set_heading    (float angulo);

void  pen_set_speed(int velocidade);

void pen_set_thickness(unsigned int espessura);

float pen_get_x();

float pen_get_y();

int   pen_get_speed();

float pen_get_heading();

unsigned int pen_get_thickness();

#endif // PENC_H
