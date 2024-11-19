#include <string>

#include "GameCore.h"

#include "EnumLoader.h"

#include "InputManager.h"
#include "RenderManager.h"
#include "SceneManager.h"
#include "TimeManager.h"
#include "SpriteManager.h"
#include "BoardManager.h"
#include "SoundManager.h"
#include "SceneLoader.h"

#include "WinApp.h"

namespace catInWonderland
{
	GameCore* GameCore::instance = nullptr;

	GameCore* GameCore::GetInstance()
	{
		if (instance == nullptr)
		{
			instance = new GameCore();
		}
		return instance;
	}

	void GameCore::DestroyInstance()
	{
		delete instance;
		instance = nullptr;
	}

	GameCore::GameCore()
	{
		EnumLoader::Load();

		InputManager::GetInstance();
		TimeManager::GetInstance();
		RenderManager::GetInstance();
		SceneManager::GetInstance();
		SpriteManager::GetInstance();
		BoardManager::GetInstance();
		SoundManager::GetInstance();
	}

	GameCore::~GameCore()
	{
		SceneManager::DestroyInstance();
		InputManager::DestroyInstance();
		TimeManager::DestroyInstance();
		SpriteManager::DestroyInstance();
		BoardManager::DestroyInstance();
		SoundManager::DestroyInstance();

		SceneLoader::DestroyResource();
		RenderManager::DestroyInstance();
	}

	void GameCore::Frame()
	{
		InputManager::GetInstance()->Update();
		TimeManager::GetInstance()->Update();
		SceneManager::GetInstance()->Update();

		RenderManager::GetInstance()->Render();
	}
}