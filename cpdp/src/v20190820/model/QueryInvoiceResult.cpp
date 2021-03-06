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

#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryInvoiceResult::QueryInvoiceResult() :
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome QueryInvoiceResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `QueryInvoiceResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `QueryInvoiceResult.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsObject())
        {
            return CoreInternalOutcome(Error("response `QueryInvoiceResult.Data` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_data.Deserialize(value["Data"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryInvoiceResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_dataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_data.ToJsonObject(value[key.c_str()], allocator);
    }

}


string QueryInvoiceResult::GetMessage() const
{
    return m_message;
}

void QueryInvoiceResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool QueryInvoiceResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t QueryInvoiceResult::GetCode() const
{
    return m_code;
}

void QueryInvoiceResult::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool QueryInvoiceResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

QueryInvoiceResultData QueryInvoiceResult::GetData() const
{
    return m_data;
}

void QueryInvoiceResult::SetData(const QueryInvoiceResultData& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool QueryInvoiceResult::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

