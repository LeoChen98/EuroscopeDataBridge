// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "EuroscopeDataBridge.h"
using namespace EuroScopePlugIn;

EuroscopeDataBridge* pPlugIn = nullptr;

void __declspec (dllexport)
EuroScopePlugInInit(CPlugIn** ppPluginInstance)
{
	*ppPluginInstance = pPlugIn = new EuroscopeDataBridge;
}

void __declspec (dllexport)
EuroScopePlugInExit(void)
{
	delete pPlugIn;
}