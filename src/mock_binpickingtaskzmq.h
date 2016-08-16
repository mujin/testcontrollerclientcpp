// -*- coding: utf-8 -*-
// Copyright (C) 2012-2014 MUJIN Inc. <rosen.diankov@mujin.co.jp>
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
/** \file mujincontrollerclient.h
    \brief  Defines the public headers of the MUJIN Controller Client
 */
#ifndef MUJIN_CONTROLLERCLIENT_BINPICKINGTASK_ZMQ_H
#define MUJIN_CONTROLLERCLIENT_BINPICKINGTASK_ZMQ_H

#include "testmujincontrollerclient/mock_binpickingtask.h"

namespace mujinclient {

/** \brief client to mujin controller via zmq socket connection
 */
class MockZmqMujinControllerClient;
typedef boost::shared_ptr<MockZmqMujinControllerClient> MockZmqMujinControllerClientPtr;
typedef boost::weak_ptr<MockZmqMujinControllerClient> MockZmqMujinControllerClientWeakPtr;

class MUJINCLIENT_API MockBinPickingTaskZmqResource : public MockBinPickingTaskResource
{
public:
    MockBinPickingTaskZmqResource(ControllerClientPtr controller, const std::string& pk, const std::string& scenepk, const std::string& tasktype = "binpicking") : MockBinPickingTaskResource(controller, pk, scenepk, tasktype) {}

    ~MockBinPickingTaskZmqResource() {}

    boost::property_tree::ptree ExecuteCommand(const std::string& command, const double timeout /* [sec] */=0.0, const bool getresult=true) {}

    void Initialize(const std::string& defaultTaskParameters, const int zmqPort, const int heartbeatPort, boost::shared_ptr<zmq::context_t> zmqcontext, const bool initializezmq=false, const double reinitializetimeout=10, const double timeout=0, const std::string& userinfo="{}", const std::string& slaverequestid="") {}

    void InitializeZMQ(const double reinitializetimeout = 5, const double timeout /* second */=0) {}
    void _HeartbeatMonitorThread(const double reinitializetimeout, const double commandtimeout) {}

};

} // namespace mujinclient
#endif
