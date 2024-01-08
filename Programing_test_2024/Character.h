#pragma once
class Character
{
protected:
	int hp;
	int maxhp;
	int atk;
	int healpoints;

public:
	virtual void Attack(Character& enemy) = 0; //�G���U������
	virtual void Play(Character& enemy) = 0; //�퓬���

	bool Warsene(Character& enemy);//�퓬�V�[��

	void Damage(int damage);//�U�����󂯂�
	void HealHp(int healpoints); //�̗͂���

	//�Q�b�g���Z�b�g
	int getHp() { return hp; }
	int getAtk() { return atk; }

	void setHp(int hp) { hp = hp; }
	void setAtk(int atk) { atk = atk; }
};

