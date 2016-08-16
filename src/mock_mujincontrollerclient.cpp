// -*- coding: utf-8 -*-
// Copyright (C) 2016 MUJIN Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#include <boost/thread.hpp> // for sleep
#include <boost/algorithm/string.hpp>

#include "testmujincontrollerclient/mock_mujincontrollerclient.h"

#ifdef MUJIN_USEZMQ
#include "mock_binpickingtaskzmq.h"
#endif

#include "logging.h"

MUJIN_LOGGER("mujin.testcontrollerclientcpp");

namespace mujinclient {

MockControllerClientPtr CreateMockControllerClient(const std::string& usernamepassword, const std::string& baseurl, const std::string& proxyserverport, const std::string& proxyuserpw, int options)
{
    return MockControllerClientPtr(new MockControllerClient());
}

void MockControllerClientDestroy()
{
    DestroyMockControllerClient();
}

void DestroyMockControllerClient()
{
}

}
