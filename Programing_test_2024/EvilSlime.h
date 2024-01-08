#pragma once
#include "Character.h"

class EvilSlime :
    public Character
{
public:
    //コンストラクタ
    EvilSlime();
    //デストラクタ
    ~EvilSlime();

    void Attack(Character& enemy); //敵を攻撃する
    void Heal(); //自分のHPを回復する
    void Play(Character& enemy); //戦闘場面
};

