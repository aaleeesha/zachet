#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");
	/*

	�����������

	���������� ����� - �������� �� ��������� ������� �������� ���������� � ��������� �� ��������� � ����������� � �������.
	�������:
	�������������� ����� �� 32 - ���������� ������ ��������� int � 64 - ��������� ����������� long int ��� �������.
	�������������� ����� �� ������ ��������� int � ������� double ��� �������.
	�������������� �����(int, double � ��.) � ������.
	����� ���������� ����� - ���������� �����, ��������������� ������������� � ���� � ������� ����������� ������.
	������� ���������� ����� - ���������� �����, ����������� ������������ �������������, � ����������� �� ���������.� �������, ��� �������� ����� int � �������, ������� ��������� double, ���������� ����������, ��� ���������� ������� ��� ��������� � int �� double, ��� ���� ������� ��������������(warning) � ��������� ������ ��������.

	*/
	/*
	// ������

	int int_a = 15;
	int int_b = 7;
	double double_a = 15.0;
	double double_b = 7.0;

	std::cout << "int 15/int 7" << int_a / int_b << std::endl;
	std::cout << "double 15/int 7" << double_a / int_b << std::endl;
	std::cout << "int 15/double 7" << int_a / double_b << std::endl;
	std::cout << "double 15/double 7" << double_a / double_b << std::endl;

	// -----------------------------------------------------------------------------------------------------------------------------------------------------

	// ��������� ������ ���������� ���� C � C++

	// ��������� ��:

	// ��� ������ � ����������� (���� ���������� �� �����������, �.�. ���������� ���) ������������� ������ ����� ��� ������� �����, �������� ����� � ������� ����� ����� �����:

	std::cout << 15.0/7.0 << std::endl; // ��������� - 2.14....


	// ���� �������� ��������� ��� ���������� � ������� ���� � ��������� ����� �����, ������ ������ ��� � ������� ������� ����� ���������:

	int int_n=15;
	std::cout << (double)int_n/(double)7; // ��������� - 2.14....

	// ������� ���������� round() - ����������� ���������� � ���������� ������, floor() - ���������� � ��������, ceil() - ���������� � �������� ������ �� ���������� <math.h> � �� ��� <cmath> ��� ������������� ����������� C++.
		std::cout << "*** ������������ ���������� ***" << std::endl;
		double x1 = 15.6;
		double x2 = 15.4;
		std::cout << "round(15.6) = " << round(x1) << std::endl; // 16
		std::cout << "round(15.4) = " << round(x2) << std::endl; // 15
		std::cout << "ceil(15.6) = " << ceil(x1) << std::endl; // 16
		std::cout << "ceil(15.4) = " << ceil(x2) << std::endl; // 16
		std::cout << "floor(15.6) = " << floor(x1) << std::endl; //15
		std::cout << "floor(15.4) = " << floor(x2) << std::endl; //15

	// -----------------------------------------------------------------------------------------------------------------------------------------------------

	/*

	C�������� ������ ���������� ����� C++:
	� C++ �������� ����� ������ ���������� ����� ��.
	������ ������������� ������������ ����������� �� ��������� ����� C++  static_cast<���������_���>(�������):

	*/

	/*

	int int_val=15;
	std::cout << static_cast<float>(int_val)/2; // �������� 7.5

	/*

	�������
	�������������� � ������������� � ���� ������� �� ������� ������������� ����������� � ����� ������� Visual Studio (� ������� ������� solution). �������� ��������� ����� ����������� � ��������� � �������� ����������� git.
	�� ���������� �������� ��� ����� ���������� �������� ������ C++ ����� ��������� ������������� ������� ����������� ������������� ���������� �����: reinterpret_cast, dynamic_cast, const_cast.

	*/

	/*

	�����
	�����������
	���� - ������� ������� ������, ������� ��� ����������� ��� ��� �������������, ���������� ��� �������� ������� �����-���� ������.
	�������� ������� -
	������ ����������� ��������, �������, ��������, ���������, ���������� ������ �� ��������� ���������� (��� �������, ����������������� - ����. ���.).
	����� ������� - ���� ������, ��������������� ��� ����������� ���������� � ��������� ������ � ������� ������ �������� ����������.
	��� �������� �� ������ � ������� (� � ������� ������ ��������� ������: �����, ������� ������, �������� ������������, ��������������� ����������� ������) ����������� �� �������� �����������, � ���� �� ������������� ���������, � ��� �������������� ��. �.�. � ������� ������� fwrite �� ����� �� ������� ������� ����� ��������, � ���������� � ��������������� ������� ��, ������� ���������� ��������� ��������, ���� ��������� ���.
	* ���� ��������� ��� ����� ��� ����������� ����, �� ���� ����� ����������� �� �������� ��������
	��� ������� ��������� � Visual Studio, ��� ��������� ������� ��������� ��� ��, ��� ����� ��� ������ *.vcxproj;
	��� ������� ��������� ��� Visual Studio (�� �������� ����� � ���������� Windows) ������� ��������� �������� ��� �� ��������, ��� ����� ���������;
	��� ������� ��������� �� ��������� (cmd ��� PowerShell, ��� bash � Linux) ������� ��������� ��������� ���, ������� ������� �� ������ ������� � ����� ��������� ����� ��������.
	������� � ������� ��
	������ � ������� � �� ���������� � ������� ������� � ����� ������ ����������� ���������� ����� <stdio.h> (���� <cstdio> ��� ������������� ������ �� � ������������ C++). ������ ������ � ������� � �� ���������:
	������� ���� (��������� � �� ���������� �� �������� � ������ � �������� � �� ��������� ��� ������ � ���). ������� ���� �����
	������ ��� ������ (��� ������� ������������, ���� �������� ��� �� �������������� ��� ��� ����� �������� � �����). ��� ���� ������� ��� ������ �������� �� �����.
	������ ��� ������ (������� ��� ������ �������� �� �����).
	��� ������ � ������.
	� ����������� ����������� ����� � ��������� � ����� (���� ����������� ��� ������ ��� ������/������, � ��� �������� ������� ������� ������ ����������� � ����� �����).
	� ����������� ����������� ����� (��� �������� � ������ ������ ��� ������/������).
	���������� �������� � ������ ��������� � ������� ������� � ����� (����� ��� ������ � ������). ��� ������/������ ������ ���������� ������� ������� ���������� � ����� ������������/����������� ���������.
	��� ������������� - �������� ������� ������� (������� fseek, fsetpos ��. ����)
	������� ���� (����������, �������� ��, ��� ������ � ������ �� ���������� �������� ������������� �� �����, � ����� ��������� �������� � ������ ������ ������ ����������).
	������� � ���� ������ ��� ������ � ������� �� C:
	FILE - ��������� ������ �� <stdio.h> (������ �� <corecrt_wstdio.h>, ������������� ������ <stdio.h>)

	*/

	/*
	// �������:
	// ������ 1. ���������� � ������ ����� �����
	FILE* ptrFile = 0;
	fopen_s(&ptrFile, "file.txt", "rb");
	if (ptrFile == NULL) perror("������ �������� �����");
	else
	{
		while (!feof(ptrFile)) // ��������� ����, ���� �� ����� �����
		{
			char buffer[100] = { 0 };
			fgets(buffer, 100, ptrFile);
			std::cout << buffer;
		}
		fclose(ptrFile); // ������� ����
	}

	// ������ 2. ������ (����������) ����� ���������� � �����

	FILE * ptrFile = fopen( "example.txt" , "w" ); // ������� ��� ������
	fputs( "This is sample." , ptrFile ); // �������� � ���� ������
	fseek( ptrFile , 9 , SEEK_SET ); // �������� ������� �� 9 ���� ������������ ������ �����
	fputs( "parta" , ptrFile ); // �������� ����� � ����
	fclose ( ptrFile );

	// ������ 3. ������ ������ � ����

	FILE * ptrFile = fopen("file.txt", "w"); // ������� ���� file.txt � ������� �������� � ������ ������ ��� ������
	if (ptrFile != NULL) // ���������, ������� �� ������� ����
	{
	fputs("������ ������������� ������� fopen ", ptrFile); // �������� ������ � ����
	fclose (ptrFile);
	}








	*/






	// 2. ������  � ��������� �++

	std::fstream ifs; // �������� ������� ������
	ifs.open("file1.txt", std::fstream::in | std::fstream::out);

	/*
	std::fstream::in  - ������ ��� ������
	std::fstream::out - ������ ��� ������
	std::fstream::trunc - ����������, ���� ���� ����������
	std::fstream::app - ������ � ����� ����� (����������, ������ � ����� �����)
	std::fstream::binary - ������� ����, �� �������� �� \n � \r, ��� �� �����������
	� �������������� ������� ��������� \n � \r �������,  � � ��������� ������
	��� ����������� �������������� � ����� ������ �������
	*/
	if (!ifs.is_open())
	{
		std::cout << "�� ������� ������� ����" << std::endl;
		return -1;
	}


	ifs << "*** ������������ ���������� ***" << std::endl;
	double x1 = 15.6;
	double x2 = 15.4;
	ifs << "round(15.6) = " << round(x1) << std::endl; // 16
	ifs << "round(15.4) = " << round(x2) << std::endl; // 15
	ifs << "ceil(15.6) = " << ceil(x1) << std::endl; // 16
	ifs << "ceil(15.4) = " << ceil(x2) << std::endl; // 16
	ifs << "floor(15.6) = " << floor(x1) << std::endl; //15
	ifs << "floor(15.4) = " << floor(x2) << std::endl; //15

	int int_val = 15;
	ifs << "static_cast<float>(int_val) / 2 = "
		<< static_cast<float>(int_val) / 2 << std::endl; // �������� 7.5
	ifs.flush(); // ������ ������� ������������� ����� � ���� ��, ��� ���� � ������
	ifs.close(); // ���� � �������� �� ��������� ifs.flush(), ���� ������ � ���� ����� ������������ �����



	// ���������� 20 �������� � �������� 100 �� ����� �����
	char buffer[256] = { 0 };
	ifs.seekg(-100, std::fstream::end); // - "seek for get position"
	ifs.read(buffer, 100);

	// ������ 100 �������� � �������� 20  �� ������ �����
	char buffer2[100] = { 0 };
	ifs.seekp(20, std::fstream::beg); // - "seek for put position"
	ifs.write(buffer2, 100); // �����  ��� � cout  ������������ "<<"
	ifs.close(); // ���� � �������� �� ��������� ifs.flush(), ���� ������ � ���� ����� ������������ �����
	
    





    std::system("pause"); // ����� ������� system() �� ����������� ����������
	return 0;
}