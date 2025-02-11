#pragma once
#include <iostream>
using namespace std;
class Enemy
{
public:
    void Update();

    void Approach(); // 接近
    void Attack();   // 攻撃
    void Retreat();  // 離脱

    // 関数ポインタテーブル
    static void (Enemy::* table[])();

private:
    int index = 0;
};

