#include <vector>
#include <string>
#include <algorithm>
#include <fmt/core.h>
#include <fmt/ranges.h>
struct Point {
    int x, y;
};
//auto distanceTo(Point const candidate) {
//    auto const xs = candidate.x - destination.x;
//    auto const ys = candidate.y - destination.y;
//    return xs * xs + ys * ys;
//};
auto closestPointTo(
        std::vector<Point> const& points,
        Point const destination
) -> Point {
    return std::ranges::min(points, {}, [destination](Point const candidate) {
        auto const xs = candidate.x - destination.x;
        auto const ys = candidate.y - destination.y;
        return xs * xs + ys * ys;
    });
//    return std::ranges::min(points, {}, distanceTo);
}
auto main() -> int {
    auto points = std::vector<Point>{
            {1, 2},
            Point{3, 4},
            Point(5, 7)
    };
/*
//    std::ranges::sort(
//            points,
//            [](Point const left, Point const right) {
//                auto const distanceLeft = left.x * left.x + left.y * left.y;
//                auto const distanceRight = right.x * right.x + right.y * right.y;
//                return distanceLeft < distanceRight;
//            }
//    );
    std::ranges::sort(
            points,
            {},
            [](Point const p) {
                return p.x * p.x + p.y * p.y;
            }
    );
//    fmt::print("{}", points);
    for (auto [x, y] : points) {
        fmt::print("({},{}) ", x, y);
    }*/
    auto closest = closestPointTo(points, {10, 10});
    fmt::print("({},{})", closest.x, closest.y);
}