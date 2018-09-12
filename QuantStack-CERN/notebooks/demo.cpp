
#include <numeric>                        // Standard library import for std::accumulate
#include <xtensor/xmath.hpp>              // xtensor import for the C++ universal functions

template <class E>
double sum_of_sines(E m)
{
    auto sines = xt::sin(m);
    // return xt::sum(sines)();
    return std::accumulate(sines.begin(), sines.end(), 0.0);
}
