#pragma once
#include "Character.h"

class DragonFish :
    public Character
{
public:
    //�R���X�g���N�^
    DragonFish();
    //�f�X�g���N�^
    ~DragonFish();

    void Attack(Character& enemy); //�G���U������
    void Heal(); //������HP���񕜂���
    void Play(Character& enemy); //�퓬���
};

