#include <Geode/Geode.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>

using namespace geode::prelude;

class $modify(PhysicsIndicatorLayer, LevelInfoLayer) {

    bool init(GJGameLevel* level, bool challenge) {
        if (!LevelInfoLayer::init(level, challenge))
            return false;

        auto label = CCLabelBMFont::create(
            "PHYSICS: TEST",
            "bigFont.fnt"
        );

        label->setScale(0.4f);

        label->setPosition(
            m_mainLayer->getContentSize().width / 2,
            30
        );

        m_mainLayer->addChild(label);

        return true;
    }
};
