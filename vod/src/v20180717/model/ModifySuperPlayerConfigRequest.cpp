/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/vod/v20180717/model/ModifySuperPlayerConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ModifySuperPlayerConfigRequest::ModifySuperPlayerConfigRequest() :
    m_nameHasBeenSet(false),
    m_drmSwitchHasBeenSet(false),
    m_adaptiveDynamicStreamingDefinitionHasBeenSet(false),
    m_drmStreamingsInfoHasBeenSet(false),
    m_imageSpriteDefinitionHasBeenSet(false),
    m_resolutionNamesHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string ModifySuperPlayerConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_drmSwitchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DrmSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_drmSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_adaptiveDynamicStreamingDefinitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdaptiveDynamicStreamingDefinition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adaptiveDynamicStreamingDefinition, allocator);
    }

    if (m_drmStreamingsInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DrmStreamingsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_drmStreamingsInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageSpriteDefinitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageSpriteDefinition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageSpriteDefinition, allocator);
    }

    if (m_resolutionNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResolutionNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resolutionNames.begin(); itr != m_resolutionNames.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySuperPlayerConfigRequest::GetName() const
{
    return m_name;
}

void ModifySuperPlayerConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySuperPlayerConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifySuperPlayerConfigRequest::GetDrmSwitch() const
{
    return m_drmSwitch;
}

void ModifySuperPlayerConfigRequest::SetDrmSwitch(const string& _drmSwitch)
{
    m_drmSwitch = _drmSwitch;
    m_drmSwitchHasBeenSet = true;
}

bool ModifySuperPlayerConfigRequest::DrmSwitchHasBeenSet() const
{
    return m_drmSwitchHasBeenSet;
}

uint64_t ModifySuperPlayerConfigRequest::GetAdaptiveDynamicStreamingDefinition() const
{
    return m_adaptiveDynamicStreamingDefinition;
}

void ModifySuperPlayerConfigRequest::SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition)
{
    m_adaptiveDynamicStreamingDefinition = _adaptiveDynamicStreamingDefinition;
    m_adaptiveDynamicStreamingDefinitionHasBeenSet = true;
}

bool ModifySuperPlayerConfigRequest::AdaptiveDynamicStreamingDefinitionHasBeenSet() const
{
    return m_adaptiveDynamicStreamingDefinitionHasBeenSet;
}

DrmStreamingsInfoForUpdate ModifySuperPlayerConfigRequest::GetDrmStreamingsInfo() const
{
    return m_drmStreamingsInfo;
}

void ModifySuperPlayerConfigRequest::SetDrmStreamingsInfo(const DrmStreamingsInfoForUpdate& _drmStreamingsInfo)
{
    m_drmStreamingsInfo = _drmStreamingsInfo;
    m_drmStreamingsInfoHasBeenSet = true;
}

bool ModifySuperPlayerConfigRequest::DrmStreamingsInfoHasBeenSet() const
{
    return m_drmStreamingsInfoHasBeenSet;
}

uint64_t ModifySuperPlayerConfigRequest::GetImageSpriteDefinition() const
{
    return m_imageSpriteDefinition;
}

void ModifySuperPlayerConfigRequest::SetImageSpriteDefinition(const uint64_t& _imageSpriteDefinition)
{
    m_imageSpriteDefinition = _imageSpriteDefinition;
    m_imageSpriteDefinitionHasBeenSet = true;
}

bool ModifySuperPlayerConfigRequest::ImageSpriteDefinitionHasBeenSet() const
{
    return m_imageSpriteDefinitionHasBeenSet;
}

vector<ResolutionNameInfo> ModifySuperPlayerConfigRequest::GetResolutionNames() const
{
    return m_resolutionNames;
}

void ModifySuperPlayerConfigRequest::SetResolutionNames(const vector<ResolutionNameInfo>& _resolutionNames)
{
    m_resolutionNames = _resolutionNames;
    m_resolutionNamesHasBeenSet = true;
}

bool ModifySuperPlayerConfigRequest::ResolutionNamesHasBeenSet() const
{
    return m_resolutionNamesHasBeenSet;
}

string ModifySuperPlayerConfigRequest::GetComment() const
{
    return m_comment;
}

void ModifySuperPlayerConfigRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifySuperPlayerConfigRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

uint64_t ModifySuperPlayerConfigRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifySuperPlayerConfigRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifySuperPlayerConfigRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


