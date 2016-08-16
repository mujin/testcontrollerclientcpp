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
#include <boost/property_tree/ptree.hpp>
#include "testmujincontrollerclient/mock_binpickingtask.h"

#ifdef MUJIN_USEZMQ
#endif

#ifdef _WIN32
#include <float.h>
#define isnan _isnan
#endif

#include <cmath>

#include "logging.h"

MUJIN_LOGGER("mujin.testcontrollerclientcpp.mock_binpickingtask");

namespace mujinclient {
    
} // end namespace mujinclient
