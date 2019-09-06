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

#include <tencentcloud/iai/v20180301/model/ModifyGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

ModifyGroupRequest::ModifyGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupExDescriptionInfosHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

string ModifyGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupExDescriptionInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupExDescriptionInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupExDescriptionInfos.begin(); itr != m_groupExDescriptionInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tag.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void ModifyGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ModifyGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<GroupExDescriptionInfo> ModifyGroupRequest::GetGroupExDescriptionInfos() const
{
    return m_groupExDescriptionInfos;
}

void ModifyGroupRequest::SetGroupExDescriptionInfos(const vector<GroupExDescriptionInfo>& _groupExDescriptionInfos)
{
    m_groupExDescriptionInfos = _groupExDescriptionInfos;
    m_groupExDescriptionInfosHasBeenSet = true;
}

bool ModifyGroupRequest::GroupExDescriptionInfosHasBeenSet() const
{
    return m_groupExDescriptionInfosHasBeenSet;
}

string ModifyGroupRequest::GetTag() const
{
    return m_tag;
}

void ModifyGroupRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ModifyGroupRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

