//
// Created by Iannis on 11/07/2022.
//

#ifndef JEUDELESPACE_UNIVERSALPOSITION_HPP
#define JEUDELESPACE_UNIVERSALPOSITION_HPP

#include "glm/vec3.hpp"

class UniversalPosition {
private:
public:
    uint32_t seedUniverse;
    glm::ivec3 positionGalaxy;
    glm::i64vec3 positionSolarSystem;

    UniversalPosition(uint32_t seedUniverse, glm::ivec3 galaxy, glm::i64vec3 solarSystem);
    UniversalPosition(uint32_t seedUniverse, glm::ivec3 galaxy);
    UniversalPosition(uint32_t seedUniverse);
    UniversalPosition();
};

bool operator==(const UniversalPosition& lhs, const UniversalPosition& rhs);
bool operator!=(const UniversalPosition& lhs, const UniversalPosition& rhs);


#endif //JEUDELESPACE_UNIVERSALPOSITION_HPP
