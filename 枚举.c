/**********
ö�����û�������������ͣ��ؼ���emum ��Ҫ���ڶ����űȵ�����
emum ö���������֣�����0������1��...������n��
ö������������ʵ����ν,������������־��ǳ������ţ�
����һ��Ϊint��ֵ��0��n
����ö�ٵ�������Ǹ���Щ��������
***********/
#include<stdio.h>
enum COLOR {RED, YELLO, GREEN, NumCOLORS};
int main(int argc, char const *argv[])
{
	int color = -1;
	char*ColorNames[3] = {
		"red", "yellow", "green"
	};
	char*colorName = NULL;
	printf("������ϲ������ɫ�Ĵ���");
	scanf("%d", &color);
	if (color >= 0 && color < 3)
	{
		colorName = ColorNames[color];
	}
	else
	{
		colorName = "unknown";
	}

	printf("��ϲ������ɫ��%s\n", colorName);
	return 0;
}