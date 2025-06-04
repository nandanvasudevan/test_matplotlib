#include "matplotlibcpp.h"
#include <vector>
#include <unistd.h>

namespace plt = matplotlibcpp;

int main() {
    static const std::vector<double> sineWave = {
            0.156434, 0.309017, 0.45399, 0.587785, 0.707107, 0.809017, 0.891007, 0.951057, 0.987688,
            1, 0.987688, 0.951057, 0.891007, 0.809017, 0.707107, 0.587785, 0.45399, 0.309017, 0.156434,
            0, -0.156434, -0.309017, -0.45399, -0.587785, -0.707107, -0.809017, -0.891007, -0.951057, -0.987688,
            -1, -0.987688, -0.951057, -0.891007, -0.809017, -0.707107, -0.587785, -0.45399, -0.309017, -0.156434,
            -0, 0.156434
    };

    std::vector<double> temp;
    temp.reserve(3*sineWave.size());

    plt::title("AN ORDINARY SIN WAVE");

    size_t i = 0, j = 0;

    while(j < 6*sineWave.size())
    {
        temp.push_back(sineWave[i++]);

        if(i > sineWave.size())
        {
            i = 0;
        }

        if(j % 10 == 0)
        {
            plt::plot(temp);
            plt::pause(0.1);
        }

        j++;
    }

    plt::show(true);
}