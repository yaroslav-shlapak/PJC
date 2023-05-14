#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include "fmt/ranges.h"

/*
Create a program in which you will define a Point class containing two fields - x and y (of type int).
Then, define a function called uniquePerXAxis() that will accept an std::vector of Points.
The function should retain only one point per X-axis in the passed vector.
Modify the vector in-place, that is, do not make any copies of it - changes to it should be visible to the caller of the function.

For example, if the vector contains the following points: (1, 1), (1, 2), (2, 2), (3, 1), (2, 5),
at least two of its points should be removed, because there are two pairs of points that land on the same X-axis -
(1, 1) and (1, 2), and (2, 2) and (2, 5).
 */

class Point {
public:
    int x;
    int y;

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
};
/*
The function should retain only one point per X-axis in the passed vector.
Modify the vector in-place, that is, do not make any copies of it - changes to it should be visible to the caller of the function.

For example, if the vector contains the following points: (1, 1), (1, 2), (2, 2), (3, 1), (2, 5),
at least two of its points should be removed, because there are two pairs of points that land on the same X-axis -
(1, 1) and (1, 2), and (2, 2) and (2, 5).
 */
void uniquePerXAxis(std::vector<Point>& points) {
    std::set<int> set;
    int writeIndex = 0;
    for (int readIndex = 0; readIndex < points.size(); readIndex++) {
        const auto& point = points[readIndex];
        if (set.insert(point.x).second) {
            if (writeIndex != readIndex) {
                points[writeIndex] = point;
            }
            writeIndex++;
        }
    }
    points.erase(points.begin() + writeIndex, points.end());
}

//void uniquePerXAxis(std::vector<Point>& points) {
//    std::set<int> set;
//    std::vector<Point> newPonints;
//    for (const auto& point : points) {
//        if (set.insert(point.x).second) {
//            newPonints.push_back(point);
//        }
//    }
//    points = newPonints;
//}


int main() {
    // For example, if the vector contains the following points: (1, 1), (1, 2), (2, 2), (3, 1), (2, 5)
    std::vector<Point> points = {{1, 1}, {1, 2}, {2, 2}, {3, 1}, {2, 5}};
    for (const auto& point : points) {
        std::cout << point.x << " " << point.y << " | ";
    }
    std::cout<< "\n====== \n";

    uniquePerXAxis(points);

    for (const auto& point : points) {
        std::cout << point.x << " " << point.y << " | ";
    }
    std::cout<< "\n";
    return 0;
}

