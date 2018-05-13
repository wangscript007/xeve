﻿//------------------------------------------------------------------------
// * @filename: Application.h
// *
// * @brief: 应用模板
// *
// * @author: XGM
// * @date: 2017/08/08
//------------------------------------------------------------------------
#pragma once

#include <string>

namespace evpp {
	class EventLoop;
	class EventLoopThread;
}

class Env;

class Application
{
public:
	Application();
	virtual ~Application();

	//------------------------------------------------------------------------
	// 应用名称
	//------------------------------------------------------------------------
	virtual std::string GetName() = 0;

	//------------------------------------------------------------------------
	// 初始化
	//------------------------------------------------------------------------
	virtual bool Init(int argc, char** argv);

	//------------------------------------------------------------------------
	// 退出
	//------------------------------------------------------------------------
	virtual void Exit();

	//------------------------------------------------------------------------
	// 运行一帧
	//------------------------------------------------------------------------
	virtual void RunOnce() = 0;

	//------------------------------------------------------------------------
	// 循环
	//------------------------------------------------------------------------
	virtual void Loop(int fps);

	//------------------------------------------------------------------------
	// 获得事件管理器
	//------------------------------------------------------------------------
	evpp::EventLoop* GetMainEventLoop() { return m_pLoop; }

	//------------------------------------------------------------------------
	// 获得事件守护线程
	//------------------------------------------------------------------------
	evpp::EventLoopThread* GetLoopDaemonThread() { return m_pLoopDaemon; }

protected:
	// 程序环境
	Env* m_pEnv = nullptr;
	// 事件管理器
	evpp::EventLoop* m_pLoop = nullptr;
	// 事件守护线程
	evpp::EventLoopThread* m_pLoopDaemon = nullptr;
};
