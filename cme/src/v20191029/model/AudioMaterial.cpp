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

#include <tencentcloud/cme/v20191029/model/AudioMaterial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

AudioMaterial::AudioMaterial() :
    m_metaDataHasBeenSet(false),
    m_materialUrlHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_materialStatusHasBeenSet(false)
{
}

CoreInternalOutcome AudioMaterial::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AudioMaterial.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("MaterialUrl") && !value["MaterialUrl"].IsNull())
    {
        if (!value["MaterialUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioMaterial.MaterialUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialUrl = string(value["MaterialUrl"].GetString());
        m_materialUrlHasBeenSet = true;
    }

    if (value.HasMember("CoverUrl") && !value["CoverUrl"].IsNull())
    {
        if (!value["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AudioMaterial.CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(value["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }

    if (value.HasMember("MaterialStatus") && !value["MaterialStatus"].IsNull())
    {
        if (!value["MaterialStatus"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AudioMaterial.MaterialStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialStatus.Deserialize(value["MaterialStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioMaterial::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_metaDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_coverUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_coverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_materialStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaterialStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_materialStatus.ToJsonObject(value[key.c_str()], allocator);
    }

}


MediaMetaData AudioMaterial::GetMetaData() const
{
    return m_metaData;
}

void AudioMaterial::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool AudioMaterial::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string AudioMaterial::GetMaterialUrl() const
{
    return m_materialUrl;
}

void AudioMaterial::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool AudioMaterial::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

string AudioMaterial::GetCoverUrl() const
{
    return m_coverUrl;
}

void AudioMaterial::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool AudioMaterial::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

MaterialStatus AudioMaterial::GetMaterialStatus() const
{
    return m_materialStatus;
}

void AudioMaterial::SetMaterialStatus(const MaterialStatus& _materialStatus)
{
    m_materialStatus = _materialStatus;
    m_materialStatusHasBeenSet = true;
}

bool AudioMaterial::MaterialStatusHasBeenSet() const
{
    return m_materialStatusHasBeenSet;
}

