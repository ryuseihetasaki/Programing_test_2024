#include "EvilSlime.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//�R���X�g���N�^
EvilSlime::EvilSlime()
{
	srand((unsigned int)time(NULL));
	hp = 20;
	maxhp = hp;
	atk = 6;
	healpoints = atk;
}

//�f�X�g���N�^
EvilSlime::~EvilSlime()
{

}

void EvilSlime::Attack(Character& enemy)
{
	enemy.Damage(atk);
}

void EvilSlime::Heal()
{
	HealHp(healpoints);
}

void EvilSlime::Play(Character& enemy)
{
	int SelectRandomAttack = 0;

	SelectRandomAttack = rand() % 3 + 1;

	int NomalAttack = 1;
	int DoubleAttack = 2;
	int HealHp = 3;

	if (SelectRandomAttack == NomalAttack)
	{
		cout << "�f�r���X���C���̍U���I" << endl;
		cout << "�����" << atk << "�̃_���[�W" << endl;
		Attack(enemy);
	}
	else if (SelectRandomAttack == DoubleAttack)
	{
		cout << "�f�r���X���C���̓��U���I" << endl;
		cout << "�����" << atk << "�̃_���[�W" << endl;
		Attack(enemy);
		cout << "�����" << atk << "�̃_���[�W" << endl;
		Attack(enemy);
	}
	else if (SelectRandomAttack == HealHp)
	{
		cout << "�f�r���X���C���͉񕜂̎������������I" << endl;
		cout << "������" << healpoints << "�񕜂����I" << endl;
		Heal();
	}
}