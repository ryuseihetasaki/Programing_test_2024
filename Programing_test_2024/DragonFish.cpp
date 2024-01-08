#include "DragonFish.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//コンストラクタ
DragonFish::DragonFish()
{
	srand((unsigned int)time(NULL));
	hp = 30;
	maxhp = hp;
	atk = 3;
	healpoints = atk;
}

//デストラクタ
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
		cout << "ドラゴンフィッシュの攻撃！" << endl;
		cout << "相手に" << atk << "のダメージ" << endl;
		Attack(enemy);
	}
	else if (SelectRandomAttack == DoubleAttack)
	{
		cout << "ドラゴンフィッシュの三回攻撃！" << endl;
		cout << "相手に" << atk << "のダメージ" << endl;
		Attack(enemy);
		cout << "相手に" << atk << "のダメージ" << endl;
		Attack(enemy);
		cout << "相手に" << atk << "のダメージ" << endl;
		Attack(enemy);
	}
	else if (SelectRandomAttack == HealHp)
	{
		cout << "ドラゴンフィッシュは回復の呪文を唱えた！" << endl;
		cout << "自分は" << healpoints << "回復した！" << endl;
		Heal();
	}
}

