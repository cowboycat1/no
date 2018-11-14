#include "Block.h"

Block::Block(int x, int y, int width, int height){

    this->x = x;
    this->y = y;

    this->width = width;
    this->height = height;

    wave.setSpriteLocation(x, y);

    cBox.setWidth(width);
    cBox.setHeight(height);
    cBox.resetAtLocation(x, y);

}

Block::Block(int x, int y, int width, int height, BlockType type){

    this->x = x;
    this->y = y;

    this->width = width;
    this->height = height;

    cBox.setWidth(width);
    cBox.setHeight(height);
    cBox.resetAtLocation(x, y);

    wave.setSpriteLocation(x, y);

    this->type = type;

}

void Block::draw(SDL_Plotter& p){

    wave.draw(p);

}

Wave& Block::getWave(){

    return wave;

}

bool Block::isIcy(){

    return icy;

}

void Block::setIcy(bool value){

    icy = value;

}

int Block::get_x(){

    return x;

}

int Block::get_y(){

    return y;

}