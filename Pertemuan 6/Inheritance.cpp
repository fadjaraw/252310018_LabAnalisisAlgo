#include <iostream>
using namespace std;

class Character
{
    protected:
        int hp;
        int damage;
        int exp;

    public:
        void setDamage(int damage)
        {
            this->damage = damage;
        }

        int getDamage()
        {
            return this->damage;
        }
};

class Warrior : public Character
{
    public:
        string nickname;

        void serang()
        {
            cout << "Character telah menyerang sebesar " << this->damage << endl;
        }
};

int main()
{
    Warrior player1;

    cout << "Masukkan Nickname: ";
    cin >> player1.nickname;

    cout << "Nickname dari player adalah: " << player1.nickname << endl;

    int damage = 0;
    cout << "Masukkan damage dari karakter: ";
    cin >> damage;
    player1.setDamage(damage);

    player1.serang();

    return 0;
}