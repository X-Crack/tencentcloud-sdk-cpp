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

#include <tencentcloud/tiia/v20190529/model/RecognizeCarResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace rapidjson;
using namespace std;

RecognizeCarResponse::RecognizeCarResponse() :
    m_carCoordsHasBeenSet(false),
    m_carTagsHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeCarResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CarCoords") && !rsp["CarCoords"].IsNull())
    {
        if (!rsp["CarCoords"].IsArray())
            return CoreInternalOutcome(Error("response `CarCoords` is not array type"));

        const Value &tmpValue = rsp["CarCoords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Coord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_carCoords.push_back(item);
        }
        m_carCoordsHasBeenSet = true;
    }

    if (rsp.HasMember("CarTags") && !rsp["CarTags"].IsNull())
    {
        if (!rsp["CarTags"].IsArray())
            return CoreInternalOutcome(Error("response `CarTags` is not array type"));

        const Value &tmpValue = rsp["CarTags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CarTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_carTags.push_back(item);
        }
        m_carTagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<Coord> RecognizeCarResponse::GetCarCoords() const
{
    return m_carCoords;
}

bool RecognizeCarResponse::CarCoordsHasBeenSet() const
{
    return m_carCoordsHasBeenSet;
}

vector<CarTagItem> RecognizeCarResponse::GetCarTags() const
{
    return m_carTags;
}

bool RecognizeCarResponse::CarTagsHasBeenSet() const
{
    return m_carTagsHasBeenSet;
}

