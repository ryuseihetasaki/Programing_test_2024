#pragma once
#include "Character.h"

class EvilSlime :
    public Character
{
public:
    //�R���X�g���N�^
    EvilSlime();
    //�f�X�g���N�^
    ~EvilSlime();

    void Attack(Character& enemy); //�G���U������
    void Heal(); //������HP���񕜂���
    void Play(Character& enemy); //�퓬���
};

