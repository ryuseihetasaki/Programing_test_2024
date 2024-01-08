#include "Character.h"
#include<iostream>
using namespace std;

bool Character::Warsene(Character& enemy)
{
	cout << "==========ターン開始==========" << endl;

	Play(enemy);

	cout << "自分のHP:" << getHp() << endl;
	cout << "敵のHP:" << enemy.getHp() << endl;

	cout << "==========ターン終了==========" << endl;

	if (enemy.getHp() <= 0)
	{
		cout << "敵を倒した！" << endl;
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
