/* �¾���� �����ϴ� ���α׷� */

int main ()
{
	double light_speed = 300000;							// ���� �ӵ��� �����ϴ� ���� (300000km/sec)
	double distance = 149600000;							// �¾�� ���� ���� �Ÿ��� �����ϴ� ����.  149600000km�� �ʱ�ȭ �Ѵ�.
	double time;											// �� �ð�(����: ��)
	int minute;												// ���� ��
	int second;												// ���� ��

	time = distance / light_speed ;							// �� �ð� ��� (����: ��)
	second = (int)time % 60;								// �� �ð����� �ʸ� ����
	minute = time / 60;										// �� �ð����� ������ �ø�

	printf("���� �ӵ��� %fkm/s\n", light_speed);			// ���
	printf("�¾�� �������� �Ÿ� %fkm\n", distance);
	printf("���� �ð��� %d��%d��\n", minute, second);

	return 0;
}