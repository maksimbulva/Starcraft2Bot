#pragma once

#include <sc2api/sc2_agent.h>

namespace Starcraft2Bot {

    class Bot : public sc2::Agent {
    public:
        void OnGameStart() override;
        void OnStep() override;
    };

}
