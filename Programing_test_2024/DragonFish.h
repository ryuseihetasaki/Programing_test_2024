#pragma once
#include "Character.h"

class DragonFish :
    public Character
{
public:
    //コンストラクタ
    DragonFish();
    //デストラクタ
    ~DragonFish();

    void Attack(Character& enemy); //敵を攻撃する
    void Heal(); //自分のHPを回復する
    void Play(Character& enemy); //戦闘場面
};

