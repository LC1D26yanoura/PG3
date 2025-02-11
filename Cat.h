#pragma once
#include"Animal.h"
class Cat : public Animal {
public:
    void sound() const override {
        printf("ネコ鳴き声:ニャー\n");
    }
};
