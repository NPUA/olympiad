#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

uint16_t width = 0, height = 0;

uint16_t white_count = 0;

struct Figure {
	bool is_figure;
	uint16_t type;
	uint16_t x, y;
	enum Player : uint8_t {
		White, Black
	} color;
	bool is_vec;
};

std::vector<std::vector<Figure>> map;

void print() {
	for (auto& row : map) {
		for (auto& place : row) {
			if (place.is_vec) {
				std::cout << ">";
				continue;
			}
			if (!place.is_figure) {
				std::cout << "O";
				continue;
			}

			if (place.color == Figure::White) {
				switch (place.type) {
				case 1: 
					std::cout << "T";
					break;
				case 2:
					std::cout << "P";
					break;
				case 3:
					std::cout << "G";
					break;
				}
			}
			else {
				switch (place.type) {
				case 1:
					std::cout << "W";
					break;
				case 2:
					std::cout << "F";
					break;
				case 3:
					std::cout << "H";
					break;
				}
			}
		}

		std::cout << "\n";
	}
}

uint16_t place_black_figures() {
	for (auto y = 0; y < map.size();y++) {
		for (auto x = 0; x < map[y].size(); x++) {
			auto& place = map[y][x];
			if (!place.is_figure)
				continue;

			if (place.color != Figure::White)
				continue;
			switch (place.type) {
			case 1: 
				for (auto c = x; c < width; c++) {
					if (map[y][c].is_figure && (c != x))
						break;
					else if (map[y][c].is_figure && (c == x))
						continue;
					map[y][c].is_figure = false;
					map[y][c].is_vec = true;
				}
				for (auto c = y; c < height; c++) {
					if (map[c][x].is_figure && (c != y))
						break;
					else if (map[c][x].is_figure && (c == y))
						continue;
					map[c][x].is_figure = false;
					map[c][x].is_vec = true;
				}
				for (auto c = x; c >= 0; c--) {
					if (map[y][c].is_figure && (c != x))
						break;
					else if (map[y][c].is_figure && (c == x))
						continue;
					map[y][c].is_figure = false;
					map[y][c].is_vec = true;
				}
				for (auto c = y; c >= 0; c--) {
					if (map[c][x].is_figure && (c != y))
						break;
					else if (map[c][x].is_figure && (c == y))
						continue;
					map[c][x].is_figure = false;
					map[c][x].is_vec = true;
				}
				break;
			case 2:
				for (auto x_ = x, y_ = y; x_ < width && y_ < height; x_++, y_++) {
					if (map[y_][x_].is_figure && (x_ != x && y_ != y))
						break;
					else if (map[y_][x_].is_figure && (x_ == x && y_ == y))
						continue;
					map[y_][x_].is_figure = false;
					map[y_][x_].is_vec = true;
				}
				for (auto x_ = x, y_ = y; x_ >= 0 && y_ >= 0; x_--, y_--) {
					if (map[y_][x_].is_figure && (x_ != x && y_ != y))
						break;
					else if (map[y_][x_].is_figure && (x_ == x && y_ == y))
						continue;
					map[y_][x_].is_figure = false;
					map[y_][x_].is_vec = true;
				}

				for (auto x_ = x, y_ = y; x_ >= 0 && y_ < height; x_--, y_++) {
					if (map[y_][x_].is_figure && (x_ != x && y_ != y))
						break;
					else if (map[y_][x_].is_figure && (x_ == x && y_ == y))
						continue;
					map[y_][x_].is_figure = false;
					map[y_][x_].is_vec = true;
				}

				for (auto x_ = x, y_ = y;  x_ < width && y_ >= 0; x_++, y_--) {
					if (map[y_][x_].is_figure && (x_ != x && y_ != y))
						break;
					else if (map[y_][x_].is_figure && (x_ == x && y_ == y))
						continue;
					map[y_][x_].is_figure = false;
					map[y_][x_].is_vec = true;
				}
				break;
			case 3:
				for (auto c = x; c < width; c++) {
					if (map[y][c].is_figure && (c != x))
						break;
					else if (map[y][c].is_figure && (c == x))
						continue;
					map[y][c].is_figure = false;
					map[y][c].is_vec = true;
				}
				for (auto c = y; c < height; c++) {
					if (map[c][x].is_figure && (c != y))
						break;
					else if (map[c][x].is_figure && (c == y))
						continue;
					map[c][x].is_figure = false;
					map[c][x].is_vec = true;
				}
				for (auto c = x; c >= 0; c--) {
					if (map[y][c].is_figure && (c != x))
						break;
					else if (map[y][c].is_figure && (c == x))
						continue;
					map[y][c].is_figure = false;
					map[y][c].is_vec = true;
				}
				for (auto c = y; c >= 0; c--) {
					if (map[c][x].is_figure && (c != y))
						break;
					else if (map[c][x].is_figure && (c == y))
						continue;
					map[c][x].is_figure = false;
					map[c][x].is_vec = true;
				}

				for (auto x_ = x, y_ = y; x_ < width && y_ < height; x_++, y_++) {
					if (map[y_][x_].is_figure && (x_ != x && y_ != y))
						break;
					else if (map[y_][x_].is_figure && (x_ == x && y_ == y))
						continue;
					map[y_][x_].is_figure = false;
					map[y_][x_].is_vec = true;
				}
				for (auto x_ = x, y_ = y; x_ >= 0 && y_ >= 0; x_--, y_--) {
					if (map[y_][x_].is_figure && (x_ != x && y_ != y))
						break;
					else if (map[y_][x_].is_figure && (x_ == x && y_ == y))
						continue;
					map[y_][x_].is_figure = false;
					map[y_][x_].is_vec = true;
				}

				for (auto x_ = x, y_ = y; x_ >= 0 && y_ < height; x_--, y_++) {
					if (map[y_][x_].is_figure && (x_ != x && y_ != y))
						break;
					else if (map[y_][x_].is_figure && (x_ == x && y_ == y))
						continue;
					map[y_][x_].is_figure = false;
					map[y_][x_].is_vec = true;
				}

				for (auto x_ = x, y_ = y; x_ < width && y_ >= 0; x_++, y_--) {
					if (map[y_][x_].is_figure && (x_ != x && y_ != y))
						break;
					else if (map[y_][x_].is_figure && (x_ == x && y_ == y))
						continue;
					map[y_][x_].is_figure = false;
					map[y_][x_].is_vec = true;
				}
				break;
			}
		}
	}

	uint16_t count = 0;
	for (auto y = 0; y < map.size();y++) {
		for (auto x = 0; x < map[y].size(); x++) {
			if (!map[y][x].is_figure && !map[y][x].is_vec)
				count++;
		}
	}

	return count;
}

int main(int argc, char* argv[]) {
	// input the dimensions of the table
	std::cin >> width >> height;
	// input the white figure count
	std::cin >> white_count;

	map.resize(height);
	std::for_each(map.begin(), map.end(), [](auto& v) {
		v.resize(width);
		std::fill(v.begin(), v.end(), Figure{ false, 0, 0, 0, Figure::Black,  false });
	});

	// input the figure white_count times
	for (auto i = 0; i < white_count; i++) {
		Figure figure{true, 0, 0, 0, Figure::White, false};
		std::cin >> figure.type >> figure.x >> figure.y;
		map[figure.y - 1][figure.x - 1] = figure;
	}

	//for debugging purposes...
	//print();
	const auto count_of_blacks = place_black_figures();
	// std::cout << std::endl << std::endl;
	//print();
	std::cout << count_of_blacks << std::endl;

	return 0;
}