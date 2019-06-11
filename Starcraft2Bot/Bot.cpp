#include <iostream>

#include <sc2api/sc2_api.h>

#include "Bot.h"

namespace Starcraft2Bot {

    void Bot::OnGameStart() {
        std::cout << "Game started" << std::endl;
    }

    void Bot::OnStep() {
        std::cout << Observation()->GetGameLoop() << std::endl;
    }

}
