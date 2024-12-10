//При запуске происходит падение с указанием исходника и строки в нём, на которой расположен вызов макроса assert.
#include <iostream>
#include <cassert>
float travelTime(float speed, float distance) {
	assert(speed > 0);
		//скорость <= 0
	return speed;
}
int main() {
	float speed = -5.123, distance = 28.1;
	travelTime(speed, distance);

	return 0;
}