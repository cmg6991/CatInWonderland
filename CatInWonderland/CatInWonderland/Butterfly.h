#pragma once

#include "Object.h"
#include "Animator.h"
#include "Player.h"
#include "BoardObject.h"

namespace catInWonderland
{
	class Butterfly : public Object
	{
	public:
		Butterfly(const ObjectInfo& objectInfo, Object* interactionObjectOrNull, eLayerType layerType, float maxOffset, bool bRed, const Animator& animator);
		Butterfly(hRectangle worldRectangle, hRectangle spriteRectangle, Sprite* sprite, eObjectType objectType, Object* interactionObjectOrNull, eLayerType layerType, float maxOffset, bool bRed, bool bLeft, const Animator& animator);
		virtual ~Butterfly() = default;

		virtual void Update() override;

		void InvertColor();
		void SetIsRed(bool bRed);
		inline void SetInteractionObject(Object* interactionObject);
		inline void SetMaxOffset(float maxOffSet);

		inline bool GetIsRed() const;

	private:
		// Ŭ���� ���ο����� ������ �� �־�?
		// Ŭ���� ���ο����� ������, Ŭ���� ���θ� ���� �Լ��� �ߺ� ���� ���Ÿ� ���ؼ�

	private:
		Object* mInteractionObjectOrNull;
		Animator mAnimator;
		float mMaxOffset;
		bool mbRed;
	};

	void Butterfly::SetInteractionObject(Object* interactionObject)
	{
		mInteractionObjectOrNull = interactionObject;
	}

	void Butterfly::SetMaxOffset(float maxOffSet)
	{
		mMaxOffset = maxOffSet;
	}

	bool Butterfly::GetIsRed() const
	{
		return mbRed;
	}

	
}