#include <Geode/Geode.hpp>
#include <Geode/modify/CCParticleSystemQuad.hpp>

using namespace geode::prelude;

class $modify(PerfParticles, CCParticleSystemQuad) {
    bool initWithTotalParticles(unsigned int numberOfParticles, bool useTexture) {
        if (Mod::get()->getSettingValue<bool>("no-particles")) {
            numberOfParticles = 1;
        }
        return CCParticleSystemQuad::initWithTotalParticles(numberOfParticles, useTexture);
    }
};
