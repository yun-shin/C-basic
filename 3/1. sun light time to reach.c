/* 태양빛이 도달하는 프로그램 */

int main ()
{
	double light_speed = 300000;							// 빛의 속도를 저장하는 변수 (300000km/sec)
	double distance = 149600000;							// 태양과 지구 사이 거리를 저장하는 변수.  149600000km로 초기화 한다.
	double time;											// 총 시간(단위: 초)
	int minute;												// 변수 분
	int second;												// 변수 초

	time = distance / light_speed ;							// 총 시간 계산 (단위: 초)
	second = (int)time % 60;								// 총 시간에서 초만 남김
	minute = time / 60;										// 총 시간에서 분으로 올림

	printf("빛의 속도는 %fkm/s\n", light_speed);			// 출력
	printf("태양과 지구와의 거리 %fkm\n", distance);
	printf("도달 시간은 %d분%d초\n", minute, second);

	return 0;
}