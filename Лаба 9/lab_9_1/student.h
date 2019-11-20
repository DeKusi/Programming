/* student.h */
#pragma once /* ������ �� �������� ����������� ������������� ����� */
#include <string>
#include <fstream>
using namespace std;
class Student
{
public:
	/* ����������� Student

	@param string name - student's name
	@param string last_name - student's lastname
	@return none
	*/
	Student(string, string);
	/*
	��������� ����� ��������

	@param string student_name - student's name
	@return none
	*/
	void set_name(string);
	/*
	��������� ����� ��������

	@return string name - student's name
	*/
	string get_name();
	/*
	��������� ������� ��������

	@param string student_last_name - student's lastname
	@return none
	*/
	void set_last_name(string);
	/*
	��������� ������� ��������

	@return string last_name - student's last name
	*/
	string get_last_name();
	/*
	��������� ������������� ������

	@param int[] student_scores - student's scores
	@return none
	*/
	void set_scores(int[]);
	/*
	��������� �������� �����

	@param double ball
	@return none
	*/
	void set_average_score(double);
	/*
	��������� �������� �����

	@return double average_score - student's average score
	*/
	double get_average_score();
	/*
	 ������ ������ � �������� � ����

	 @return none
	*/
	void save();
	/*
	 ���������� ������ Student

	 @return none
	*/
	~Student();
	class ExScore //����� ����������
	{
	public:
		string origin; //��� ����� �������
		int iValue; //��� �������� ���������� ��������
		ExScore(string Or, int sc);
	};
private:
	// ������������� ������
	int scores[5];
	// ������� ����
	double average_score;
	// ���
	string name;
	// �������
	string last_name;
};