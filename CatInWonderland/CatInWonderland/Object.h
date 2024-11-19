#pragma once

#include "ObjectInfo.h"
#include "eLayerType.h"
#include "eAnimaitonType.h"

namespace catInWonderland
{
	class Sprtie;

	class Object
	{
	public:
		Object(const ObjectInfo& objectInfo);
		Object(hRectangle worldRectangle, hRectangle spriteRectangle, Sprite* sprite, eObjectType objectType, eLayerType layerType, bool bLeft = true);
		virtual ~Object() = default;

		virtual void Update() = 0;
		virtual void Render();

		inline void MoveInWorld(float x, float y);
		virtual void SetIsLeft(bool bLeft);

		inline void SetSprite(Sprite* sprite);
		inline void SetSpriteRectangle(const hRectangle& spriteRectangle);
		inline void SetLayerType(eLayerType layerType);
		inline void SetWorldRectangle(const hRectangle& spriteRectangle);

		inline bool GetIsLeft() const;
		inline const hRectangle& GetWorldRectangle() const;
		inline eObjectType GetObjectType() const;
		inline eLayerType GetLayerType() const;

	protected:
		eLayerType mLayerType;
		hRectangle mWorldRectangle;
		hRectangle mSpriteRectangle;
		Sprite* mSprite;
		eObjectType mObjectType;
		bool mbLeft;
	};

	void Object::SetSprite(Sprite* sprite)
	{
		mSprite = sprite;
	}

	void Object::SetSpriteRectangle(const hRectangle& spriteRectangle)
	{
		mSpriteRectangle = spriteRectangle;
	}

	void Object::SetWorldRectangle(const hRectangle& worldRectangle)
	{
		mWorldRectangle = worldRectangle;
	}

	bool Object::GetIsLeft() const
	{
		return mbLeft;
	}

	const hRectangle& Object::GetWorldRectangle() const
	{
		return mWorldRectangle;
	}

	eObjectType Object::GetObjectType() const
	{
		return mObjectType;
	}

	void Object::MoveInWorld(float x, float y)
	{
		mWorldRectangle.Move(x, y);
	}

	eLayerType Object::GetLayerType() const
	{
		return mLayerType;
	}

	void Object::SetLayerType(eLayerType layerType)
	{
		mLayerType = layerType;
	}
}