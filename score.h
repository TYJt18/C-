/*************************************************
* Head File   : SCORE.h
* File Usage  : 学生管理系统头文件
/**************************************************/

#ifndef __SCORE_H__
#define __SCORE_H__


#include <stdio.h>

/*----------------------------------*
	Function Declaration
*-----------------------------------*/
typedef struct student
{
	char number[11];  //学号
	char name[10];    //姓名
	float dailyScore;   //平时成绩
	float experimentalScore;//实验成绩
	float finalScore;   //期末成绩
	float generalScore; //总评成绩
	float averageScore;//平均成绩
	float  stadevScore;//标准差


}SS;


/*---------------函数声明-------------------*/

//1.读取学生基本数据
void readData(SS stu[], int N);
SS* readDataFromFile(int *N);

//2.计算N个学生各自总成绩
void calcuScore(SS stu[], int N);


//3.根据总评成绩排名
void sortScore(SS stu[], int N);


//4.按照一定的格式输出N个学生的完整信息
void printOut(SS stu[], int N);
//5.求平均成绩
void averageScore(SS stu[], int N);
//6.求标准差
void stadevScore(SS stu[], int N);
//7.用学号查询学生信息
void queryScore(SS stu[], int N);
#endif 
