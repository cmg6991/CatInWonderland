#include "Object.h"
#include "RenderManager.h"
#include "Sprite.h"

namespace catInWonderland
{
	Object::Object(hRectangle worldRectangle, hRectangle spriteRectangle, Sprite* sprite, eObjectType objectType, eLayerType layerType, bool bLeft)
		: mWorldRectangle(worldRectangle)
		, mSpriteRectangle(spriteRectangle)
		, mSprite(sprite)
		, mObjectType(objectType)
		, mbLeft(bLeft)
		, mLayerType(layerType)
	{
	}

	Object::Object(const ObjectInfo& objectInfo)
		: Object(objectInfo.WorldRectangle,
			objectInfo.SpriteRectangle,
			objectInfo.Sprite,
			objectInfo.ObjectType,
			objectInfo.LayerType,
			objectInfo.bLeft)
	{
	}

	void Object::Render()
	{
		RenderManager::GetInstance()->Draw(mWorldRectangle, mSpriteRectangle, *mSprite, mLayerType, mbLeft);
	}

	void Object::SetIsLeft(bool bLeft)
	{
		mbLeft = bLeft;
	}
}