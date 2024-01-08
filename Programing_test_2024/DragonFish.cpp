#include "DragonFish.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//�R���X�g���N�^
DragonFish::DragonFish()
{
	srand((unsigned int)time(NULL));
	hp = 30;
	maxhp = hp;
	atk = 3;
	healpoints = atk;
}

//�f�X�g���N�^
DragonFish::~DragonFish()
{

}

void DragonFish::Attack(Character& enemy)
{
	enemy.Damage(atk);
}

void DragonFish::Heal()
{
	HealHp(healpoints);
}

void DragonFish::Play(Character& enemy)
{
	int SelectRandomAttack = 0;

	SelectRandomAttack = rand() % 3 + 1;

	int NomalAttack = 1;
	int DoubleAttack = 2;
	int HealHp = 3;

	if (SelectRandomAttack == NomalAttack)
	{
		cout << "�h���S���t�B�b�V���̍U���I" << endl;
		cout << "�����" << atk << "�̃_���[�W" << endl;
		Attack(enemy);
	}
	else if (SelectRandomAttack == DoubleAttack)
	{
		cout << "�h���S���t�B�b�V���̎O��U���I" << endl;
		cout << "�����" << atk << "�̃_���[�W" << endl;
		Attack(enemy);
		cout << "�����" << atk << "�̃_���[�W" << endl;
		Attack(enemy);
		cout << "�����" << atk << "�̃_���[�W" << endl;
		Attack(enemy);
	}
	else if (SelectRandomAttack == HealHp)
	{
		cout << "�h���S���t�B�b�V���͉񕜂̎������������I" << endl;
		cout << "������" << healpoints << "�񕜂����I" << endl;
		Heal();
	}
}

