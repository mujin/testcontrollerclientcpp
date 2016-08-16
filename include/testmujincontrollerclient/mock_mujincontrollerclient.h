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
#ifndef MUJIN_TESTCONTROLLERCLIENT_H
#define MUJIN_TESTCONTROLLERCLIENT_H



#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <string>
#include <exception>

#include <iomanip>
#include <fstream>
#include <sstream>

#include <boost/version.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>
#include <boost/format.hpp>
#include <boost/array.hpp>
#include <boost/property_tree/ptree.hpp>
#include <gmock/gmock.h>
#include <mujincontrollerclient/mujincontrollerclient.h>

namespace mujinclient {

class MockControllerClient;

typedef boost::shared_ptr<MockControllerClient> MockControllerClientPtr;
typedef boost::weak_ptr<MockControllerClient> MockControllerClientWeakPtr;

/// \brief Creates on MUJIN Controller instance.
///
/// Only one call can be made at a time. In order to make multiple calls simultaneously, create another instance.
class MUJINCLIENT_API MockControllerClient: ControllerClient
{
public:
    MockControllerClient() {}
    virtual ~MockControllerClient() {
    }
    virtual void SetCharacterEncoding(const std::string& newencoding) {}
    virtual void SetLanguage(const std::string& language) {}
    virtual const std::string& GetUserName() const {}
    virtual void SetProxy(const std::string& serverport, const std::string& userpw) {}
    virtual void RestartServer() {}
    virtual void Upgrade(const std::vector<unsigned char>& vdata) {}
    virtual std::string GetVersion() {}
    virtual void CancelAllJobs() {}
    virtual void GetRunTimeStatuses(std::vector<JobStatus>& statuses, int options=0) {}
    virtual void GetScenePrimaryKeys(std::vector<std::string>& scenekeys) {}
    virtual SceneResourcePtr RegisterScene_UTF8(const std::string& uri, const std::string& scenetype) {}
    virtual SceneResourcePtr RegisterScene_UTF16(const std::wstring& uri, const std::string& scenetype) {}
    virtual SceneResourcePtr ImportSceneToCOLLADA_UTF8(const std::string& sourceuri, const std::string& sourcescenetype, const std::string& newuri, bool overwrite=false) {}
    virtual SceneResourcePtr ImportSceneToCOLLADA_UTF16(const std::wstring& sourceuri, const std::string& sourcescenetype, const std::wstring& newuri, bool overwrite=false) {}
    virtual void SyncUpload_UTF8(const std::string& sourcefilename, const std::string& destinationdir, const std::string& scenetype) {}
    virtual void SyncUpload_UTF16(const std::wstring& sourcefilename, const std::wstring& destinationdir, const std::string& scenetype) {}
    virtual void UploadFileToController_UTF8(const std::string& filename, const std::string& desturi) {}
    virtual void UploadFileToController_UTF16(const std::wstring& filename, const std::wstring& desturi) {}
    virtual void UploadDataToController_UTF8(const std::vector<unsigned char>& vdata, const std::string& desturi) {}
    virtual void UploadDirectoryToController_UTF8(const std::string& copydir, const std::string& desturi) {}
    virtual void UploadDirectoryToController_UTF16(const std::wstring& copydir, const std::wstring& desturi) {}
    virtual void DownloadFileFromController_UTF8(const std::string& desturi, std::vector<unsigned char>& vdata) {}
    virtual void DownloadFileFromController_UTF16(const std::wstring& desturi, std::vector<unsigned char>& vdata) {}
    virtual void DownloadFileFromControllerIfModifiedSince_UTF8(const std::string& desturi, long localtimeval, long &remotetimeval, std::vector<unsigned char>& vdata) {}
    virtual void DownloadFileFromControllerIfModifiedSince_UTF16(const std::wstring& desturi, long localtimeval, long &remotetimeval, std::vector<unsigned char>& vdata) {}
    virtual void DeleteFileOnController_UTF8(const std::string& uri) {}
    virtual void DeleteFileOnController_UTF16(const std::wstring& uri) {}
    virtual void DeleteDirectoryOnController_UTF8(const std::string& uri) {}
    virtual void DeleteDirectoryOnController_UTF16(const std::wstring& uri) {}
    virtual void SetDefaultSceneType(const std::string& scenetype) {}
    virtual const std::string& GetDefaultSceneType() {}
    virtual void SetDefaultTaskType(const std::string& tasktype) {}
    virtual const std::string& GetDefaultTaskType() {}
    virtual std::string GetScenePrimaryKeyFromURI_UTF8(const std::string& uri) {}
    virtual std::string GetScenePrimaryKeyFromURI_UTF16(const std::wstring& uri) {}
    virtual std::string GetPrimaryKeyFromName_UTF8(const std::string& name) {}
    virtual std::string GetPrimaryKeyFromName_UTF16(const std::wstring& name) {}
    virtual std::string GetNameFromPrimaryKey_UTF8(const std::string& pk) {}
    virtual std::wstring GetNameFromPrimaryKey_UTF16(const std::string& pk) {}
};

MUJINCLIENT_API MockControllerClientPtr CreateMockControllerClient(const std::string& usernamepassword, const std::string& url=std::string(), const std::string& proxyserverport=std::string(), const std::string& proxyuserpw=std::string(), int options=0);

/// \brief called at the very end of an application to safely destroy all controller client resources
MUJINCLIENT_API void DestroyMockControllerClient();

/// \deprecated 14/03/14
MUJINCLIENT_API void MockControllerClientDestroy() MUJINCLIENT_DEPRECATED;


}


BOOST_STATIC_ASSERT(MUJINCLIENT_VERSION_MAJOR>=0&&MUJINCLIENT_VERSION_MAJOR<=255);
BOOST_STATIC_ASSERT(MUJINCLIENT_VERSION_MINOR>=0&&MUJINCLIENT_VERSION_MINOR<=255);
BOOST_STATIC_ASSERT(MUJINCLIENT_VERSION_PATCH>=0&&MUJINCLIENT_VERSION_PATCH<=255);

#endif
