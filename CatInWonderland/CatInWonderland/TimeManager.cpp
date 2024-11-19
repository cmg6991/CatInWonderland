#define _CRT_SECURE_NO_WARNINGS

#include <cmath>
#include <stdio.h>

#include "TimeManager.h"
#include "WinApp.h"

namespace catInWonderland
{
	TimeManager* TimeManager::instance = nullptr;

	TimeManager* TimeManager::GetInstance()
	{
		if (instance == nullptr)
		{
			instance = new TimeManager();
		}

		return instance;
	}

	void TimeManager::DestroyInstance()
	{
		delete instance;
		instance = nullptr;
	}

	TimeManager::TimeManager()
		: mCurrentTime(GetTickCount64())
		, mPreviousTime(mCurrentTime)
		, mDeltaTime(0.f)
		, mFPS(0u)
		, mElapsed(0.f)
		, mFrameCount(0u)
	{
		mPreviousTime = mCurrentTime;
	}

	void TimeManager::Init()
	{
		mPreviousTime = mCurrentTime = GetTickCount64();
		mDeltaTime = 0.f;
	}

	void TimeManager::Update()
	{
		mPreviousTime = mCurrentTime;
		mCurrentTime = GetTickCount64();
		mDeltaTime = (mCurrentTime - mPreviousTime) * 0.001f;


		char buf[64];
		sprintf(buf, "fps : %d, DeltaTime : %.5f\n", mFPS, GetDeltaTime());
		OutputDebugStringA(buf);

		mElapsed += mDeltaTime;
		mFrameCount++;
		if (mElapsed >= 1.f)
		{
			mFPS = mFrameCount;
			mElapsed -= 1.f;
			mFrameCount = 0;
		}
	}


	unsigned int TimeManager::GetFrameRate()
	{
		return mFPS;
	}
}