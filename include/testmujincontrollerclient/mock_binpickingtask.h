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
/** \file mujincontrollerclient.h
    \brief  Defines the public headers of the MUJIN Controller Client
 */
#ifndef MUJIN_TESTCONTROLLERCLIENT_BINPICKINGTASK_H
#define MUJIN_TESTCONTROLLERCLIENT_BINPICKINGTASK_H

#include <gmock/gmock.h>
#include <testmujincontrollerclient/mock_mujincontrollerclient.h>
#include <mujincontrollerclient/binpickingtask.h>
#include <boost/property_tree/ptree.hpp>
#include <boost/thread.hpp>
#ifdef MUJIN_USEZMQ
#endif

namespace mujinclient {


class MUJINCLIENT_API MockBinPickingTaskResource : public BinPickingTaskResource
{
public:
    MockBinPickingTaskResource(ControllerClientPtr controller, const std::string& pk, const std::string& scenepk, const std::string& tasktype = "binpicking") : BinPickingTaskResource(controller, pk, scenepk, tasktype) {}
    virtual ~MockBinPickingTaskResource() {}
    
//     virtual void Initialize(const std::string& defaultTaskParameters, const double commandtimeout=5.0, const std::string& userinfo="{}", const std::string& slaverequestid="") {}

// #ifdef MUJIN_USEZMQ
//     virtual void Initialize(const std::string& defaultTaskParameters, const int zmqPort, const int heartbeatPort, boost::shared_ptr<zmq::context_t> zmqcontext, const bool initializezmq=false, const double reinitializetimeout=10, const double commandtimeout=0, const std::string& userinfo="{}", const std::string& slaverequestid="") {}
// #endif

//     virtual boost::property_tree::ptree ExecuteCommand(const std::string& command, const double timeout /* second */=5.0, const bool getresult=true) {}

//     virtual void GetJointValues(ResultGetJointValues& result, const double timeout /* second */=5.0) {}
//     virtual void MoveJoints(const std::vector<Real>& jointvalues, const std::vector<int>& jointindices, const Real envclearance, const Real speed /* 0.1-1 */, ResultMoveJoints& result, const double timeout /* second */=5.0) {}
//     virtual void GetTransform(const std::string& targetname, Transform& result, const std::string& unit="mm", const double timeout /* second */=5.0) {}
//     virtual void SetTransform(const std::string& targetname, const Transform& transform, const std::string& unit="mm", const double timeout /* second */=5.0) {}
//     virtual void GetManipTransformToRobot(Transform& result, const std::string& unit="mm", const double timeout /* second */=5.0) {}
//     virtual void GetManipTransform(Transform& result, const std::string& unit="mm", const double timeout /* second */=5.0) {}

//     virtual void GetAABB(const std::string& targetname, ResultAABB& result, const std::string& unit="mm", const double timeout=0) {}
//     virtual void GetOBB(ResultOBB& result, const std::string& targetname, const std::string& linkname="", const std::string& unit="mm", const double timeout=0) {}
//     virtual void GetInnerEmptyRegionOBB(ResultOBB& result, const std::string& targetname, const std::string& linkname="", const std::string& unit="mm", const double timeout=0) {}
//     virtual void UpdateObjects(const std::string& basename, const std::vector<Transform>& transformsworld, const std::vector<std::string>& confidence, const std::string& state, const std::string& unit="mm", const double timeout /* second */=5.0) {}
//     virtual void InitializeZMQ(const double reinitializetimeout = 0,const double timeout /* second */=5.0) {}
//     virtual void AddPointCloudObstacle(const std::vector<Real>& vpoints, const Real pointsize, const std::string& name,  const unsigned long long starttimestamp=0, const unsigned long long endtimestamp=0, const bool executionverification=false, const std::string& unit="mm", int isoccluded=-1, const double timeout /* second */=5.0) {}
//     virtual void UpdateEnvironmentState(const std::string& objectname, const std::vector<DetectedObject>& detectedobjects, const std::vector<Real>& vpoints, const std::string& resultstate, const Real pointsize, const std::string& pointcloudobstaclename, const std::string& unit="mm", const double timeout=0, const std::string& locationIOName="1") {}
//     virtual void VisualizePointCloud(const std::vector<std::vector<Real> >& pointslist, const Real pointsize, const std::vector<std::string>& names, const std::string& unit="m", const double timeout /* second */=5.0) {}
//     virtual void ClearVisualization(const double timeout /* second */=5.0) {}
//     virtual void IsRobotOccludingBody(const std::string& bodyname, const std::string& sensorname, const unsigned long long starttime, const unsigned long long endtime, bool& result, const double timeout /* second */=5.0) {}
//     virtual void GetPickedPositions(ResultGetPickedPositions& result, const std::string& unit="m", const double timeout /* second */=5.0) {}
//     virtual PlanningResultResourcePtr GetResult() {}
//     virtual void GetInstObjectAndSensorInfo(const std::vector<std::string>& instobjectnames, const std::vector<std::string>& sensornames, ResultGetInstObjectAndSensorInfo& result, const std::string& unit="m", const double timeout /* second */=5.0) {}
//     virtual void GetBinpickingState(ResultGetBinpickingState& result, const std::string& robotname, const std::string& unit="m", const double timeout /* second */=5.0) {}
//     virtual void GetITLState(ResultGetBinpickingState& result, const std::string& robotname, const std::string& unit="m", const double timeout /* second */=5.0) {}
//     virtual void GetPublishedTaskState(ResultGetBinpickingState& result, const std::string& robotname, const std::string& unit="m", const double timeout /* second */=5.0) {}
//     virtual void SetJogModeVelocities(const std::string& jogtype, const std::vector<int>& movejointsigns, const std::string& robotname = "", const std::string& toolname = "", const double robotspeed = -1, const double robotaccelmult = -1.0, const double timeout=1) {}
//     virtual void MoveToolLinear(const std::string& goaltype, const std::vector<double>& goals, const std::string& robotname = "", const std::string& toolname = "", const double robotspeed = -1, const double timeout = 10) {}
//     virtual void MoveToHandPosition(const std::string& goaltype, const std::vector<double>& goals, const std::string& robotname = "", const std::string& toolname = "", const double robotspeed = -1, const double timeout = 10) {}
//     virtual void _HeartbeatMonitorThread(const double reinitializetimeout, const double commandtimeout) {}
//     virtual const std::string& GetSlaveRequestId() const {}

};

} // namespace mujinclient

#endif
