#include "Character.h"
#include<iostream>
using namespace std;

bool Character::Warsene(Character& enemy)
{
	cout << "==========�^�[���J�n==========" << endl;

	Play(enemy);

	cout << "������HP:" << getHp() << endl;
	cout << "�G��HP:" << enemy.getHp() << endl;

	cout << "==========�^�[���I��==========" << endl;

	if (enemy.getHp() <= 0)
	{
		cout << "�G��|�����I" << endl;
		return false;
	}
	else
	{
		return true;
	}
}

void Character::Damage(int damage)
{
	hp -= damage;
}

void Character::HealHp(int healpoints)
{
	hp += healpoints;

	if (hp > maxhp)
	{
		hp = maxhp;
	}
}
