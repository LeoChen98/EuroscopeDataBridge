﻿// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#include "framework.h"
#include <iostream>
#include <WinUser.h>
#include "websocketpp/config/asio_no_tls_client.hpp"
#include "websocketpp/config/asio_no_tls.hpp"
#include "websocketpp/client.hpp"
#include "websocketpp/server.hpp"
#include "websocketpp/common/thread.hpp"
#include "websocketpp/common/memory.hpp"
typedef websocketpp::client<websocketpp::config::asio_client> client;
typedef websocketpp::server<websocketpp::config::asio> server;
#include <mutex>
#include <locale>
#include <codecvt>
#include <cstdlib>
#include <string>
#include "include/httplib.h"
#include <Windows.h>
#include "include/EuroScopePlugIn.h"
#include <fstream>
#include <time.h>
#include <algorithm>
#include "include/json.hpp"
#include <future>
#include <map>
#include <list>
#include <vector>
#include <thread>
#include <regex>
#endif //PCH_H
