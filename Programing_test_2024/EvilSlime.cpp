#include "EvilSlime.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//コンストラクタ
EvilSlime::EvilSlime()
{
	srand((unsigned int)time(NULL));
	hp = 20;
	maxhp = hp;
	atk = 6;
	healpoints = atk;
}

//デストラクタ
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
		cout << "デビルスライムの攻撃！" << endl;
		cout << "相手に" << atk << "のダメージ" << endl;
		Attack(enemy);
	}
	else if (SelectRandomAttack == DoubleAttack)
	{
		cout << "デビルスライムの二回攻撃！" << endl;
		cout << "相手に" << atk << "のダメージ" << endl;
		Attack(enemy);
		cout << "相手に" << atk << "のダメージ" << endl;
		Attack(enemy);
	}
	else if (SelectRandomAttack == HealHp)
	{
		cout << "デビルスライムは回復の呪文を唱えた！" << endl;
		cout << "自分は" << healpoints << "回復した！" << endl;
		Heal();
	}
}