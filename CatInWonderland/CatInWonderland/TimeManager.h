#pragma once

#include <Windows.h>

namespace catInWonderland
{
	class TimeManager final
	{
	public:
		static TimeManager* GetInstance();
		static void DestroyInstance();

		void Init();
		void Update();

		unsigned int GetFrameRate();

		inline float GetDeltaTime();


	private:
		TimeManager();
		~TimeManager() = default;

	private:
		static TimeManager* instance;

		ULONGLONG mCurrentTime;
		ULONGLONG mPreviousTime;
		float mDeltaTime;
		float mElapsed;
		unsigned int mFPS;
		unsigned int mFrameCount;
	};

	float TimeManager::GetDeltaTime()
	{
		return mDeltaTime;
	}
}