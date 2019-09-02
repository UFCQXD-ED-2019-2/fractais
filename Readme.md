# Fractais

## Objetivo

O seu objetivo é aprender recursão para implementar o código que produzirá os fractais da pasta `imagens`. Faça o máximo que puder.

O mais importante é entender o componente fundamental do desenho, e onde estão as repetições.

## Instalação

Para compilar e executar os códigos desta atividade, é necessário usar a biblioteca gráfica _SFML_. Além disso, para usar o _Qt Creator_, é necessário ainda instalar o _Qt5_. Abaixo estão os comandos para algumas distribuições Linux e para _Windows_ para instalação dessas bibliotecas.

### Ubuntu (e derivados do Debian)
```bash
sudo apt-get install libsfml-dev
```
### Fedora (e derivados do Red Hat)
```bash
sudo dnf install SFML-devel
```
### Manjaro (e derivados do Arch)
```bash
sudo pacman -S sfml
```

### Windows
Vá para o site [https://www.sfml-dev.org/download.php](https://www.sfml-dev.org/download.php), clique no link rotulado com "*Latest stable version*", depois escolha, sa seção Windows, o link de download de acordo com o compilador que você usa. Recomendamos usar o *GCC/MinGW*.

O link a seguir possui instruções de configuração das IDEs para uso da biblioteca gráfica: https://www.sfml-dev.org/tutorials/2.5/ (em inglês).


## Uso

### Compilação ###

#### Via IDEs

A biblioteca está em `lib/cpen.h`. Foram incluídos alguns arquivos de projeto para algumas IDEs:
* CLion (ou baseados em _cmake_): CMakeLists.txt
* QtCreator (ou baseados em _qmake_): Fractais.pro
* Code::Blocks: Fractais.cbp

#### Via make

Se quiser compilar via `make`, basta editar o arquivo `fractal.cpp` (que deve conter a função `main`) dentro da pasta `fractais` e digitar, num terminal:

```bash
make fractal
```

O `Makefile` incluso já contém as intruções de compilação, porém considerando o compilador `g++` em sistemas Linux. Para Windows, use o *Qt Creator* ou realize o processo manual abaixo da forma mais conveniente.

#### Manual ####

Caso não queira usar o `make`, você deverá compilar o seu arquivo `fractal.cpp` junto com os arquivos `lib/pen.cpp`, `lib/cpen.cpp` e `lib/sfline.cpp` e adicionar as bibliotecas `sfml-graphics`, `sfml-window` e `sfml-system` nessa ordem. Além disso, incluir a diretiva que permite uso de C++11 no seu compilador (a biblioteca SFML é escrita em C++).

### Meta da atividade ###

Na pasta `imagens` você tem exemplos de fractais a serem implementados por você. Tente compreender como construí-lo como partes em função do todo.

## Funções

```c
    //JANELA

    //abre janela com dimensões informadas
    //IMPORTANTE! Deve ser chamada uma única vez, antes de qualquer outra
    //            das demais funções.
    void pen_open(unsigned int largura, unsigned int altura);

    //fecha a janela aberta e libera todos os recursos
    //IMPORTANTE! Deve ser chamada uma única vez, após qualquer outra das
    //            demais funções.
    void pen_close();

    //DESENHO    

    //anda pra frente e, se o valor for negativo, para trás
    void pen_walk(float distance);

    //vira pra esquerda (em graus, no sentido antihorário)
    void pen_left(float angulo);

    //vira pra direita (em graus, no sentido horário)
    void pen_right(float angulo);

    //limpa todos os traços da tela
    void pen_clear();

    //levanta a caneta do papel
    void pen_up();

    //encosta a caneta no papel
    void pen_down();

    //vai para essa posicao da tela, riscando o papel se a caneta estiver abaixada
    void pen_move(float x, float y);

    //muda a cor de risco
    void pen_set_color(int R, int G, int B);
    
    //muda a cor de fundo da janela
    void pen_set_back_color(int R, int G, int B);

    //AUXILIARES

    //gera um número aleatório
    int pen_rand();

    //espera tantos segundos
    void pen_wait(int seconds);

    //espera até clicar em fechar
    void pen_wait();

    //GETTERS and SETTERS

    //muda a posição (sem riscar)
    void  pen_set_xy         (float x, float y);
    
    //muda o ângulo de orientação (em graus)
    //segue o cartesiano, 0° é à direita, cresce no sentido antihorário
    void  pen_set_heading    (float angulo);

    //muda a velocidade
    //se velocidade = 0, então ele não mostra o desenho até que esteja terminado
    //se velocidade > 0, speed pode ser qualquer valor inteiro
    //quanto maior o valor, mais rápido o desenho é feito
    void  pen_set_speed      (int velocidade);

    //muda a espessura da linha
    void  pen_set_thickness  (unsigned int espessura);

    float pen_get_x();
    float pen_get_y();
    int   pen_get_speed();
    float pen_get_heading();
    unsigned int   pen_get_thickness();
```

## Créditos ##

Esta atividade e a biblioteca de desenho Pen foram idealizadas e desenvolvidas pelo Prof. David Sena, do [Campus de Quixadá](http://www.quixada.ufc.br) da Universidade Federal do Ceará.