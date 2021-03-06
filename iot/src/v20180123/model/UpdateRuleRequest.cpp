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

#include <tencentcloud/iot/v20180123/model/UpdateRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iot::V20180123::Model;
using namespace rapidjson;
using namespace std;

UpdateRuleRequest::UpdateRuleRequest() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

string UpdateRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_query.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_actionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actions.begin(); itr != m_actions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dataTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataType, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void UpdateRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool UpdateRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string UpdateRuleRequest::GetName() const
{
    return m_name;
}

void UpdateRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateRuleRequest::GetDescription() const
{
    return m_description;
}

void UpdateRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

RuleQuery UpdateRuleRequest::GetQuery() const
{
    return m_query;
}

void UpdateRuleRequest::SetQuery(const RuleQuery& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool UpdateRuleRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<Action> UpdateRuleRequest::GetActions() const
{
    return m_actions;
}

void UpdateRuleRequest::SetActions(const vector<Action>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool UpdateRuleRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

uint64_t UpdateRuleRequest::GetDataType() const
{
    return m_dataType;
}

void UpdateRuleRequest::SetDataType(const uint64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool UpdateRuleRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}


