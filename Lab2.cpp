#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>

int main() {
    setlocale(LC_ALL, "Russian");
    // 1 �������� ��������
    // 1.1 �������� if � if...else...
    int salary = 120000;
    bool has_education = true;
    if ((salary < 150000) && (has_education)) // � ������� ������ ���� ���������� ���������� ��� ������� �������� true or false
    {
        std::cout << " ����� ��� if !" << std::endl;
        // �� ��� ������ ������ if ����������� ���� �������� � ������� ������� ����� true


    }
    std::cout << "" << std::endl;
    std::cout << "��e���� ���� ��� �� �������� :";
    std::string name; // �������� �������
    std::cin >> name; //  ������� ������ � ���������� �� ���������
    if (name == "ivan")
    {

        std::cout << " ����� ��� 2 if !" << std::endl;
    }
    else
    {


        std::cout << " ����� ��� else " << std::endl;
    }
    std::cout << "" << std::endl;
    // 1.2 �������� switch//case//defolt
    std::cout << "" << std::endl;
    int type_of_creditor;
    std::cout << " 1.2 Switch...case...��������� ��� ������� (int type_of_creditor     " << std::endl; // \" - ������� ������ �������, ����� ������� ���������� �� �����
    std::cin >> type_of_creditor;
    switch (/* ���������� ������� �������� ��������� */ type_of_creditor) {
    case  1: // ����� ��������
        std::cout << "��� ������� 1 - physical     " << std::endl;
        break; // ����� ����������� ����� ������ �����, ����� �������� ��� ����������
    case 2:
        std::cout << "��� ������� 2 - small_bisness" << std::endl;
        break;
    case 3:
        std::cout << "��� ������� 3- medium_bisness" << std::endl;
        break;
    case 4:
        std::cout << "��� ������� 4- large_bisness" << std::endl;
        break;
    default: /*�������� ������� ����������� � ��������� ������� */
        break;
    }
    std::cout << "" << std::endl;
    // 1.3 �������� ���������
    std::cout << "" << std::endl;
    int c = 10;
    std::cout << "�������� ���������" << std::endl;
    // ������ �������� ������� ����� ���� �������� � ���� ������ if() {} else{}
    // (�������)?(����� ���� ����� ���):(����� ���� ������� ����� �����);
    // ��� � ���� ���������� ���������
    (c < 5/*������� */)
        ? (/*��������� ���� ��� */std::cout << "true" << std::endl)
        : (/*��������� ���� False*/std::cout << "false" << std::endl);
    // 1.4 �������� ������������ �������� goto
    // � ����������� ���������� ��������� �� ���������, ��� ��� ��� ������� ��������� ���������� ����
    // ���������:
    // � ������ ����� ��������� �������� ��� ���������� �����,
lbl_1:  //����������� (��������) � ���������- ��� ���������� �����
/*??????*/
    c++;
    std::cout << "������������ ������ 1.4 goto c=" << c << std::endl;
    if (c == 15) { goto lbl_exit; }
    else { goto lbl_1; }
lbl_exit:
    std::cout << "����� ������ 1.4 goto " << std::endl;

    //2. ����������� �����
    //2.1 ������� ���� for
    std::cout << "\t\t\t\t" << "��������� �� i=0 �� 7 " << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << "���� i ������ 7 i=" << i << std::endl;
    }
    std::cout << "i=7" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "\t\t\t" << "������� ����� ������ 20" << std::endl;
    int chislo;
    std::cin >> chislo;
    while (chislo < 20) {
        std::cout << "+1 = " << ++chislo << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "\t\t\t" << "������ ��������� ����� ���� ��������� �� 1 �� 10 ? :";
    std::string otvet;
    std::cin >> otvet;
    std::cout << "" << std::endl;
    if (otvet == "Da") {
        std::cout << "\t\t\t" << " ������, ������ ���������" << std::endl;
    }
    else {
        std::cout << "\t\t\t" << "�� �� ����� ��������� " << std::endl;
    }
    std::cout << " " << std::endl;
    std::cout << "\t\t\t\t" << "������� ! " << std::endl;
    int chislo_1 = 0;
    int summa_1_to_20 = 0;
    do {
        ++chislo_1;
        summa_1_to_20 += chislo_1;
        std::cout << "����� �� 1 �� 20 �� ���� n = " << chislo_1 << std::endl;
        std::cout << "" << std::endl;
        std::cout << "������������� ����������  = " << summa_1_to_20 << std::endl;
        std::cout << "" << std::endl;
    } while (chislo_1 < 10);
    std::cout << "\t\t" << "����� ����� �� 1 �� 10  ����� = " << summa_1_to_20;

/* ������ GIT:
������: https://git-scm.com/

������ CKB: GIT, Mercural, SVN � ��.

���� ������: ��� ������ ������������ ���������� ������� "������" ������� ������ ������ ������� (������) �� ������ � git ������� � git ������ �������� ����������� ����� � ������ ���������� ��������� ������� ������ ����� ������������ ���������� � ���������� �������, ����� ������� git ���� ������� ������ ���� ������ � ����� ���������� ����

������ ������ ������ �������� ������ git ������������ ����� ��� ��������� ������, �������� ��������� �����, ��� ��������� ������ ��� ����� � ��� �� ������� �����, ��� ���������� ��������� ���� � ��
����� ������� ������ �� ���������� ������� git ���������� ������������
���� ����������� �������� �� ��������� ������, �� �� ���������
���� ����������� �������� � ����, �� �� ��������
������� �������� ��������� �����������, � ��� ���������� ������ �� ���������� ������, ������������ ������, �������� � ������� �����
����� ���������� ����� ��������� (����������������) � �������� ������������
����� ������� ����������� � �������� ����������:
1. ������� ������� � �������� �������� �������
��� ������� �������: ����� � �����, ������ Shift, ���, ������� ���� ������ ( powershell) ��� � �������� ������ ����� �������� cmd
2. �������� � cmd "git init"
3. ������ ������ �����������, �� ���� ���� �� ������������� � ������ �� ����� ���� �������, ���������� �������� ����� � ������ ������������ git
4. ����� �������� git add *.cpp





*/

std::system("pause"); // ����� ������� system() �� ����������� ����������
	return 0;
}