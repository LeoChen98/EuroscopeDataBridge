#pragma once
#include "pch.h"
using namespace EuroScopePlugIn;

#pragma region copyrights
#define AUTHOR "Leo Chen"
#define GITHUB_LINK "https://github.com/LeoChen98/EuroscopeDataBridge"
#define GITHUB_UPDATE "https://api.github.com"
#define GITHUB_UPDATE_PATH "/repos/LeoChen98/EuroscopeDataBridge/releases"
#define PLUGIN_NAME "EuroscopeDataBridge"
#define PLUGIN_VER "1.0.0.0"
#define PLUGIN_AUTHOR "Leo Chen"
#define PLUGIN_COPYRIGHT "AGPL-3.0 license"
#pragma endregion



class EuroscopeDataBridge : public CPlugIn
{
public:
	EuroscopeDataBridge();
	~EuroscopeDataBridge();
};

