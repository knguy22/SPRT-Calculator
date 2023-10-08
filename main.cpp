#include <iostream>

#include "sprt.h"

int main() {
    // customizable inputs
    int wins = 164;
    int losses = 24;
    int draws = 12;

    // statistical bounds
    double elo0 = 0;
    double elo1 = 10;
    double alpha = 0.05;
    double beta = 0.05;

    Sprt experiment;
    Sprt::Status result;
    experiment.initialize(elo0, elo1, alpha, beta);
    for (int i = 0; i < wins; i++) {
        experiment.addGameResult(Sprt::GameResult::Win);
    }
    for (int i = 0; i < losses; i++) {
        experiment.addGameResult(Sprt::GameResult::Loss);
    }
    for (int i = 0; i < draws; i++) {
        experiment.addGameResult(Sprt::GameResult::Draw);
    }
    result = experiment.status();
    std::cout << "Lower bound: " << result.lBound << std::endl;
    std::cout << "Current LLR: " << result.llr << std::endl;
    std::cout << "Upper bound: " << result.uBound << std::endl;
    std::cout << "Result: " << result.result << std::endl;
}