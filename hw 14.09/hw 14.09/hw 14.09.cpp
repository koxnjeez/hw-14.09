#include <iostream>

void name() {}
void cursor_off() {}
void create() {}
void walls() {}
void join_exit() {}
void enemy_percentage() {}
void medkit_percentage() {}
void maze_construction() {}
void cursor_position() {}
void create2() {}
void health() {}
void moving() {}
void enemy_attack() {}
void using_medkit() {}
void exit() {}
void coins_pickup() {}
void happy_end() {}

int main()
{
	name(); // смена названия окна в консоли
	cursor_off(); // скрытие мигающего курсора в консоли
	create(); // создание основных переменных
	walls(); // установка стен
	join_exit(); // определение точки входа и выхода
	enemy_percentage(); // снижение процента вероятности появления врага
	medkit_percentage(); // снижение процента вероятности появления аптечки
	maze_construction(); // построение лабиринта
	cursor_position(); // установка курсора персонажа
	create2(); // создание дополнительных переменных
	health(); // показатель здоровья
	moving(); // реализация перемещения персонажа
	enemy_attack(); // реализация атаки врага
	using_medkit(); // реализация использования аптечки
	exit(); // проверка на прохождение лабиринта
	coins_pickup(); // реализация подбора монет
	happy_end(); // окончание программы (вынос результата прохождения)
}