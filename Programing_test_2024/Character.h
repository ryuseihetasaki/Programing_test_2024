#pragma once
class Character
{
protected:
	int hp;
	int maxhp;
	int atk;
	int healpoints;

public:
	virtual void Attack(Character& enemy) = 0; //敵を攻撃する
	virtual void Play(Character& enemy) = 0; //戦闘場面

	bool Warsene(Character& enemy);//戦闘シーン

	void Damage(int damage);//攻撃を受ける
	void HealHp(int healpoints); //体力を回復

	//ゲット＆セット
	int getHp() { return hp; }
	int getAtk() { return atk; }

	void setHp(int hp) { hp = hp; }
	void setAtk(int atk) { atk = atk; }
};

