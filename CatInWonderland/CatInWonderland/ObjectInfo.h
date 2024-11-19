#pragma once

#include "hRectangle.h"
#include "eObjectType.h"
#include "eLayerType.h"
#include "Sprite.h"
#include "eAnimaitonType.h"

namespace catInWonderland
{
	struct ObjectInfo
	{
		hRectangle WorldRectangle;
		hRectangle SpriteRectangle;
		Sprite* Sprite;
		eObjectType ObjectType;
		eLayerType LayerType;
		bool bLeft;
	};
}