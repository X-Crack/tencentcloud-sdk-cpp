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

#include <tencentcloud/tione/v20191022/model/OutputDataConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace rapidjson;
using namespace std;

OutputDataConfig::OutputDataConfig() :
    m_cosOutputBucketHasBeenSet(false),
    m_cosOutputKeyPrefixHasBeenSet(false)
{
}

CoreInternalOutcome OutputDataConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CosOutputBucket") && !value["CosOutputBucket"].IsNull())
    {
        if (!value["CosOutputBucket"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputDataConfig.CosOutputBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosOutputBucket = string(value["CosOutputBucket"].GetString());
        m_cosOutputBucketHasBeenSet = true;
    }

    if (value.HasMember("CosOutputKeyPrefix") && !value["CosOutputKeyPrefix"].IsNull())
    {
        if (!value["CosOutputKeyPrefix"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputDataConfig.CosOutputKeyPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosOutputKeyPrefix = string(value["CosOutputKeyPrefix"].GetString());
        m_cosOutputKeyPrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputDataConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cosOutputBucketHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosOutputBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cosOutputBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosOutputKeyPrefixHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosOutputKeyPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cosOutputKeyPrefix.c_str(), allocator).Move(), allocator);
    }

}


string OutputDataConfig::GetCosOutputBucket() const
{
    return m_cosOutputBucket;
}

void OutputDataConfig::SetCosOutputBucket(const string& _cosOutputBucket)
{
    m_cosOutputBucket = _cosOutputBucket;
    m_cosOutputBucketHasBeenSet = true;
}

bool OutputDataConfig::CosOutputBucketHasBeenSet() const
{
    return m_cosOutputBucketHasBeenSet;
}

string OutputDataConfig::GetCosOutputKeyPrefix() const
{
    return m_cosOutputKeyPrefix;
}

void OutputDataConfig::SetCosOutputKeyPrefix(const string& _cosOutputKeyPrefix)
{
    m_cosOutputKeyPrefix = _cosOutputKeyPrefix;
    m_cosOutputKeyPrefixHasBeenSet = true;
}

bool OutputDataConfig::CosOutputKeyPrefixHasBeenSet() const
{
    return m_cosOutputKeyPrefixHasBeenSet;
}

