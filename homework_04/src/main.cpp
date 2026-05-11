#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <iomanip>

// Константи робота
const double TICKS_PER_REVOLUTION = 1024.0;
const double WHEEL_RADIUS_M = 0.3;
const double WHEELBASE_M = 1.0;
const double PI = std::acos(-1.0);

int main(int argc, char* argv[]) {
    // 1. Перевірка аргументів командного рядка
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file.txt>" << std::endl;
        return 1;
    }

    std::ifstream input_file(argv[1]);
    if (!input_file.is_open()) {
        std::cerr << "Error: Could not open file " << argv[1] << std::endl;
        return 1;
    }

    // Початковий стан робота
    double x = 0.0;
    double y = 0.0;
    double theta = 0.0;

    // Змінні для зчитування даних
    long prev_timestamp, prev_fl, prev_fr, prev_bl, prev_br;
    long curr_timestamp, curr_fl, curr_fr, curr_bl, curr_br;

    // Розрахунок ціни одного імпульсу в метрах
    const double distance_per_tick = (2.0 * PI * WHEEL_RADIUS_M) / TICKS_PER_REVOLUTION;

    // Зчитуємо перший рядок (стартова точка, зазвичай всі нулі)
    if (!(input_file >> prev_timestamp >> prev_fl >> prev_fr >> prev_bl >> prev_br)) {
        return 0; 
    }

    // Налаштування виводу: фіксована точність для зручності
    std::cout << std::fixed << std::setprecision(4);

  

    return 0;
}
