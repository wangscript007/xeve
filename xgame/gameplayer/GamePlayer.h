﻿//------------------------------------------------------------------------
// * @filename: GamePlayer.h
// *
// * @brief: 游戏玩家
// *
// * @author: XGM
// * @date: 2018/05/11
//------------------------------------------------------------------------
#pragma once

#include <stdint.h>

class GamePlayer
{
public:
	//------------------------------------------------------------------------
	// 获取玩家GUID
	//------------------------------------------------------------------------
	int64_t GetPlayerGUID() { return m_nPlayerGUID; }

	//------------------------------------------------------------------------
	// 获取玩家连接ID
	//------------------------------------------------------------------------
	int64_t GetSessionID() { return m_nSessionID; }

protected:
	// PlayerGUID
	int64_t m_nPlayerGUID = 0;

	// 连接ID
	int64_t m_nSessionID = 0;
};