#include "Enemy.h"
void Enemy::Approach() {
    cout << "敵が接近！" << endl;
}

void Enemy::Attack() {
    cout << "敵が攻撃！" << endl;
}

void Enemy::Retreat() {
    cout << "敵が離脱" << endl;
}

void Enemy::Update() {

    // 関数テーブルから関数を実行
    (this->*table[index])();

    cout << "次の状態に移行 (0: はい、 他: いいえ)";
    int input;
    cin >> input;

    if (input == 0) {
        index = (index + 1) % 3;
    }
}

// メンバ関数ポインタテーブル
void (Enemy::* Enemy::table[])() = {
    &Enemy::Approach, // インデックス0
    &Enemy::Attack,   // インデックス1
    &Enemy::Retreat   // インデックス2
};