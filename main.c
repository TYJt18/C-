#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
 #include <stdlib.h>
 #include <windows.h>
 #include "score.h"

int main()


   {
	    printf("******************************\n");
	 	printf("       ѧ���ɼ��������ϵͳ        \n");
		printf("          TangYujie                 \n");
	 	printf("******************************\n\n");

			/*-1.������ʼ��-*/
		 	int N = 0;            //ѧ������ 
	 	    SS  *pstu = NULL;    //ѧ������-�ṹ������ָ��ʵ�� 

	      //2.��ȡѧ����Ϣ 
		 	pstu = readDataFromFile(&N);

			/*-3.����ѧ���ܳɼ����ܳɼ� = 0.2*ƽʱ�ɼ� +0.2*ʵ��ɼ�+ 0.6*��ĩ�ɼ�)--*/
			calcuScore(pstu, N);

			/*-4.����ѧ���ɼ�����-*/
		 	sortScore(pstu, N);
           /*-5.�����������ѧ����Ϣ-*/
		 	printOut(pstu, N);
	
			/*-6.����ѧ�Ų�ѯѧ����Ϣ-*/
			queryScore(pstu, N);
		    averageScore(pstu, N); 
			stadevScore(pstu, N);
			/*-7.�ͷŶ�̬�ڴ�ռ�-*/
		 	free(pstu);
	       system("pause");
		return 0;
	}
