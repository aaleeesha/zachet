#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>
#include<iostream>


class GodOfWar {
private:// ������ �� �������� ������ �� ��������
    std::string name = " ������ ";
    double weight = 105;
    double 186;
    std::string age = "�� ��������, ����� ������ 100 ���.";
    std::string son = "�����, ���������� � ������������� ��������� ������ ��� ��� ��� ����.\n\n\n";
public: // ������ � �������� ���� ����� ���
    GodOfWar() { std::cout << "\t\t\t�������� �����������\n " << this << std::endl; }// ������ ����������� ������ ��� �� ������� ������ ;(
    GodOfWar(GodOfWar const& another_GodOfWAr) {} // ���������� �����������, ��� ��� �������� ����������� ������-�� � ���� ������

    void History(std::string qua) {
        std::cout << "\t\t\t\t������ ����� History\n" << std::endl;
        std::cout << "\t\t\t��������� ������� � ������� ����� ���� GOD OF WAR.\n\n\n������� ����������� ����� ��� God of War. ������ ������� �������� � ��������� God of War, ���������� � 2005 ����. � ���� ���� ������ �������� ���� ���� � �����, ������� �� ��������� � ����������� ����� �����. God of War ����� ����� �� ����� ������ ��� ��� ������� ������ PlayStation.\n\n\n" << std::endl;
        std::cout << "\t\t\t\t ������� (��) ���� ������ ����������\n" << std::endl;
        std::cin >> qua;
        if (qua == "��") {
        }
    }
    void excess_weight(std::string qua) {
        std::cout << "\t\t\t\t������ ����� excess_weight\n" << std::endl;
        std::cout << "\t\t\t��������� �������� �������!\n��� ������� �������� ����� = " << (weight / growht) << "% ��� ����� 4-�� ������ ( �� ����� ���� � ���� ����� ������� � ��� ����������� �����" << std::endl;
        std::cout << "\t\t\t\t ������� (��) ���� ������ ����������\n" << std::endl;
        std::cin >> qua;
        if (qua == "��") {
        }
    }
    void shorty_information(std::string qua) {
        std::cout << "\t\t\t\t������ ����� shorty_information\n" << std::endl;
        std::cout << "\t\t\t������� ������� � ������� ������ ����� God of War.\n\n\n��� ������� ����� God of war = " << name << "\n��� ���� = " << growht << " ����������� \n��� ��� = " << weight << " ���������� \n ��� ���� " << age << " \n��� � ����� ������ ���� ��� = " << son << std::endl;
        std::cout << "\t\t\t\t ������� (��) ���� ������ ����������\n" << std::endl;
        std::cin >> qua;
        if (qua == "��") {
        }
    }
    void IMPORTANT_CALL_HER(std::string game, std::string kill, std::string qua) {
        std::cout << "\t\t\t\t������ ����� IMPORTANT_CALL_HER\n" << std::endl;
        std::cout << "\t\t\t��������� ������,������!\n\n\n��� �� ���������� � �����? (������ � ��������� �����)" << std::endl;
        std::cin >> game;
        if ((game == "��������") || (game == "�������") || (game == "����� ������������") || (game == "������") || (game == "����� ��� ��� �� �����������") || (game == "�����")) {
            std::cout << " ���� ���������� ��� ����� ���, ������, ����� �����, ���, �������� �����������." << std::endl;
        }
        else {
            std::cout << "��, �������� ��������, ����� ���� ��-���� ���������� ����." << std::endl;
        }
        std::cout << "��� �� ���������� � ��������� � �����? (������ � ��������� ����� (���������/�� ���������))" << std::endl;
        std::cin >> kill;
        if (kill == "���������") {
            std::cout << "����� ���� ����� ���� ������������� � ���� ������" << std::endl;
        }
        else {
            std::cout << "�����, ����� �� �����, �� �� �� ������ �� ������ ������� ����� ������ ������ :(." << std::endl;
        }
        std::cout << "\t\t\t\t ������� (��) ���� ������ ����������\n" << std::endl;
        std::cin >> qua;
        if (qua == "��") {
        }
    }
    void Big_survey(std::string name, std::string old, std::string name2, std::string Sony, int& ball, std::string qua) {
        std::cout << "\t\t\t\t������ ����� Big_survey\n" << std::endl;
        std::cout << "\t\t\t������� ������, ��������� ������,���������!\n\n\n���� ��������� ������ ��������� ������� �� ������ ����, ��� � ����������� � ������� ������� � ������� ����������" << std::endl;
        std::cout << "��� ����� �����?(����� �������� ������� �����)" << std::endl;
        std::cin >> name;
        if (name == "������") {
            std::cout << "���������.������� ��� ���?? (- /100)" < ;
        }
        else {
            std::cout << "� ��� ��, � ��� ���� ���� ������ ������������.������� ��� ���?? (- /100)" < ;
        }
        std::cin >> old;
        if (old == "-") {
            std::cout << "��� ���� ������������ ������.��� ��� ��� (�� ���������)?" << std::endl;
        }
        else {
            std::cout << "����� ��� ����.��� ��� ��� (�� ���������)?" << std::endl;
        }
        std::cin >> name2;
        if (name2 == "����") {
            std::cout << "�� ������ ������ ������.�� ����� ��������� ��� ���� ���������� (����/����/��-�����)?" << std::endl;
        }
        else {
            std::cout << "���������... (�� ����� ��������� ��� ���� ���������� (����/����/��-�����)?" << std::endl;
        }
        std::cin >> Sony;
        if (Sony == "����") {
            std::cout << "������, ������ 10/10.�� ����� ������� ������� � �����������, � ���� �� ���� ��." << std::endl;
        }
        else {
            std::cout << "����� �������." << std::endl;
        }
        std::cout << "����� ���������� ���������� ������� " << std::endl;
        std::cin >> ball;
        switch (ball) {
        case  1:
            std::cout << "������ ������ - �� ����� " << std::endl;
            break;
        case 2:
            std::cout << "�� ����������� �� �������� ��������" << std::endl;
            break;
        case 3:
            std::cout << "������� ��������" << std::endl;
            break;
        case 4:
            std::cout << "������ � ���� ������ � ����������� ������" << std::endl;
            break;
        default:std::cout << "Error 404 �� ���-�� �� �� ���" << std::endl;
            break;
        }
        std::cout << "\t\t\t\t ������� (��) ���� ������ ����������\n" << std::endl;
        std::cin >> qua;
        if (qua == "��") {
        }
    }
    ~GodOfWar() { std::cout << "\t\t\t�������� ����������\n" << this << std::endl; }

};
void foo_class() {
    std::cout << "\t\t\t\t\t\t\t������� ������� foo_class\n" << std::endl;
    std::string qua;
    std::string game;
    std::string kill;
    std::string name;
    std::string old;
    std::string name2;
    std::string Sony;
    int ball;
    GodOfWar game1;
    game1.History(qua);
    game1.shorty_information(qua);
    game1.excess_weight(qua);
    game1.IMPORTANT_CALL_HER(game, kill, qua);
    game1.Big_survey(name, old, name2, Sony, ball, qua);
    GodOfWar* game2;
    game2 = new GodOfWar;
    game2->History(qua);
    game2->shorty_information(qua);
    game2->excess_weight(qua);
    game2->IMPORTANT_CALL_HER(game, kill, qua);
    game2->Big_survey(name, old, name2, Sony, ball, qua);

}


int main()
{

    setlocale(LC_ALL, "Russian");
    std::cout << "\t\t\t\t\t\t\t������������ 6.������\n" << std::endl;
    std::string qua;
    std::string game;
    std::string kill;
    std::string name;
    std::string old;
    std::string name2;
    std::string Sony;
    int ball;
    GodOfWar game1;
    game1.History(qua);
    game1.shorty_information(qua);
    game1.excess_weight(qua);
    game1.IMPORTANT_CALL_HER(game, kill, qua);
    game1.Big_survey(name, old, name2, Sony, ball, qua);
    GodOfWar* game2;
    game2 = new GodOfWar;
    game2->History(qua);
    game2->shorty_information(qua);
    game2->excess_weight(qua);
    game2->IMPORTANT_CALL_HER(game, kill, qua);
    game2->Big_survey(name, old, name2, Sony, ball, qua);
    foo_class();
    system("pause");
    return 0;
}