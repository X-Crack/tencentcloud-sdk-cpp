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

#include <tencentcloud/bizlive/v20190313/model/DescribeStreamPlayInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bizlive::V20190313::Model;
using namespace rapidjson;
using namespace std;

DescribeStreamPlayInfoListRequest::DescribeStreamPlayInfoListRequest() :
    m_endTimeHasBeenSet(false),
    m_playDomainHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

string DescribeStreamPlayInfoListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_playDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlayDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_playDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamPlayInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStreamPlayInfoListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeStreamPlayInfoListRequest::GetPlayDomain() const
{
    return m_playDomain;
}

void DescribeStreamPlayInfoListRequest::SetPlayDomain(const string& _playDomain)
{
    m_playDomain = _playDomain;
    m_playDomainHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::PlayDomainHasBeenSet() const
{
    return m_playDomainHasBeenSet;
}

string DescribeStreamPlayInfoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStreamPlayInfoListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStreamPlayInfoListRequest::GetStreamName() const
{
    return m_streamName;
}

void DescribeStreamPlayInfoListRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool DescribeStreamPlayInfoListRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

