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

#include <tencentcloud/yunsou/v20191115/model/DataManipulationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunsou::V20191115::Model;
using namespace rapidjson;
using namespace std;

DataManipulationRequest::DataManipulationRequest() :
    m_opTypeHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_contentsHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

string DataManipulationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_opTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_opType.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contents.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DataManipulationRequest::GetOpType() const
{
    return m_opType;
}

void DataManipulationRequest::SetOpType(const string& _opType)
{
    m_opType = _opType;
    m_opTypeHasBeenSet = true;
}

bool DataManipulationRequest::OpTypeHasBeenSet() const
{
    return m_opTypeHasBeenSet;
}

string DataManipulationRequest::GetEncoding() const
{
    return m_encoding;
}

void DataManipulationRequest::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool DataManipulationRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

string DataManipulationRequest::GetContents() const
{
    return m_contents;
}

void DataManipulationRequest::SetContents(const string& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool DataManipulationRequest::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

uint64_t DataManipulationRequest::GetResourceId() const
{
    return m_resourceId;
}

void DataManipulationRequest::SetResourceId(const uint64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DataManipulationRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}


