#include "pch.h"
#include "EuroscopeDataBridge.h"


EuroscopeDataBridge::EuroscopeDataBridge(void) : CPlugIn(
	EuroScopePlugIn::COMPATIBILITY_CODE,
	PLUGIN_NAME, PLUGIN_VER, PLUGIN_AUTHOR, PLUGIN_COPYRIGHT
) {

}

EuroscopeDataBridge::~EuroscopeDataBridge()
{
}
