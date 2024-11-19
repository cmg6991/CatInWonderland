#pragma once

#include "CutScene.h"

namespace catInWonderland
{
	//(���) class ǥ�� ����
	struct Sprite;

	class CutScene01 : public CutScene
	{
	public:
		CutScene01();
		virtual ~CutScene01() = default;

		virtual eSceneType HandleScene() override;
		virtual void Enter() override;
		virtual void Update() override;
		virtual void Exit() override;

	private:
		enum { SPRITE_SIZE = 4 };

		Sprite* mMapSprites[SPRITE_SIZE];
		float mElapsed;
		bool mbEnd;
		unsigned int mSpriteIndex;
	};

}

