#pragma once

#include <cassert>
#include <map>
#include <Windows.h>

#include "eSpriteType.h"
#include "eAnimaitonType.h"
#include "hRectangle.h"
#include "Animator.h"

namespace catInWonderland
{
	struct Sprite;
	class hRectangle;

	class SpriteManager final
	{
	public:
		static SpriteManager* GetInstance();
		static void DestroyInstance();

		inline Sprite& GetSprite(eSpriteType spriteType) const;
		inline const hRectangle& GetSpriteRectangle(eAnimationType animationType, unsigned int index) const;
		inline const Animator& GetAnimator(eAnimationType animationType) const;

		void LoadSpriteImage(eSpriteType spriteType, const WCHAR* fileName);
		void LoadSpriteImage(eSpriteType spriteType, const char* fileName);
		void LoadAnimationRectangle(eAnimationType animationType, const WCHAR* fileName, float interval);
		void LoadAnimationRectangle(eAnimationType animationType, const char* fileName, float interval);

	private:
		SpriteManager() = default;
		~SpriteManager();

	private:
		static SpriteManager* mInstance;

		std::map<eSpriteType, Sprite*> mSpriteMap;
		std::map<eAnimationType, Animator> mSpriteRectMap;
	};

	Sprite& SpriteManager::GetSprite(eSpriteType spriteType) const
	{
		auto finded = mSpriteMap.find(spriteType);
		assert(finded != mSpriteMap.end());

		return *(finded->second);
	}

	const Animator& SpriteManager::GetAnimator(eAnimationType animationType) const
	{
		auto finded = mSpriteRectMap.find(animationType);
		assert(finded != mSpriteRectMap.end());

		return finded->second;
	}

	const hRectangle& SpriteManager::GetSpriteRectangle(eAnimationType animationType, unsigned int index) const
	{
		return GetAnimator(animationType).GetSpriteRectangle(index);
	}
}